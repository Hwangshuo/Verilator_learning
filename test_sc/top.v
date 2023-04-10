module top(
	input clk,
	input rst_n,
	input a,
	
	output reg rise,
	output reg down
);
	
	reg a_dely;
	always @(posedge clk or posedge rst_n)
	begin
		if(~rst_n)
		begin
			rise<=0;
			down<=0;
			a_dely<=0;
		end
		else
		begin
			a_dely<=a;
			if(~a_dely&&a)
			begin
				rise<=1;
				down<=0;
			end
			else if(a_dely&~a)
			begin
				down<=1;
				rise<=0;
			end
			else
			begin
				rise<=0;
				down<=0;
			end
		end
	end
endmodule
