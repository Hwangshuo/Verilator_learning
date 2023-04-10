#include <memory>
#include <verilated.h>
#include "Vtop.h"
#include "verilated_vcd_c.h"

double sc_time_stamp() { return 0; }
int main(int argc, char **argv)
{
    if (false && argc && argv)
    {
    }
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->debug(0);
    contextp->randReset(2);
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);
    const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 0);
    tfp->open("wave.vcd"); // 设置输出的文件wave.vcd
    top->rst_n = 0;
    top->clk = 0;
    top->a = 0;
    while (!contextp->gotFinish())
    {
        contextp->timeInc(1);
        top->clk = !top->clk;
        if (!top->clk)
        {
            if (contextp->time() > 1 && contextp->time() < 10)
            {
                top->rst_n = 0; // Assert reset
            }
            else
            {
                top->rst_n = 1; // Deassert reset
            }
            if (contextp->time() > 15 && contextp->time() < 20)
            {
                top->a = 0;
            }
            if (contextp->time() >= 20 && contextp->time() < 30)
            {
                top->a = 1;
            }
            if (contextp->time() >= 30 && contextp->time() < 40)
            {
                top->a = 0;
            }
            if (contextp->time() >= 60)
            {
                break;
            }
        }
        top->eval();
        tfp->dump(contextp->time()); // dump wave
        VL_PRINTF("[%" PRId64 "] clk=%x rst_n=%x a=%x rise=%x down=%x \n", contextp->time(), top->clk, top->rst_n, top->a, top->rise, top->down);
    }
    top->final();
    tfp->close();
    return 0;
}