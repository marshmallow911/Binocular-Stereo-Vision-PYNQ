// ==============================================================
// File generated on Sat Aug 01 16:46:16 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __disparityMap_uitoFfa__HH__
#define __disparityMap_uitoFfa__HH__
#include "ACMP_uitodp.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int dout_WIDTH>
SC_MODULE(disparityMap_uitoFfa) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_uitodp<ID, 6, din0_WIDTH, dout_WIDTH> ACMP_uitodp_U;

    SC_CTOR(disparityMap_uitoFfa):  ACMP_uitodp_U ("ACMP_uitodp_U") {
        ACMP_uitodp_U.clk(clk);
        ACMP_uitodp_U.reset(reset);
        ACMP_uitodp_U.ce(ce);
        ACMP_uitodp_U.din0(din0);
        ACMP_uitodp_U.dout(dout);

    }

};

#endif //
