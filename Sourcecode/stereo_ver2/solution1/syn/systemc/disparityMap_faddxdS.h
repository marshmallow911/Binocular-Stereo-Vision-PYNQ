// ==============================================================
// File generated on Sat Aug 01 16:46:16 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __disparityMap_faddxdS__HH__
#define __disparityMap_faddxdS__HH__
#include "ACMP_faddfsub.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(disparityMap_faddxdS) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_in< sc_dt::sc_lv<2> >   opcode;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_faddfsub<ID, 5, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_faddfsub_U;

    SC_CTOR(disparityMap_faddxdS):  ACMP_faddfsub_U ("ACMP_faddfsub_U") {
        ACMP_faddfsub_U.clk(clk);
        ACMP_faddfsub_U.reset(reset);
        ACMP_faddfsub_U.ce(ce);
        ACMP_faddfsub_U.din0(din0);
        ACMP_faddfsub_U.din1(din1);
        ACMP_faddfsub_U.dout(dout);
        ACMP_faddfsub_U.opcode(opcode);

    }

};

#endif //
