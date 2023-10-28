module seg(
  input clk,
  input rst,
  input [7:0] in,
  input [7:0] in2,
  output reg [6:0] h1,
  output reg [6:0] h2,
  output reg [6:0] h3,
  output reg [6:0] h4,
  output reg [6:0] h5,
  output reg [6:0] h6
);
reg [7:0] count;
reg [15:0] in_queue; //store last in and precent in

always @(in) begin
    in_queue[7:0] = in;
    if (in == 8'hf0) begin
        h1 = 7'b1111111;
        h2 = 7'b1111111;
        count = count + 1;
        end
    else if(in_queue[15:8] != 8'hf0)begin
        case(in[3:0])
            4'h0 : h1 = 7'b1111111;
            4'h1 : h1 = 7'b1111001;
            4'h2 : h1 = 7'b0100100;
            4'h3 : h1 = 7'b0110000;
            4'h4 : h1 = 7'b0011001;
            4'h5 : h1 = 7'b0010010;
            4'h6 : h1 = 7'b0000010;
            4'h7 : h1 = 7'b1111000;
            4'h8 : h1 = 7'b0000000;
            4'h9 : h1 = 7'b0010000;
            4'ha : h1 = 7'b0001000;
            4'hb : h1 = 7'b0000011;
            4'hc : h1 = 7'b1000110;
            4'hd : h1 = 7'b0100001;
            4'he : h1 = 7'b0000110;
            4'hf : h1 = 7'b0001110;
            default: h1 = 7'b1111111;
        endcase
        case(in[7:4])
            4'h0 : h2 = 7'b1111111;
            4'h1 : h2 = 7'b1111001;
            4'h2 : h2 = 7'b0100100;
            4'h3 : h2 = 7'b0110000;
            4'h4 : h2 = 7'b0011001;
            4'h5 : h2 = 7'b0010010;
            4'h6 : h2 = 7'b0000010;
            4'h7 : h2 = 7'b1111000;
            4'h8 : h2 = 7'b0000000;
            4'h9 : h2 = 7'b0010000;
            4'ha : h2 = 7'b0001000;
            4'hb : h2 = 7'b0000011;
            4'hc : h2 = 7'b1000110;
            4'hd : h2 = 7'b0100001;
            4'he : h2 = 7'b0000110;
            4'hf : h2 = 7'b0001110;
            default: h2 = 7'b1111111;
        endcase
        case(in2[3:0])
            4'h0 : h5 = 7'b1111111;
            4'h1 : h5 = 7'b1111001;
            4'h2 : h5 = 7'b0100100;
            4'h3 : h5 = 7'b0110000;
            4'h4 : h5 = 7'b0011001;
            4'h5 : h5 = 7'b0010010;
            4'h6 : h5 = 7'b0000010;
            4'h7 : h5 = 7'b1111000;
            4'h8 : h5 = 7'b0000000;
            4'h9 : h5 = 7'b0010000;
            4'ha : h5 = 7'b0001000;
            4'hb : h5 = 7'b0000011;
            4'hc : h5 = 7'b1000110;
            4'hd : h5 = 7'b0100001;
            4'he : h5 = 7'b0000110;
            4'hf : h5 = 7'b0001110;
            default: h5 = 7'b1111111;
        endcase
        case(in2[7:4])
            4'h0 : h6 = 7'b1111111;
            4'h1 : h6 = 7'b1111001;
            4'h2 : h6 = 7'b0100100;
            4'h3 : h6 = 7'b0110000;
            4'h4 : h6 = 7'b0011001;
            4'h5 : h6 = 7'b0010010;
            4'h6 : h6 = 7'b0000010;
            4'h7 : h6 = 7'b1111000;
            4'h8 : h6 = 7'b0000000;
            4'h9 : h6 = 7'b0010000;
            4'ha : h6 = 7'b0001000;
            4'hb : h6 = 7'b0000011;
            4'hc : h6 = 7'b1000110;
            4'hd : h6 = 7'b0100001;
            4'he : h6 = 7'b0000110;
            4'hf : h6 = 7'b0001110;
            default: h6 = 7'b1111111;
        endcase
    end else begin h1 = 7'b1111111; h2 = 7'b1111111; h5 = 7'b1111111; h6 = 7'b1111111;end

    case(count[3:0])
            4'h0 : h3 = 7'b1111111;
            4'h1 : h3 = 7'b1111001;
            4'h2 : h3 = 7'b0100100;
            4'h3 : h3 = 7'b0110000;
            4'h4 : h3 = 7'b0011001;
            4'h5 : h3 = 7'b0010010;
            4'h6 : h3 = 7'b0000010;
            4'h7 : h3 = 7'b1111000;
            4'h8 : h3 = 7'b0000000;
            4'h9 : h3 = 7'b0010000;
            4'ha : h3 = 7'b0001000;
            4'hb : h3 = 7'b0000011;
            4'hc : h3 = 7'b1000110;
            4'hd : h3 = 7'b0100001;
            4'he : h3 = 7'b0000110;
            4'hf : h3 = 7'b0001110;
            default: h3 = 7'b1111111;
        endcase
        case(count[7:4])
            4'h0 : h4 = 7'b1111111;
            4'h1 : h4 = 7'b1111001;
            4'h2 : h4 = 7'b0100100;
            4'h3 : h4 = 7'b0110000;
            4'h4 : h4 = 7'b0011001;
            4'h5 : h4 = 7'b0010010;
            4'h6 : h4 = 7'b0000010;
            4'h7 : h4 = 7'b1111000;
            4'h8 : h4 = 7'b0000000;
            4'h9 : h4 = 7'b0010000;
            4'ha : h4 = 7'b0001000;
            4'hb : h4 = 7'b0000011;
            4'hc : h4 = 7'b1000110;
            4'hd : h4 = 7'b0100001;
            4'he : h4 = 7'b0000110;
            4'hf : h4 = 7'b0001110;
            default: h4 = 7'b1111111;
        endcase
    in_queue[15:8] = in;
end

endmodule
