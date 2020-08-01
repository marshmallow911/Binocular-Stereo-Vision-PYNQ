// ==============================================================
// File generated on Sat Aug 01 16:46:16 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __disparityMap_fpexCeG__HH__
#define __disparityMap_fpexCeG__HH__
#include "ACMP_fpext_comb.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int dout_WIDTH>
SC_MODULE(disparityMap_fpexCeG) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_fpext_comb<ID, 1, din0_WIDTH, dout_WIDTH> ACMP_fpext_comb_U;

    SC_CTOR(disparityMap_fpexCeG):  ACMP_fpext_comb_U ("ACMP_fpext_comb_U") {
        ACMP_fpext_comb_U.din0(din0);
        ACMP_fpext_comb_U.dout(dout);

    }

};

#endif //
