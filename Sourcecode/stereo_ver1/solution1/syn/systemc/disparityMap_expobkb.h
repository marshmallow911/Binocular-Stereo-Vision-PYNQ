// ==============================================================
// File generated on Thu Jul 30 11:06:40 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __disparityMap_expobkb_H__
#define __disparityMap_expobkb_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct disparityMap_expobkb_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 10;
  static const unsigned AddressRange = 256;
  static const unsigned AddressWidth = 8;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(disparityMap_expobkb_ram) {
        ram[0] = "0b1111111111";
        ram[1] = "0b1111011101";
        ram[2] = "0b1110111101";
        ram[3] = "0b1110011101";
        ram[4] = "0b1101111111";
        ram[5] = "0b1101100001";
        ram[6] = "0b1101000101";
        ram[7] = "0b1100101010";
        ram[8] = "0b1100001111";
        ram[9] = "0b1011110101";
        ram[10] = "0b1011011101";
        ram[11] = "0b1011000100";
        ram[12] = "0b1010101101";
        ram[13] = "0b1010010111";
        ram[14] = "0b1010000001";
        ram[15] = "0b1001101100";
        ram[16] = "0b1001011000";
        ram[17] = "0b1001000100";
        ram[18] = "0b1000110001";
        ram[19] = "0b1000011111";
        ram[20] = "0b1000001101";
        ram[21] = "0b0111111100";
        ram[22] = "0b0111101011";
        ram[23] = "0b0111011011";
        ram[24] = "0b0111001011";
        ram[25] = "0b0110111100";
        ram[26] = "0b0110101110";
        ram[27] = "0b0110011111";
        ram[28] = "0b0110010010";
        ram[29] = "0b0110000101";
        ram[30] = "0b0101111000";
        ram[31] = "0b0101101100";
        ram[32] = "0b0101100000";
        ram[33] = "0b0101010100";
        ram[34] = "0b0101001001";
        ram[35] = "0b0100111110";
        ram[36] = "0b0100110100";
        ram[37] = "0b0100101010";
        ram[38] = "0b0100100000";
        ram[39] = "0b0100010110";
        ram[40] = "0b0100001101";
        ram[41] = "0b0100000100";
        ram[42] = "0b0011111100";
        ram[43] = "0b0011110011";
        ram[44] = "0b0011101011";
        ram[45] = "0b0011100100";
        ram[46] = "0b0011011100";
        ram[47] = "0b0011010101";
        ram[48] = "0b0011001110";
        ram[49] = "0b0011000111";
        ram[50] = "0b0011000001";
        ram[51] = "0b0010111010";
        ram[52] = "0b0010110100";
        ram[53] = "0b0010101110";
        ram[54] = "0b0010101001";
        ram[55] = "0b0010100011";
        ram[56] = "0b0010011110";
        ram[57] = "0b0010011001";
        ram[58] = "0b0010010011";
        ram[59] = "0b0010001111";
        ram[60] = "0b0010001010";
        ram[61] = "0b0010000101";
        ram[62] = "0b0010000001";
        ram[63] = "0b0001111101";
        ram[64] = "0b0001111001";
        ram[65] = "0b0001110101";
        ram[66] = "0b0001110001";
        ram[67] = "0b0001101101";
        ram[68] = "0b0001101010";
        ram[69] = "0b0001100110";
        ram[70] = "0b0001100011";
        ram[71] = "0b0001011111";
        ram[72] = "0b0001011100";
        ram[73] = "0b0001011001";
        ram[74] = "0b0001010110";
        ram[75] = "0b0001010011";
        ram[76] = "0b0001010001";
        ram[77] = "0b0001001110";
        ram[78] = "0b0001001011";
        ram[79] = "0b0001001001";
        ram[80] = "0b0001000111";
        ram[81] = "0b0001000100";
        ram[82] = "0b0001000010";
        ram[83] = "0b0001000000";
        ram[84] = "0b0000111110";
        ram[85] = "0b0000111100";
        ram[86] = "0b0000111010";
        ram[87] = "0b0000111000";
        ram[88] = "0b0000110110";
        ram[89] = "0b0000110100";
        ram[90] = "0b0000110010";
        ram[91] = "0b0000110001";
        ram[92] = "0b0000101111";
        ram[93] = "0b0000101110";
        ram[94] = "0b0000101100";
        ram[95] = "0b0000101011";
        ram[96] = "0b0000101001";
        ram[97] = "0b0000101000";
        ram[98] = "0b0000100111";
        ram[99] = "0b0000100101";
        ram[100] = "0b0000100100";
        ram[101] = "0b0000100011";
        ram[102] = "0b0000100010";
        ram[103] = "0b0000100001";
        ram[104] = "0b0000011111";
        ram[105] = "0b0000011110";
        ram[106] = "0b0000011101";
        ram[107] = "0b0000011100";
        ram[108] = "0b0000011011";
        ram[109] = "0b0000011011";
        ram[110] = "0b0000011010";
        ram[111] = "0b0000011001";
        ram[112] = "0b0000011000";
        ram[113] = "0b0000010111";
        ram[114] = "0b0000010110";
        ram[115] = "0b0000010110";
        ram[116] = "0b0000010101";
        ram[117] = "0b0000010100";
        ram[118] = "0b0000010100";
        ram[119] = "0b0000010011";
        ram[120] = "0b0000010010";
        ram[121] = "0b0000010010";
        ram[122] = "0b0000010001";
        ram[123] = "0b0000010000";
        ram[124] = "0b0000010000";
        ram[125] = "0b0000001111";
        ram[126] = "0b0000001111";
        ram[127] = "0b0000001110";
        ram[128] = "0b0000001110";
        ram[129] = "0b0000001101";
        ram[130] = "0b0000001101";
        ram[131] = "0b0000001100";
        ram[132] = "0b0000001100";
        ram[133] = "0b0000001100";
        ram[134] = "0b0000001011";
        ram[135] = "0b0000001011";
        ram[136] = "0b0000001010";
        ram[137] = "0b0000001010";
        ram[138] = "0b0000001010";
        ram[139] = "0b0000001001";
        ram[140] = "0b0000001001";
        ram[141] = "0b0000001001";
        ram[142] = "0b0000001000";
        ram[143] = "0b0000001000";
        ram[144] = "0b0000001000";
        ram[145] = "0b0000001000";
        ram[146] = "0b0000000111";
        ram[147] = "0b0000000111";
        ram[148] = "0b0000000111";
        ram[149] = "0b0000000111";
        for (unsigned i = 150; i < 155 ; i = i + 1) {
            ram[i] = "0b0000000110";
        }
        for (unsigned i = 155; i < 160 ; i = i + 1) {
            ram[i] = "0b0000000101";
        }
        for (unsigned i = 160; i < 167 ; i = i + 1) {
            ram[i] = "0b0000000100";
        }
        for (unsigned i = 167; i < 175 ; i = i + 1) {
            ram[i] = "0b0000000011";
        }
        for (unsigned i = 175; i < 188 ; i = i + 1) {
            ram[i] = "0b0000000010";
        }
        for (unsigned i = 188; i < 208 ; i = i + 1) {
            ram[i] = "0b0000000001";
        }
        for (unsigned i = 208; i < 256 ; i = i + 1) {
            ram[i] = "0b0000000000";
        }


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


SC_MODULE(disparityMap_expobkb) {


static const unsigned DataWidth = 10;
static const unsigned AddressRange = 256;
static const unsigned AddressWidth = 8;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


disparityMap_expobkb_ram* meminst;


SC_CTOR(disparityMap_expobkb) {
meminst = new disparityMap_expobkb_ram("disparityMap_expobkb_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~disparityMap_expobkb() {
    delete meminst;
}


};//endmodule
#endif
