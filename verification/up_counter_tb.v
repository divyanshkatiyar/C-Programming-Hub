// =============================================================================
// Module Name: up_counter_tb
// Description: Behavioral Testbench driving stimuli into the up_counter DUT
// =============================================================================

`timescale 1ns / 1ps

module up_counter_tb;

    // Inputs to the Design Under Test (DUT) declared as registers
    reg clk;
    reg rst_n;
    reg enable;

    // Outputs from the DUT declared as wires
    wire [3:0] out;

    // 1. Instantiate the Device Under Test (DUT)
    up_counter uut (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .out(out)
    );

    // 2. System Clock Generation Loop (50MHz Clock Frequency Simulation)
    always begin
        #10 clk = ~clk; // Toggle clock every 10 time units (Period = 20ns)
    end

    // 3. Stimulus Driver Block
    initial begin
        // Initialize Baseline Signals
        clk = 0;
        rst_n = 1;
        enable = 0;

        // Apply Asynchronous Reset Assertion
        #5 rst_n = 0; 
        #15 rst_n = 1; // De-assert reset after 15ns (aligned off clock edge)
        
        // Enable Counting Logic
        #10 enable = 1;
        
        // Let the counter run for multiple clock cycles
        #250;
        
        // Disable Counting Logic temporarily to test state retention
        enable = 0;
        #40;
        
        // Re-enable and test asynchronous reset assertion mid-count
        enable = 1;
        #40;
        rst_n = 0; // Trigger sudden asynchronous reset
        #20;
        rst_n = 1; // Release reset

        #40;
        $finish; // Terminate simulation execution loop
    end

    // 4. Waveform Data Dumping (Crucial for GTKWave/EDA Playground Integration)
    initial begin
        $dumpfile("up_counter_dump.vcd"); // Specifies output VCD wave filename
        $dumpvars(0, up_counter_tb);       // Dump all variables in the testbench module
    end

endmodule

