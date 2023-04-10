// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__clk, vlSelf->clk);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Body
    if (vlSelf->__Vcellinp__top__rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__a_dely)) 
             & (IData)(vlSelf->__Vcellinp__top__a))) {
            vlSelf->__Vcellout__top__rise = 1U;
            vlSelf->__Vcellout__top__down = 0U;
        } else if (((IData)(vlSelf->top__DOT__a_dely) 
                    & (~ (IData)(vlSelf->__Vcellinp__top__a)))) {
            vlSelf->__Vcellout__top__down = 1U;
            vlSelf->__Vcellout__top__rise = 0U;
        } else {
            vlSelf->__Vcellout__top__rise = 0U;
            vlSelf->__Vcellout__top__down = 0U;
        }
    } else {
        vlSelf->__Vcellout__top__rise = 0U;
        vlSelf->__Vcellout__top__down = 0U;
    }
    VL_ASSIGN_SII(1,vlSelf->rise, vlSelf->__Vcellout__top__rise);
    VL_ASSIGN_SII(1,vlSelf->down, vlSelf->__Vcellout__top__down);
    vlSelf->top__DOT__a_dely = ((IData)(vlSelf->__Vcellinp__top__rst_n) 
                                & (IData)(vlSelf->__Vcellinp__top__a));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__rst_n, vlSelf->rst_n);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__a, vlSelf->a);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if ((((IData)(vlSelf->__Vcellinp__top__clk) & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__top__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP____Vcellinp__top__rst_n) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__top__rst_n))))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP____Vcellinp__top__clk = vlSelf->__Vcellinp__top__clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP____Vcellinp__top__rst_n 
        = vlSelf->__VinpClk__TOP____Vcellinp__top__rst_n;
    vlSelf->__VinpClk__TOP____Vcellinp__top__rst_n 
        = vlSelf->__Vcellinp__top__rst_n;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->__Vcellinp__top__rst_n ^ vlSelf->__Vchglast__TOP____Vcellinp__top__rst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->__Vcellinp__top__rst_n ^ vlSelf->__Vchglast__TOP____Vcellinp__top__rst_n))) VL_DBG_MSGF("        CHANGE: top.v:3: __Vcellinp__top__rst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP____Vcellinp__top__rst_n 
        = vlSelf->__Vcellinp__top__rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
