// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+88,"rst", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+88,"rst", false,-1);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+89,"pc", false,-1, 31,0);
    tracep->declBit(c+7,"rf_wr_en", false,-1);
    tracep->declBus(c+8,"rf_wr_sel", false,-1, 1,0);
    tracep->declBit(c+9,"do_jump", false,-1);
    tracep->declBit(c+10,"alu_a_sel", false,-1);
    tracep->declBit(c+97,"alu_b_sel", false,-1);
    tracep->declBus(c+11,"alu_ctrl", false,-1, 3,0);
    tracep->declBus(c+12,"imm", false,-1, 31,0);
    tracep->declBus(c+13,"dm_rd_sel", false,-1, 2,0);
    tracep->declBus(c+14,"dm_wr_sel", false,-1, 1,0);
    tracep->declBus(c+90,"jump_addr", false,-1, 31,0);
    tracep->pushNamePrefix("exu0 ");
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+89,"pc", false,-1, 31,0);
    tracep->declBit(c+7,"rf_wr_en", false,-1);
    tracep->declBus(c+8,"rf_wr_sel", false,-1, 1,0);
    tracep->declBit(c+10,"alu_a_sel", false,-1);
    tracep->declBit(c+97,"alu_b_sel", false,-1);
    tracep->declBus(c+11,"alu_ctrl", false,-1, 3,0);
    tracep->declBus(c+12,"imm", false,-1, 31,0);
    tracep->declBus(c+13,"dm_rd_sel", false,-1, 2,0);
    tracep->declBus(c+14,"dm_wr_sel", false,-1, 1,0);
    tracep->declBus(c+90,"jump_addr", false,-1, 31,0);
    tracep->declBus(c+91,"alu_a", false,-1, 31,0);
    tracep->declBus(c+12,"alu_b", false,-1, 31,0);
    tracep->declBus(c+92,"alu_out", false,-1, 31,0);
    tracep->declBus(c+93,"rf_wdata", false,-1, 31,0);
    tracep->declBus(c+94,"rs1", false,-1, 31,0);
    tracep->declBus(c+95,"rs2", false,-1, 31,0);
    tracep->declBus(c+96,"dm_data", false,-1, 31,0);
    tracep->pushNamePrefix("alu0 ");
    tracep->declBus(c+91,"SrcA", false,-1, 31,0);
    tracep->declBus(c+12,"SrcB", false,-1, 31,0);
    tracep->declBus(c+11,"func", false,-1, 3,0);
    tracep->declBus(c+92,"ALUout", false,-1, 31,0);
    tracep->declBus(c+91,"signed_a", false,-1, 31,0);
    tracep->declBus(c+12,"signed_b", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile0 ");
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+7,"rf_wr_en", false,-1);
    tracep->declBus(c+15,"waddr", false,-1, 4,0);
    tracep->declBus(c+93,"wdata", false,-1, 31,0);
    tracep->declBus(c+16,"raddr1", false,-1, 4,0);
    tracep->declBus(c+17,"raddr2", false,-1, 4,0);
    tracep->declBus(c+94,"rdata1", false,-1, 31,0);
    tracep->declBus(c+95,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+55+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu0 ");
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+89,"pc", false,-1, 31,0);
    tracep->declBit(c+7,"rf_wr_en", false,-1);
    tracep->declBus(c+8,"rf_wr_sel", false,-1, 1,0);
    tracep->declBit(c+9,"do_jump", false,-1);
    tracep->declBit(c+10,"alu_a_sel", false,-1);
    tracep->declBit(c+97,"alu_b_sel", false,-1);
    tracep->declBus(c+11,"alu_ctrl", false,-1, 3,0);
    tracep->declBus(c+13,"dm_rd_sel", false,-1, 2,0);
    tracep->declBus(c+14,"dm_wr_sel", false,-1, 1,0);
    tracep->declBus(c+12,"imm", false,-1, 31,0);
    tracep->declBus(c+18,"op", false,-1, 6,0);
    tracep->declBus(c+19,"funct", false,-1, 2,0);
    tracep->declBit(c+20,"is_addi", false,-1);
    tracep->declBit(c+21,"is_auipc", false,-1);
    tracep->declBit(c+22,"is_lui", false,-1);
    tracep->declBit(c+23,"is_jal", false,-1);
    tracep->declBit(c+24,"is_jalr", false,-1);
    tracep->declBit(c+25,"is_sw", false,-1);
    tracep->declBit(c+26,"is_ebreak", false,-1);
    tracep->declBit(c+98,"is_lb", false,-1);
    tracep->declBit(c+99,"is_lbu", false,-1);
    tracep->declBit(c+100,"is_lh", false,-1);
    tracep->declBit(c+101,"is_lhu", false,-1);
    tracep->declBit(c+27,"is_lw", false,-1);
    tracep->declBit(c+102,"is_sb", false,-1);
    tracep->declBit(c+103,"is_sh", false,-1);
    tracep->declBit(c+28,"is_add_type", false,-1);
    tracep->declBit(c+29,"is_I", false,-1);
    tracep->declBit(c+21,"is_U", false,-1);
    tracep->declBit(c+23,"is_J", false,-1);
    tracep->declBit(c+104,"is_R", false,-1);
    tracep->declBit(c+30,"is_S", false,-1);
    tracep->pushNamePrefix("imm0 ");
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+12,"imm", false,-1, 31,0);
    tracep->pushNamePrefix("mux0 ");
    tracep->declBus(c+105,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+106,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+12,"out", false,-1, 31,0);
    tracep->declBus(c+18,"key", false,-1, 6,0);
    tracep->declArray(c+31,"lut", false,-1, 194,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+105,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+106,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+107,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+108,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+12,"out", false,-1, 31,0);
    tracep->declBus(c+18,"key", false,-1, 6,0);
    tracep->declBus(c+109,"default_out", false,-1, 31,0);
    tracep->declArray(c+31,"lut", false,-1, 194,0);
    tracep->declBus(c+110,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+38+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+48+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+53,"lut_out", false,-1, 31,0);
    tracep->declBit(c+54,"hit", false,-1);
    tracep->declBus(c+111,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("pc0 ");
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+88,"rst", false,-1);
    tracep->declBit(c+9,"jump", false,-1);
    tracep->declBus(c+90,"jump_addr", false,-1, 31,0);
    tracep->declBus(c+89,"pc", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<7>/*223:0*/ __Vtemp_h6749d75c__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__key_list[4]),7);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__inst),32);
    bufp->fullBit(oldp+7,(((IData)(vlSelf->top__DOT__idu0__DOT__is_I) 
                           | ((0x17U == (0x7fU & vlSelf->top__DOT__inst)) 
                              | (0x6fU == (0x7fU & vlSelf->top__DOT__inst))))));
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__rf_wr_sel),2);
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__do_jump));
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__alu_a_sel));
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__alu_ctrl),4);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__imm),32);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__dm_rd_sel),3);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__dm_wr_sel),2);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->top__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+17,((0x1fU & (vlSelf->top__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+18,((0x7fU & vlSelf->top__DOT__inst)),7);
    bufp->fullCData(oldp+19,((7U & (vlSelf->top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__idu0__DOT__is_addi));
    bufp->fullBit(oldp+21,((0x17U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+22,((0x37U == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+23,((0x6fU == (0x7fU & vlSelf->top__DOT__inst))));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__idu0__DOT__is_jalr));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__idu0__DOT__is_sw));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__idu0__DOT__is_ebreak));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__idu0__DOT__is_lw));
    bufp->fullBit(oldp+28,(((IData)(vlSelf->top__DOT__idu0__DOT__is_addi) 
                            | ((0x17U == (0x7fU & vlSelf->top__DOT__inst)) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__inst)) 
                                  | ((IData)(vlSelf->top__DOT__idu0__DOT__is_jalr) 
                                     | ((IData)(vlSelf->top__DOT__idu0__DOT__is_S) 
                                        | (IData)(vlSelf->top__DOT__idu0__DOT__is_lw))))))));
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__idu0__DOT__is_I));
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__idu0__DOT__is_S));
    __Vtemp_h6749d75c__0[0U] = (IData)((0x6700000000ULL 
                                        | (((QData)((IData)(
                                                            (vlSelf->top__DOT__inst 
                                                             >> 0x1fU))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (vlSelf->top__DOT__inst 
                                                                   >> 0xcU)))) 
                                               << 0x33U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__inst 
                                                                      >> 0x14U)))) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(
                                                                     (0x3ffU 
                                                                      & (vlSelf->top__DOT__inst 
                                                                         >> 0x15U)))) 
                                                     << 0x28U) 
                                                    | (QData)((IData)(vlSelf->__VdfgTmp_h441be388__0))))))));
    __Vtemp_h6749d75c__0[1U] = (((- (IData)((vlSelf->top__DOT__inst 
                                             >> 0x1fU))) 
                                 << 0x1cU) | (IData)(
                                                     ((0x6700000000ULL 
                                                       | (((QData)((IData)(
                                                                           (vlSelf->top__DOT__inst 
                                                                            >> 0x1fU))) 
                                                           << 0x3bU) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (vlSelf->top__DOT__inst 
                                                                                >> 0xcU)))) 
                                                              << 0x33U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT__inst 
                                                                                >> 0x14U)))) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->top__DOT__inst 
                                                                                >> 0x15U)))) 
                                                                    << 0x28U) 
                                                                   | (QData)((IData)(vlSelf->__VdfgTmp_h441be388__0))))))) 
                                                      >> 0x20U)));
    __Vtemp_h6749d75c__0[2U] = (0x3780U | ((0xffffc000U 
                                            & (((- (IData)(
                                                           (vlSelf->top__DOT__inst 
                                                            >> 0x1fU))) 
                                                << 0x1aU) 
                                               | (0x3ffc000U 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 6U)))) 
                                           | (0x7fU 
                                              & ((- (IData)(
                                                            (vlSelf->top__DOT__inst 
                                                             >> 0x1fU))) 
                                                 >> 4U))));
    __Vtemp_h6749d75c__0[3U] = (0x4c000U | (0x3fffU 
                                            & ((- (IData)(
                                                          (vlSelf->top__DOT__inst 
                                                           >> 0x1fU))) 
                                               >> 6U)));
    __Vtemp_h6749d75c__0[4U] = (0x6e00000U | (0x1ffffeU 
                                              & (vlSelf->top__DOT__inst 
                                                 >> 0xbU)));
    __Vtemp_h6749d75c__0[5U] = (0x70000000U | (0xfffff00U 
                                               & (vlSelf->top__DOT__inst 
                                                  >> 4U)));
    __Vtemp_h6749d75c__0[6U] = 1U;
    bufp->fullWData(oldp+31,(__Vtemp_h6749d75c__0),195);
    bufp->fullQData(oldp+38,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+40,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+42,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+44,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+46,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__idu0__DOT__imm0__DOT__mux0__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[0]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[1]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[2]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[3]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[4]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[5]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[6]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[7]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[8]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[9]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[10]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[11]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[12]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[13]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[14]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[15]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[16]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[17]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[18]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[19]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[20]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[21]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[22]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[23]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[24]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[25]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[26]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[27]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[28]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[29]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[30]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf[31]),32);
    bufp->fullBit(oldp+87,(vlSelf->clk));
    bufp->fullBit(oldp+88,(vlSelf->rst));
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__pc),32);
    bufp->fullIData(oldp+90,(((IData)(vlSelf->top__DOT__alu_a_sel)
                               ? (0xfffffffeU & vlSelf->top__DOT__exu0__DOT__alu_out)
                               : vlSelf->top__DOT__exu0__DOT__alu_out)),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__exu0__DOT__alu0__DOT__signed_a),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__exu0__DOT__alu_out),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__exu0__DOT__rf_wdata),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf
                             [(0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__exu0__DOT__regfile0__DOT__rf
                             [(0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__exu0__DOT__dm_data),32);
    bufp->fullBit(oldp+97,(1U));
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__idu0__DOT__is_lb));
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__idu0__DOT__is_lbu));
    bufp->fullBit(oldp+100,(vlSelf->top__DOT__idu0__DOT__is_lh));
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__idu0__DOT__is_lhu));
    bufp->fullBit(oldp+102,(vlSelf->top__DOT__idu0__DOT__is_sb));
    bufp->fullBit(oldp+103,(vlSelf->top__DOT__idu0__DOT__is_sh));
    bufp->fullBit(oldp+104,(vlSelf->top__DOT__idu0__DOT__is_R));
    bufp->fullIData(oldp+105,(5U),32);
    bufp->fullIData(oldp+106,(7U),32);
    bufp->fullIData(oldp+107,(0x20U),32);
    bufp->fullIData(oldp+108,(0U),32);
    bufp->fullIData(oldp+109,(0U),32);
    bufp->fullIData(oldp+110,(0x27U),32);
    bufp->fullIData(oldp+111,(5U),32);
}
