`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:49:16 01/28/2020 
// Design Name: 
// Module Name:    fsm 
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
module fsm(
    input reloj,
	 input HREF,
	 input VSYNC,
	 output reg [15:0] LEDs
	 
	 );
	 reg [15:0] cont=0;
	 reg past_VSYNC= 2'b00;
	 reg init=0;
	 
	 always @ (posedge reloj)
	 begin
		
		if(HREF && ~VSYNC)
		begin
		 cont=cont+1;
		 
		end
		
		if(VSYNC && ~past_VSYNC && ~init)
		begin
			LEDs[15:0] = cont;
			init=1;
		end
		
		past_VSYNC=VSYNC;
	 
	 end
	 
	 
	 
	 
	 


endmodule
