// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
    , clk("clk"), rst_n("rst_n"), a("a"), rise("rise"), 
      down("down")
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__clk, vlSelf->clk);
    VL_ASSIGN_SII(1,vlSelf->down, vlSelf->__Vcellout__top__down);
    VL_ASSIGN_SII(1,vlSelf->rise, vlSelf->__Vcellout__top__rise);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__rst_n, vlSelf->rst_n);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__a, vlSelf->a);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____Vcellinp__top__clk = vlSelf->__Vcellinp__top__clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__top__rst_n 
        = vlSelf->__VinpClk__TOP____Vcellinp__top__rst_n;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellout__top__down = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__top__rise = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__top__a = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__top__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__top__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__a_dely = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP____Vcellinp__top__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP____Vcellinp__top__rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
