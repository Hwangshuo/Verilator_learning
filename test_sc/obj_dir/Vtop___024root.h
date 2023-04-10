// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    sc_in<bool> clk;
    sc_in<bool> rst_n;
    sc_in<bool> a;
    sc_out<bool> rise;
    sc_out<bool> down;

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__a_dely;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellinp__top__rst_n;
    CData/*0:0*/ __Vcellinp__top__clk;
    CData/*0:0*/ __Vcellout__top__down;
    CData/*0:0*/ __Vcellout__top__rise;
    CData/*0:0*/ __Vcellinp__top__a;
    CData/*0:0*/ __VinpClk__TOP____Vcellinp__top__rst_n;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__top__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP____Vcellinp__top__rst_n;
    CData/*0:0*/ __Vchglast__TOP____Vcellinp__top__rst_n;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
