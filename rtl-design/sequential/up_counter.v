// =============================================================================
// Module Name: up_counter
// Description: 4-Bit Synchronous Up-Counter with Asynchronous Active-Low Reset
// Target:      Synthesizable RTL for ASIC / FPGA mapping
// =============================================================================

module up_counter (
    input wire clk,      // System Clock Signal
    input wire rst_n,    // Asynchronous Reset (Active-Low)
    input wire enable,   // Count Enable Control Signal
    output reg [3:0] out // 4-Bit Output Register Registry Data
);

    // Edge-triggered sequential execution block
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            out <= 4'b0000; // Force non-blocking reset allocation to baseline zero
        end
        else if (enable) begin
            out <= out + 1'b1; // Synchronous state increment
        end
        // Implicit latch prevention: if enable is low, the register retains its state
    end

endmodule
