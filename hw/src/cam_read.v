`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:14:22 12/02/2019 
// Design Name: 
// Module Name:    cam_read 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module cam_read #(
		parameter AW = 17 // Cantidad de bits  de la direccin 
		)(
		input rst,
		input pclk,		
		input vsync,
		input href,
		input [7:0] px_data,
		input [2:0] option,
		input boton_CAM,
		input boton_video,

		output reg [AW-1:0] mem_px_addr = 0,
		output reg [7:0] mem_px_data = 0,
		output reg px_wr = 0,
		output reg [15:0] leds
   );
	
	reg [2:0] fsm_state=1;
	reg pas_vsync = 0;
	reg cont = 1'b0;
	reg [15:0] cont_href=16'b0000000000000000;
	reg [15:0] pas_href=16'b0000000000000000;
	reg [15:0] cont_pixel=16'b0000000000000000;
	reg [15:0] cont_pclk=16'b0000000000000000;
	
	always@(posedge pclk) begin
		
		if (rst)
		begin
			mem_px_addr=0;
			leds[15:0]=16'b0000000000000000;
			cont_href[15:0]=16'b0000000000000000;
			fsm_state=1;
			pas_vsync=0;
			
		end else 
				
		case(fsm_state) 
		//3'b000:		// On/off
			//if (mem_px_addr == 0) fsm_state=1;
			
		1:		// Precaptura de datos
			begin
				cont_href[15:0]=16'h0000;
				mem_px_addr=0;
				if(pas_vsync && !vsync) fsm_state=2;
			end
		2:		// Lineas horizontales
			begin
				if(!pas_href && href) begin
						cont_href = cont_href +1;
						cont_pixel=0;
						fsm_state=3;
						mem_px_data[7:2] = {px_data[7:5],px_data[2:0]};
						px_wr = 0;
						cont = ~cont;
						cont_pclk = cont_pclk + 1;
					
				end 
				else if(vsync) 
						fsm_state=1;
				else if(boton_CAM)
						fsm_state = 4;
			end
			
		3:		// Pixeles ++
		begin
			if(href) begin  
				// contador de pixeles
				if (cont==0)
				begin
					mem_px_data[7:2] = {px_data[7:5],px_data[2:0]};
					px_wr = 0;
					cont_pclk = cont_pclk + 1;
				end
				else 
				begin
					mem_px_data[1:0] = {px_data[4:3]};
					px_wr = 1;
					if(mem_px_addr < 76800)
						mem_px_addr = mem_px_addr + 1;
					cont_pixel = cont_pixel +1;
					
				end
				cont = ~cont;
				
			end else

				fsm_state=2;

			
				
		end
		
		4:		// Mostrar imagen		
		begin
			px_wr = 0;
			
			case(option)
			1:
			leds[15:0]=cont_href;
			
			3:
			leds[15:0]=cont_pixel;
			
			7:
			leds[15:0]=cont_pclk;
			endcase
			
			if(boton_video)
				fsm_state = 1;
			
		end
		endcase
		
		pas_vsync = vsync;
	end

	

//	
//	
//	always@(posedge pclk)
//	begin
//		if(href==1 & vsync==0)
//		begin			
			
//		if(href==0 & vsync==0)
//		begin
//			px_wr <= 0;
//		end
//	/*end
//	
//	always@(negedge pclk)
//	begin*/
//		if(href==1 & vsync==0 & (cont == 1))
//		begin
//			mem_px_addr <= mem_px_addr + 1;
//		end
		/*if(mem_px_addr == 19200)
			mem_px_addr = 0;*/
//	end


endmodule
