// ==============================================================
// File generated on Sat Aug 01 16:46:15 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __floor_mask_table1_H__
#define __floor_mask_table1_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct floor_mask_table1_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 23;
  static const unsigned AddressRange = 32;
  static const unsigned AddressWidth = 5;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(floor_mask_table1_ram) {
        ram[0] = "0b01111111111111111111111";
        ram[1] = "0b00111111111111111111111";
        ram[2] = "0b00011111111111111111111";
        ram[3] = "0b00001111111111111111111";
        ram[4] = "0b00000111111111111111111";
        ram[5] = "0b00000011111111111111111";
        ram[6] = "0b00000001111111111111111";
        ram[7] = "0b00000000111111111111111";
        ram[8] = "0b00000000011111111111111";
        ram[9] = "0b00000000001111111111111";
        ram[10] = "0b00000000000111111111111";
        ram[11] = "0b00000000000011111111111";
        ram[12] = "0b00000000000001111111111";
        ram[13] = "0b00000000000000111111111";
        ram[14] = "0b00000000000000011111111";
        ram[15] = "0b00000000000000001111111";
        ram[16] = "0b00000000000000000111111";
        ram[17] = "0b00000000000000000011111";
        ram[18] = "0b00000000000000000001111";
        ram[19] = "0b00000000000000000000111";
        ram[20] = "0b00000000000000000000011";
        ram[21] = "0b00000000000000000000001";
        for (unsigned i = 22; i < 30 ; i = i + 1) {
            ram[i] = "0b00000000000000000000000";
        }
        ram[30] = "0b11111111111111111111111";
        ram[31] = "0b11111111111111111111111";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(floor_mask_table1) {


static const unsigned DataWidth = 23;
static const unsigned AddressRange = 32;
static const unsigned AddressWidth = 5;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


floor_mask_table1_ram* meminst;


SC_CTOR(floor_mask_table1) {
meminst = new floor_mask_table1_ram("floor_mask_table1_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~floor_mask_table1() {
    delete meminst;
}


};//endmodule
#endif
