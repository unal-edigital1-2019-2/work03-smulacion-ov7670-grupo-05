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
		parameter AW = 15 // Cantidad de bits  de la direccin 
		)(
		input pclk,
		input rst,
		input vsync,
		input href,
		input [7:0] px_data,

		output reg [AW-1:0] mem_px_addr = 0,
		output reg [7:0] mem_px_data = 0,
		output reg px_wr = 0
   );

	reg cont = 1'b0;
	
	always@(posedge pclk)
	begin
		if(href==1 & vsync==0)
		begin			
			if (cont==0)
			begin
				mem_px_data[7:2] <= {px_data[7:5],px_data[2:0]};
				px_wr <= 0;
			end
			else 
			begin
				mem_px_data[1:0] <= {px_data[4:3]};
				px_wr <= 1;
			end
			cont <= ~cont;	
		end
		if(href==0 & vsync==0)
		begin
			px_wr <= 0;
		end
	/*end
	
	always@(negedge pclk)
	begin*/
		if(href==1 & vsync==0 & (cont == 1))
		begin
			mem_px_addr <= mem_px_addr + 1;
		end
		/*if(mem_px_addr == 19200)
			mem_px_addr = 0;*/
	end


endmodule
