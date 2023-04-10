
#include <systemc.h>
#include <verilated.h>
#include <verilated_vcd_sc.h>
#include <sys/stat.h> // mkdir
#include "Vtop.h"


int sc_main(int argc, char *argv[])
{
    if (false && argc && argv)
    {
    }
    Verilated::debug(0);
    Verilated::randReset(2);
    Verilated::traceEverOn(true);
    Verilated::commandArgs(argc, argv);
    ios::sync_with_stdio();
    sc_clock clk{"clk", 2, 0.5, 0, false};
    sc_signal<bool> rst_n;
    sc_signal<bool> a;
    sc_signal<bool> rise;
    sc_signal<bool> down;
    const std::unique_ptr<Vtop> top{new Vtop{"top"}};
    top->clk(clk);
    top->rst_n(rst_n);
    top->a(a);
    top->rise(rise);
    top->down(down);
    VerilatedVcdSc *tfp = nullptr;
    const char *flag = Verilated::commandArgsPlusMatch("trace");
    if (flag && 0 == strcmp(flag, "+trace"))
    {
        tfp = new VerilatedVcdSc;
        top->trace(tfp, 99); // Trace 99 levels of hierarchy
        tfp->open("wave.vcd");
    }
    while (!Verilated::gotFinish())
    {
        if (tfp)
            tfp->flush();
        // Apply inputs
        if (sc_time_stamp() >= sc_time(0, SC_NS) && sc_time_stamp() < sc_time(10, SC_NS))
        {
            rst_n = 0; // Assert reset
        }
        else
        {
            rst_n = 1; // Deassert reset
        }
        if (sc_time_stamp() > sc_time(15, SC_NS) && sc_time_stamp() < sc_time(20, SC_NS))
        {
            a = 0;
        }
        if (sc_time_stamp() >= sc_time(20, SC_NS) && sc_time_stamp() < sc_time(30, SC_NS))
        {
            a = 1;
        }
        if (sc_time_stamp() >= sc_time(30, SC_NS) && sc_time_stamp() < sc_time(40, SC_NS))
        {
            a = 0;
        }
        if (sc_time_stamp() >= sc_time(60, SC_NS))
        {
            break;
        }
        // Simulate 1ns
        sc_start(1, SC_NS);
        cout << "[" << sc_time_stamp() << "]"
             << " clk=" << top->clk << " rst_n=" << top->rst_n << " a=" << top->a << " rise=" << top->rise << " down=" << top->down << endl;
    }
    top->final();
    if (tfp)
    {
        tfp->close();
        tfp = nullptr;
    }
    return 0;
}
