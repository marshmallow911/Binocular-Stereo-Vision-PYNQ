#include "disparityMap.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void disparityMap::thread_INPUT_data_V_0_ack_in() {
    INPUT_data_V_0_ack_in = INPUT_data_V_0_state.read()[1];
}

void disparityMap::thread_INPUT_data_V_0_ack_out() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(INPUT_data_V_0_vld_out.read(), ap_const_logic_1))) {
        INPUT_data_V_0_ack_out = ap_const_logic_1;
    } else {
        INPUT_data_V_0_ack_out = ap_const_logic_0;
    }
}

void disparityMap::thread_INPUT_data_V_0_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, INPUT_data_V_0_sel.read())) {
        INPUT_data_V_0_data_out = INPUT_data_V_0_payload_B.read();
    } else {
        INPUT_data_V_0_data_out = INPUT_data_V_0_payload_A.read();
    }
}

void disparityMap::thread_INPUT_data_V_0_load_A() {
    INPUT_data_V_0_load_A = (INPUT_data_V_0_state_cmp_full.read() & ~INPUT_data_V_0_sel_wr.read());
}

void disparityMap::thread_INPUT_data_V_0_load_B() {
    INPUT_data_V_0_load_B = (INPUT_data_V_0_sel_wr.read() & INPUT_data_V_0_state_cmp_full.read());
}

void disparityMap::thread_INPUT_data_V_0_sel() {
    INPUT_data_V_0_sel = INPUT_data_V_0_sel_rd.read();
}

void disparityMap::thread_INPUT_data_V_0_state_cmp_full() {
    INPUT_data_V_0_state_cmp_full =  (sc_logic) ((!INPUT_data_V_0_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(INPUT_data_V_0_state.read() != ap_const_lv2_1))[0];
}

void disparityMap::thread_INPUT_data_V_0_vld_in() {
    INPUT_data_V_0_vld_in = in_stream_TVALID.read();
}

void disparityMap::thread_INPUT_data_V_0_vld_out() {
    INPUT_data_V_0_vld_out = INPUT_data_V_0_state.read()[0];
}

void disparityMap::thread_INPUT_last_V_0_ack_out() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(INPUT_data_V_0_vld_out.read(), ap_const_logic_1))) {
        INPUT_last_V_0_ack_out = ap_const_logic_1;
    } else {
        INPUT_last_V_0_ack_out = ap_const_logic_0;
    }
}

void disparityMap::thread_INPUT_last_V_0_vld_in() {
    INPUT_last_V_0_vld_in = in_stream_TVALID.read();
}

void disparityMap::thread_OUTPUT_data_V_1_ack_in() {
    OUTPUT_data_V_1_ack_in = OUTPUT_data_V_1_state.read()[1];
}

void disparityMap::thread_OUTPUT_data_V_1_ack_out() {
    OUTPUT_data_V_1_ack_out = dMapout_TREADY.read();
}

void disparityMap::thread_OUTPUT_data_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_data_V_1_sel.read())) {
        OUTPUT_data_V_1_data_out = OUTPUT_data_V_1_payload_B.read();
    } else {
        OUTPUT_data_V_1_data_out = OUTPUT_data_V_1_payload_A.read();
    }
}

void disparityMap::thread_OUTPUT_data_V_1_load_A() {
    OUTPUT_data_V_1_load_A = (OUTPUT_data_V_1_state_cmp_full.read() & ~OUTPUT_data_V_1_sel_wr.read());
}

void disparityMap::thread_OUTPUT_data_V_1_load_B() {
    OUTPUT_data_V_1_load_B = (OUTPUT_data_V_1_sel_wr.read() & OUTPUT_data_V_1_state_cmp_full.read());
}

void disparityMap::thread_OUTPUT_data_V_1_sel() {
    OUTPUT_data_V_1_sel = OUTPUT_data_V_1_sel_rd.read();
}

void disparityMap::thread_OUTPUT_data_V_1_state_cmp_full() {
    OUTPUT_data_V_1_state_cmp_full =  (sc_logic) ((!OUTPUT_data_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(OUTPUT_data_V_1_state.read() != ap_const_lv2_1))[0];
}

void disparityMap::thread_OUTPUT_data_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
         esl_seteq<1,1,1>(OUTPUT_data_V_1_ack_in.read(), ap_const_logic_1))) {
        OUTPUT_data_V_1_vld_in = ap_const_logic_1;
    } else {
        OUTPUT_data_V_1_vld_in = ap_const_logic_0;
    }
}

void disparityMap::thread_OUTPUT_data_V_1_vld_out() {
    OUTPUT_data_V_1_vld_out = OUTPUT_data_V_1_state.read()[0];
}

void disparityMap::thread_OUTPUT_last_V_1_ack_in() {
    OUTPUT_last_V_1_ack_in = OUTPUT_last_V_1_state.read()[1];
}

void disparityMap::thread_OUTPUT_last_V_1_ack_out() {
    OUTPUT_last_V_1_ack_out = dMapout_TREADY.read();
}

void disparityMap::thread_OUTPUT_last_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_last_V_1_sel.read())) {
        OUTPUT_last_V_1_data_out = OUTPUT_last_V_1_payload_B.read();
    } else {
        OUTPUT_last_V_1_data_out = OUTPUT_last_V_1_payload_A.read();
    }
}

void disparityMap::thread_OUTPUT_last_V_1_load_A() {
    OUTPUT_last_V_1_load_A = (OUTPUT_last_V_1_state_cmp_full.read() & ~OUTPUT_last_V_1_sel_wr.read());
}

void disparityMap::thread_OUTPUT_last_V_1_load_B() {
    OUTPUT_last_V_1_load_B = (OUTPUT_last_V_1_sel_wr.read() & OUTPUT_last_V_1_state_cmp_full.read());
}

void disparityMap::thread_OUTPUT_last_V_1_sel() {
    OUTPUT_last_V_1_sel = OUTPUT_last_V_1_sel_rd.read();
}

void disparityMap::thread_OUTPUT_last_V_1_state_cmp_full() {
    OUTPUT_last_V_1_state_cmp_full =  (sc_logic) ((!OUTPUT_last_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(OUTPUT_last_V_1_state.read() != ap_const_lv2_1))[0];
}

void disparityMap::thread_OUTPUT_last_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
         esl_seteq<1,1,1>(OUTPUT_data_V_1_ack_in.read(), ap_const_logic_1))) {
        OUTPUT_last_V_1_vld_in = ap_const_logic_1;
    } else {
        OUTPUT_last_V_1_vld_in = ap_const_logic_0;
    }
}

void disparityMap::thread_OUTPUT_last_V_1_vld_out() {
    OUTPUT_last_V_1_vld_out = OUTPUT_last_V_1_state.read()[0];
}

void disparityMap::thread_OUTPUT_user_V_1_ack_in() {
    OUTPUT_user_V_1_ack_in = OUTPUT_user_V_1_state.read()[1];
}

void disparityMap::thread_OUTPUT_user_V_1_ack_out() {
    OUTPUT_user_V_1_ack_out = dMapout_TREADY.read();
}

void disparityMap::thread_OUTPUT_user_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, OUTPUT_user_V_1_sel.read())) {
        OUTPUT_user_V_1_data_out = OUTPUT_user_V_1_payload_B.read();
    } else {
        OUTPUT_user_V_1_data_out = OUTPUT_user_V_1_payload_A.read();
    }
}

void disparityMap::thread_OUTPUT_user_V_1_load_A() {
    OUTPUT_user_V_1_load_A = (OUTPUT_user_V_1_state_cmp_full.read() & ~OUTPUT_user_V_1_sel_wr.read());
}

void disparityMap::thread_OUTPUT_user_V_1_load_B() {
    OUTPUT_user_V_1_load_B = (OUTPUT_user_V_1_sel_wr.read() & OUTPUT_user_V_1_state_cmp_full.read());
}

void disparityMap::thread_OUTPUT_user_V_1_sel() {
    OUTPUT_user_V_1_sel = OUTPUT_user_V_1_sel_rd.read();
}

void disparityMap::thread_OUTPUT_user_V_1_state_cmp_full() {
    OUTPUT_user_V_1_state_cmp_full =  (sc_logic) ((!OUTPUT_user_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(OUTPUT_user_V_1_state.read() != ap_const_lv2_1))[0];
}

void disparityMap::thread_OUTPUT_user_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) && 
         esl_seteq<1,1,1>(OUTPUT_data_V_1_ack_in.read(), ap_const_logic_1))) {
        OUTPUT_user_V_1_vld_in = ap_const_logic_1;
    } else {
        OUTPUT_user_V_1_vld_in = ap_const_logic_0;
    }
}

void disparityMap::thread_OUTPUT_user_V_1_vld_out() {
    OUTPUT_user_V_1_vld_out = OUTPUT_user_V_1_state.read()[0];
}

void disparityMap::thread_agg_result_V_i_i10_fu_3344_p3() {
    agg_result_V_i_i10_fu_3344_p3 = (!tmp_i_i10_fu_3329_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i10_fu_3329_p2.read()[0].to_bool())? tmp_i_i10_25_fu_3339_p2.read(): tmp_36_i_i10_fu_3334_p2.read());
}

void disparityMap::thread_agg_result_V_i_i11_fu_3506_p3() {
    agg_result_V_i_i11_fu_3506_p3 = (!tmp_i_i11_fu_3491_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i11_fu_3491_p2.read()[0].to_bool())? tmp_i_i11_27_fu_3501_p2.read(): tmp_36_i_i11_fu_3496_p2.read());
}

void disparityMap::thread_agg_result_V_i_i12_fu_3705_p3() {
    agg_result_V_i_i12_fu_3705_p3 = (!tmp_i_i12_reg_5932.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i12_reg_5932.read()[0].to_bool())? tmp_i_i12_29_reg_5942.read(): tmp_36_i_i12_reg_5937.read());
}

void disparityMap::thread_agg_result_V_i_i13_fu_3831_p3() {
    agg_result_V_i_i13_fu_3831_p3 = (!tmp_i_i13_fu_3816_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i13_fu_3816_p2.read()[0].to_bool())? tmp_i_i13_33_fu_3826_p2.read(): tmp_36_i_i13_fu_3821_p2.read());
}

void disparityMap::thread_agg_result_V_i_i14_fu_3989_p3() {
    agg_result_V_i_i14_fu_3989_p3 = (!tmp_i_i14_fu_3974_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i14_fu_3974_p2.read()[0].to_bool())? tmp_i_i14_35_fu_3984_p2.read(): tmp_36_i_i14_fu_3979_p2.read());
}

void disparityMap::thread_agg_result_V_i_i15_fu_4132_p3() {
    agg_result_V_i_i15_fu_4132_p3 = (!tmp_i_i15_fu_4117_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i15_fu_4117_p2.read()[0].to_bool())? tmp_i_i15_37_fu_4127_p2.read(): tmp_36_i_i15_fu_4122_p2.read());
}

void disparityMap::thread_agg_result_V_i_i16_fu_4285_p3() {
    agg_result_V_i_i16_fu_4285_p3 = (!tmp_i_i16_fu_4270_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i16_fu_4270_p2.read()[0].to_bool())? tmp_i_i16_39_fu_4280_p2.read(): tmp_36_i_i16_fu_4275_p2.read());
}

void disparityMap::thread_agg_result_V_i_i17_fu_4464_p3() {
    agg_result_V_i_i17_fu_4464_p3 = (!tmp_i_i17_reg_6138.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i17_reg_6138.read()[0].to_bool())? tmp_i_i17_42_reg_6148.read(): tmp_36_i_i17_reg_6143.read());
}

void disparityMap::thread_agg_result_V_i_i1_fu_2026_p3() {
    agg_result_V_i_i1_fu_2026_p3 = (!tmp_i_i1_fu_2014_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i1_fu_2014_p2.read()[0].to_bool())? tmp_i_i1_45_fu_2022_p2.read(): tmp_36_i_i1_fu_2018_p2.read());
}

void disparityMap::thread_agg_result_V_i_i2_fu_2132_p3() {
    agg_result_V_i_i2_fu_2132_p3 = (!tmp_i_i2_fu_2120_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i2_fu_2120_p2.read()[0].to_bool())? tmp_i_i2_10_fu_2128_p2.read(): tmp_36_i_i2_fu_2124_p2.read());
}

void disparityMap::thread_agg_result_V_i_i3_fu_2241_p3() {
    agg_result_V_i_i3_fu_2241_p3 = (!tmp_i_i3_fu_2226_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i3_fu_2226_p2.read()[0].to_bool())? tmp_i_i3_12_fu_2236_p2.read(): tmp_36_i_i3_fu_2231_p2.read());
}

void disparityMap::thread_agg_result_V_i_i4_fu_2382_p3() {
    agg_result_V_i_i4_fu_2382_p3 = (!tmp_i_i4_fu_2367_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i4_fu_2367_p2.read()[0].to_bool())? tmp_i_i4_13_fu_2377_p2.read(): tmp_36_i_i4_fu_2372_p2.read());
}

void disparityMap::thread_agg_result_V_i_i5_fu_2541_p3() {
    agg_result_V_i_i5_fu_2541_p3 = (!tmp_i_i5_fu_2526_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i5_fu_2526_p2.read()[0].to_bool())? tmp_i_i5_15_fu_2536_p2.read(): tmp_36_i_i5_fu_2531_p2.read());
}

void disparityMap::thread_agg_result_V_i_i6_fu_2699_p3() {
    agg_result_V_i_i6_fu_2699_p3 = (!tmp_i_i6_fu_2684_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i6_fu_2684_p2.read()[0].to_bool())? tmp_i_i6_17_fu_2694_p2.read(): tmp_36_i_i6_fu_2689_p2.read());
}

void disparityMap::thread_agg_result_V_i_i7_fu_2902_p3() {
    agg_result_V_i_i7_fu_2902_p3 = (!tmp_i_i7_reg_5671.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i7_reg_5671.read()[0].to_bool())? tmp_i_i7_19_reg_5681.read(): tmp_36_i_i7_reg_5676.read());
}

void disparityMap::thread_agg_result_V_i_i8_fu_3031_p3() {
    agg_result_V_i_i8_fu_3031_p3 = (!tmp_i_i8_fu_3016_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i8_fu_3016_p2.read()[0].to_bool())? tmp_i_i8_21_fu_3026_p2.read(): tmp_36_i_i8_fu_3021_p2.read());
}

void disparityMap::thread_agg_result_V_i_i9_fu_3189_p3() {
    agg_result_V_i_i9_fu_3189_p3 = (!tmp_i_i9_fu_3174_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i9_fu_3174_p2.read()[0].to_bool())? tmp_i_i9_23_fu_3184_p2.read(): tmp_36_i_i9_fu_3179_p2.read());
}

void disparityMap::thread_agg_result_V_i_i_fu_1996_p3() {
    agg_result_V_i_i_fu_1996_p3 = (!tmp_i_i_fu_1984_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_i_i_fu_1984_p2.read()[0].to_bool())? tmp_i_i_44_fu_1992_p2.read(): tmp_36_i_i_fu_1988_p2.read());
}

void disparityMap::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[5];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage1() {
    ap_CS_fsm_pp1_stage1 = ap_CS_fsm.read()[6];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage10() {
    ap_CS_fsm_pp1_stage10 = ap_CS_fsm.read()[15];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage11() {
    ap_CS_fsm_pp1_stage11 = ap_CS_fsm.read()[16];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage12() {
    ap_CS_fsm_pp1_stage12 = ap_CS_fsm.read()[17];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage13() {
    ap_CS_fsm_pp1_stage13 = ap_CS_fsm.read()[18];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage14() {
    ap_CS_fsm_pp1_stage14 = ap_CS_fsm.read()[19];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage15() {
    ap_CS_fsm_pp1_stage15 = ap_CS_fsm.read()[20];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage16() {
    ap_CS_fsm_pp1_stage16 = ap_CS_fsm.read()[21];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage17() {
    ap_CS_fsm_pp1_stage17 = ap_CS_fsm.read()[22];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage2() {
    ap_CS_fsm_pp1_stage2 = ap_CS_fsm.read()[7];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage3() {
    ap_CS_fsm_pp1_stage3 = ap_CS_fsm.read()[8];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage4() {
    ap_CS_fsm_pp1_stage4 = ap_CS_fsm.read()[9];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage5() {
    ap_CS_fsm_pp1_stage5 = ap_CS_fsm.read()[10];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage6() {
    ap_CS_fsm_pp1_stage6 = ap_CS_fsm.read()[11];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage7() {
    ap_CS_fsm_pp1_stage7 = ap_CS_fsm.read()[12];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage8() {
    ap_CS_fsm_pp1_stage8 = ap_CS_fsm.read()[13];
}

void disparityMap::thread_ap_CS_fsm_pp1_stage9() {
    ap_CS_fsm_pp1_stage9 = ap_CS_fsm.read()[14];
}

void disparityMap::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void disparityMap::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void disparityMap::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void disparityMap::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[23];
}

void disparityMap::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[24];
}

void disparityMap::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[25];
}

void disparityMap::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[26];
}

void disparityMap::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[27];
}

void disparityMap::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void disparityMap::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[28];
}

void disparityMap::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void disparityMap::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage1() {
    ap_block_pp1_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage10() {
    ap_block_pp1_stage10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage10_11001() {
    ap_block_pp1_stage10_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage10_subdone() {
    ap_block_pp1_stage10_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage11() {
    ap_block_pp1_stage11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage11_11001() {
    ap_block_pp1_stage11_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage11_subdone() {
    ap_block_pp1_stage11_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage12() {
    ap_block_pp1_stage12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage12_11001() {
    ap_block_pp1_stage12_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage12_subdone() {
    ap_block_pp1_stage12_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage13() {
    ap_block_pp1_stage13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage13_11001() {
    ap_block_pp1_stage13_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage13_subdone() {
    ap_block_pp1_stage13_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage14() {
    ap_block_pp1_stage14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage14_11001() {
    ap_block_pp1_stage14_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage14_subdone() {
    ap_block_pp1_stage14_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage15() {
    ap_block_pp1_stage15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage15_11001() {
    ap_block_pp1_stage15_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage15_subdone() {
    ap_block_pp1_stage15_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage16() {
    ap_block_pp1_stage16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage16_11001() {
    ap_block_pp1_stage16_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage16_subdone() {
    ap_block_pp1_stage16_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage17() {
    ap_block_pp1_stage17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage17_11001() {
    ap_block_pp1_stage17_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage17_subdone() {
    ap_block_pp1_stage17_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage1_11001() {
    ap_block_pp1_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage1_subdone() {
    ap_block_pp1_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage2() {
    ap_block_pp1_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage2_11001() {
    ap_block_pp1_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage2_subdone() {
    ap_block_pp1_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage3() {
    ap_block_pp1_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage3_11001() {
    ap_block_pp1_stage3_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage3_subdone() {
    ap_block_pp1_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage4() {
    ap_block_pp1_stage4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage4_11001() {
    ap_block_pp1_stage4_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage4_subdone() {
    ap_block_pp1_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage5() {
    ap_block_pp1_stage5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage5_11001() {
    ap_block_pp1_stage5_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage5_subdone() {
    ap_block_pp1_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage6() {
    ap_block_pp1_stage6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage6_11001() {
    ap_block_pp1_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage6_subdone() {
    ap_block_pp1_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage7() {
    ap_block_pp1_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage7_11001() {
    ap_block_pp1_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage7_subdone() {
    ap_block_pp1_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage8() {
    ap_block_pp1_stage8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage8_11001() {
    ap_block_pp1_stage8_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage8_subdone() {
    ap_block_pp1_stage8_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage9() {
    ap_block_pp1_stage9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage9_11001() {
    ap_block_pp1_stage9_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_pp1_stage9_subdone() {
    ap_block_pp1_stage9_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state10_pp1_stage4_iter0() {
    ap_block_state10_pp1_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state11_pp1_stage5_iter0() {
    ap_block_state11_pp1_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state12_pp1_stage6_iter0() {
    ap_block_state12_pp1_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state13_pp1_stage7_iter0() {
    ap_block_state13_pp1_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state14_pp1_stage8_iter0() {
    ap_block_state14_pp1_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state15_pp1_stage9_iter0() {
    ap_block_state15_pp1_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state16_pp1_stage10_iter0() {
    ap_block_state16_pp1_stage10_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state17_pp1_stage11_iter0() {
    ap_block_state17_pp1_stage11_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state18_pp1_stage12_iter0() {
    ap_block_state18_pp1_stage12_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state19_pp1_stage13_iter0() {
    ap_block_state19_pp1_stage13_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state20_pp1_stage14_iter0() {
    ap_block_state20_pp1_stage14_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state21_pp1_stage15_iter0() {
    ap_block_state21_pp1_stage15_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state22_pp1_stage16_iter0() {
    ap_block_state22_pp1_stage16_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state23_pp1_stage17_iter0() {
    ap_block_state23_pp1_stage17_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state24_pp1_stage0_iter1() {
    ap_block_state24_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state25_pp1_stage1_iter1() {
    ap_block_state25_pp1_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state26_pp1_stage2_iter1() {
    ap_block_state26_pp1_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state27_pp1_stage3_iter1() {
    ap_block_state27_pp1_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state28_pp1_stage4_iter1() {
    ap_block_state28_pp1_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state29_pp1_stage5_iter1() {
    ap_block_state29_pp1_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state30_pp1_stage6_iter1() {
    ap_block_state30_pp1_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state31_pp1_stage7_iter1() {
    ap_block_state31_pp1_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state32_pp1_stage8_iter1() {
    ap_block_state32_pp1_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state33_pp1_stage9_iter1() {
    ap_block_state33_pp1_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state34_pp1_stage10_iter1() {
    ap_block_state34_pp1_stage10_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state40() {
    ap_block_state40 = (esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_last_V_1_ack_in.read()));
}

void disparityMap::thread_ap_block_state6_pp1_stage0_iter0() {
    ap_block_state6_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state7_pp1_stage1_iter0() {
    ap_block_state7_pp1_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state8_pp1_stage2_iter0() {
    ap_block_state8_pp1_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_block_state9_pp1_stage3_iter0() {
    ap_block_state9_pp1_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void disparityMap::thread_ap_condition_1109() {
    ap_condition_1109 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage10_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_1791() {
    ap_condition_1791 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()));
}

void disparityMap::thread_ap_condition_1797() {
    ap_condition_1797 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_1809() {
    ap_condition_1809 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_1829() {
    ap_condition_1829 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_1859() {
    ap_condition_1859 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage11_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_1877() {
    ap_condition_1877 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage12_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_1918() {
    ap_condition_1918 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage15_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_1932() {
    ap_condition_1932 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage16_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_1950() {
    ap_condition_1950 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage17.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage17_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_2014() {
    ap_condition_2014 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()));
}

void disparityMap::thread_ap_condition_2031() {
    ap_condition_2031 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()));
}

void disparityMap::thread_ap_condition_2050() {
    ap_condition_2050 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()));
}

void disparityMap::thread_ap_condition_2070() {
    ap_condition_2070 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()));
}

void disparityMap::thread_ap_condition_2155() {
    ap_condition_2155 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage10.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_2157() {
    ap_condition_2157 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage11.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_2159() {
    ap_condition_2159 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage12.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_2169() {
    ap_condition_2169 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage16.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_2171() {
    ap_condition_2171 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage17.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage17.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_2179() {
    ap_condition_2179 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_2181() {
    ap_condition_2181 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_2183() {
    ap_condition_2183 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_2318() {
    ap_condition_2318 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage16_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_2324() {
    ap_condition_2324 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage12_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_2326() {
    ap_condition_2326 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage11_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_2328() {
    ap_condition_2328 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage10_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_4521() {
    ap_condition_4521 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage13.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage13_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_4527() {
    ap_condition_4527 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_23_reg_5269.read()));
}

void disparityMap::thread_ap_condition_4531() {
    ap_condition_4531 = (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_23_reg_5269.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_4536() {
    ap_condition_4536 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage14_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_48_reg_5632.read()));
}

void disparityMap::thread_ap_condition_4540() {
    ap_condition_4540 = (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_48_reg_5632.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage15_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_962() {
    ap_condition_962 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0));
}

void disparityMap::thread_ap_condition_pp1_exit_iter0_state13() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten_reg_4958.read())) {
        ap_condition_pp1_exit_iter0_state13 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state13 = ap_const_logic_0;
    }
}

void disparityMap::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_data_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_user_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_last_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_last_V_1_ack_in.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void disparityMap::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void disparityMap::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void disparityMap::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void disparityMap::thread_ap_phi_mux_i_op_assign_2_phi_fu_885_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_op_assign_2_phi_fu_885_p4 = col_reg_5035.read();
    } else {
        ap_phi_mux_i_op_assign_2_phi_fu_885_p4 = i_op_assign_2_reg_881.read();
    }
}

void disparityMap::thread_ap_phi_mux_i_op_assign_phi_fu_874_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_op_assign_phi_fu_874_p4 = ret_V_mid2_v_v_reg_4978.read();
    } else {
        ap_phi_mux_i_op_assign_phi_fu_874_p4 = i_op_assign_reg_870.read();
    }
}

void disparityMap::thread_ap_phi_mux_indvar_flatten_phi_fu_862_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_indvar_flatten_phi_fu_862_p4 = indvar_flatten_next_reg_5415.read();
    } else {
        ap_phi_mux_indvar_flatten_phi_fu_862_p4 = indvar_flatten_reg_858.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_01027_1_phi_fu_897_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_p_01027_1_phi_fu_897_p4 = ap_phi_mux_p_01027_4_14_phi_fu_1564_p4.read();
    } else {
        ap_phi_mux_p_01027_1_phi_fu_897_p4 = p_01027_1_reg_893.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_01027_4_10_phi_fu_1389_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_58_reg_5854.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_p_01027_4_10_phi_fu_1389_p4 = p_Val2_6_10_reg_6006.read();
    } else {
        ap_phi_mux_p_01027_4_10_phi_fu_1389_p4 = ap_phi_reg_pp1_iter1_p_01027_4_10_reg_1386.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_01027_4_11_phi_fu_1433_p4() {
    if (esl_seteq<1,1,1>(ap_condition_2179.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_60_reg_5898.read())) {
            ap_phi_mux_p_01027_4_11_phi_fu_1433_p4 = p_Val2_6_11_reg_6050.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_60_reg_5898.read())) {
            ap_phi_mux_p_01027_4_11_phi_fu_1433_p4 = p_01027_4_10_reg_1386.read();
        } else {
            ap_phi_mux_p_01027_4_11_phi_fu_1433_p4 = ap_phi_reg_pp1_iter1_p_01027_4_11_reg_1430.read();
        }
    } else {
        ap_phi_mux_p_01027_4_11_phi_fu_1433_p4 = ap_phi_reg_pp1_iter1_p_01027_4_11_reg_1430.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_01027_4_13_phi_fu_1520_p4() {
    if (esl_seteq<1,1,1>(ap_condition_2183.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_64_reg_5987.read())) {
            ap_phi_mux_p_01027_4_13_phi_fu_1520_p4 = p_Val2_6_13_fu_4352_p3.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_64_reg_5987.read())) {
            ap_phi_mux_p_01027_4_13_phi_fu_1520_p4 = ap_phi_reg_pp1_iter1_p_01027_4_12_reg_1485.read();
        } else {
            ap_phi_mux_p_01027_4_13_phi_fu_1520_p4 = ap_phi_reg_pp1_iter1_p_01027_4_13_reg_1517.read();
        }
    } else {
        ap_phi_mux_p_01027_4_13_phi_fu_1520_p4 = ap_phi_reg_pp1_iter1_p_01027_4_13_reg_1517.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_01027_4_14_phi_fu_1564_p4() {
    if (esl_seteq<1,1,1>(ap_condition_1809.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_66_reg_6031.read())) {
            ap_phi_mux_p_01027_4_14_phi_fu_1564_p4 = p_Val2_6_14_reg_6159.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_66_reg_6031.read())) {
            ap_phi_mux_p_01027_4_14_phi_fu_1564_p4 = p_01027_4_13_reg_1517.read();
        } else {
            ap_phi_mux_p_01027_4_14_phi_fu_1564_p4 = ap_phi_reg_pp1_iter1_p_01027_4_14_reg_1560.read();
        }
    } else {
        ap_phi_mux_p_01027_4_14_phi_fu_1564_p4 = ap_phi_reg_pp1_iter1_p_01027_4_14_reg_1560.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_01027_4_1_phi_fu_954_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_23_reg_5269.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        ap_phi_mux_p_01027_4_1_phi_fu_954_p4 = p_Val2_6_1_reg_5469.read();
    } else {
        ap_phi_mux_p_01027_4_1_phi_fu_954_p4 = ap_phi_reg_pp1_iter0_p_01027_4_1_reg_951.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_01027_4_2_phi_fu_998_p4() {
    if (esl_seteq<1,1,1>(ap_condition_2155.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_reg_5435.read())) {
            ap_phi_mux_p_01027_4_2_phi_fu_998_p4 = p_Val2_6_2_reg_5518.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_40_reg_5435.read())) {
            ap_phi_mux_p_01027_4_2_phi_fu_998_p4 = p_01027_4_1_reg_951.read();
        } else {
            ap_phi_mux_p_01027_4_2_phi_fu_998_p4 = ap_phi_reg_pp1_iter0_p_01027_4_2_reg_995.read();
        }
    } else {
        ap_phi_mux_p_01027_4_2_phi_fu_998_p4 = ap_phi_reg_pp1_iter0_p_01027_4_2_reg_995.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_01027_4_6_phi_fu_1171_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_48_reg_5632.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage15.read(), ap_const_boolean_0))) {
        ap_phi_mux_p_01027_4_6_phi_fu_1171_p4 = p_Val2_6_6_reg_5750.read();
    } else {
        ap_phi_mux_p_01027_4_6_phi_fu_1171_p4 = ap_phi_reg_pp1_iter0_p_01027_4_6_reg_1168.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_01027_4_7_phi_fu_1215_p4() {
    if (esl_seteq<1,1,1>(ap_condition_2169.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_50_reg_5692.read())) {
            ap_phi_mux_p_01027_4_7_phi_fu_1215_p4 = p_Val2_6_7_reg_5794.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_50_reg_5692.read())) {
            ap_phi_mux_p_01027_4_7_phi_fu_1215_p4 = p_01027_4_6_reg_1168.read();
        } else {
            ap_phi_mux_p_01027_4_7_phi_fu_1215_p4 = ap_phi_reg_pp1_iter0_p_01027_4_7_reg_1212.read();
        }
    } else {
        ap_phi_mux_p_01027_4_7_phi_fu_1215_p4 = ap_phi_reg_pp1_iter0_p_01027_4_7_reg_1212.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_01189_2_10_phi_fu_1411_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_58_reg_5854.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_p_01189_2_10_phi_fu_1411_p4 = cost_d_actual_V_2_10_2_reg_6011.read();
    } else {
        ap_phi_mux_p_01189_2_10_phi_fu_1411_p4 = ap_phi_reg_pp1_iter1_p_01189_2_10_reg_1408.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_01189_2_1_phi_fu_976_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_23_reg_5269.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        ap_phi_mux_p_01189_2_1_phi_fu_976_p4 = cost_d_actual_V_2_1_1_reg_5479.read();
    } else {
        ap_phi_mux_p_01189_2_1_phi_fu_976_p4 = ap_phi_reg_pp1_iter0_p_01189_2_1_reg_973.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_01189_2_6_phi_fu_1193_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_48_reg_5632.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage15.read(), ap_const_boolean_0))) {
        ap_phi_mux_p_01189_2_6_phi_fu_1193_p4 = cost_d_actual_V_2_6_1_reg_5755.read();
    } else {
        ap_phi_mux_p_01189_2_6_phi_fu_1193_p4 = ap_phi_reg_pp1_iter0_p_01189_2_6_reg_1190.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_1_phi_fu_909_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        ap_phi_mux_p_0943_1_phi_fu_909_p4 = ap_phi_mux_p_0943_4_14_phi_fu_1576_p4.read();
    } else {
        ap_phi_mux_p_0943_1_phi_fu_909_p4 = p_0943_1_reg_905.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_4_10_phi_fu_1400_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_58_reg_5854.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        ap_phi_mux_p_0943_4_10_phi_fu_1400_p4 = p_Val2_5_10_reg_6001.read();
    } else {
        ap_phi_mux_p_0943_4_10_phi_fu_1400_p4 = ap_phi_reg_pp1_iter1_p_0943_4_10_reg_1397.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_4_11_phi_fu_1444_p4() {
    if (esl_seteq<1,1,1>(ap_condition_2179.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_60_reg_5898.read())) {
            ap_phi_mux_p_0943_4_11_phi_fu_1444_p4 = p_Val2_5_11_reg_6045.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_60_reg_5898.read())) {
            ap_phi_mux_p_0943_4_11_phi_fu_1444_p4 = p_0943_4_10_reg_1397.read();
        } else {
            ap_phi_mux_p_0943_4_11_phi_fu_1444_p4 = ap_phi_reg_pp1_iter1_p_0943_4_11_reg_1441.read();
        }
    } else {
        ap_phi_mux_p_0943_4_11_phi_fu_1444_p4 = ap_phi_reg_pp1_iter1_p_0943_4_11_reg_1441.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_4_12_phi_fu_1477_p4() {
    if (esl_seteq<1,1,1>(ap_condition_2181.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_62_reg_5953.read())) {
            ap_phi_mux_p_0943_4_12_phi_fu_1477_p4 = p_Val2_5_12_reg_6086.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_62_reg_5953.read())) {
            ap_phi_mux_p_0943_4_12_phi_fu_1477_p4 = p_0943_4_11_reg_1441.read();
        } else {
            ap_phi_mux_p_0943_4_12_phi_fu_1477_p4 = ap_phi_reg_pp1_iter1_p_0943_4_12_reg_1474.read();
        }
    } else {
        ap_phi_mux_p_0943_4_12_phi_fu_1477_p4 = ap_phi_reg_pp1_iter1_p_0943_4_12_reg_1474.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_4_13_phi_fu_1531_p4() {
    if (esl_seteq<1,1,1>(ap_condition_2183.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_64_reg_5987.read())) {
            ap_phi_mux_p_0943_4_13_phi_fu_1531_p4 = p_Val2_5_13_reg_6118.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_64_reg_5987.read())) {
            ap_phi_mux_p_0943_4_13_phi_fu_1531_p4 = p_0943_4_12_reg_1474.read();
        } else {
            ap_phi_mux_p_0943_4_13_phi_fu_1531_p4 = ap_phi_reg_pp1_iter1_p_0943_4_13_reg_1528.read();
        }
    } else {
        ap_phi_mux_p_0943_4_13_phi_fu_1531_p4 = ap_phi_reg_pp1_iter1_p_0943_4_13_reg_1528.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_4_14_phi_fu_1576_p4() {
    if (esl_seteq<1,1,1>(ap_condition_1809.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_66_reg_6031.read())) {
            ap_phi_mux_p_0943_4_14_phi_fu_1576_p4 = p_Val2_5_14_reg_6153.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_66_reg_6031.read())) {
            ap_phi_mux_p_0943_4_14_phi_fu_1576_p4 = p_0943_4_13_reg_1528.read();
        } else {
            ap_phi_mux_p_0943_4_14_phi_fu_1576_p4 = ap_phi_reg_pp1_iter1_p_0943_4_14_reg_1572.read();
        }
    } else {
        ap_phi_mux_p_0943_4_14_phi_fu_1576_p4 = ap_phi_reg_pp1_iter1_p_0943_4_14_reg_1572.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_4_1_phi_fu_965_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_23_reg_5269.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        ap_phi_mux_p_0943_4_1_phi_fu_965_p4 = p_Val2_5_1_reg_5464.read();
    } else {
        ap_phi_mux_p_0943_4_1_phi_fu_965_p4 = ap_phi_reg_pp1_iter0_p_0943_4_1_reg_962.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_4_2_phi_fu_1009_p4() {
    if (esl_seteq<1,1,1>(ap_condition_2155.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_40_reg_5435.read())) {
            ap_phi_mux_p_0943_4_2_phi_fu_1009_p4 = p_Val2_5_2_reg_5513.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_40_reg_5435.read())) {
            ap_phi_mux_p_0943_4_2_phi_fu_1009_p4 = p_0943_4_1_reg_962.read();
        } else {
            ap_phi_mux_p_0943_4_2_phi_fu_1009_p4 = ap_phi_reg_pp1_iter0_p_0943_4_2_reg_1006.read();
        }
    } else {
        ap_phi_mux_p_0943_4_2_phi_fu_1009_p4 = ap_phi_reg_pp1_iter0_p_0943_4_2_reg_1006.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_4_3_phi_fu_1041_p4() {
    if (esl_seteq<1,1,1>(ap_condition_2157.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_42_reg_5489.read())) {
            ap_phi_mux_p_0943_4_3_phi_fu_1041_p4 = p_Val2_5_3_reg_5573.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_42_reg_5489.read())) {
            ap_phi_mux_p_0943_4_3_phi_fu_1041_p4 = p_0943_4_2_reg_1006.read();
        } else {
            ap_phi_mux_p_0943_4_3_phi_fu_1041_p4 = ap_phi_reg_pp1_iter0_p_0943_4_3_reg_1038.read();
        }
    } else {
        ap_phi_mux_p_0943_4_3_phi_fu_1041_p4 = ap_phi_reg_pp1_iter0_p_0943_4_3_reg_1038.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_4_4_phi_fu_1084_p4() {
    if (esl_seteq<1,1,1>(ap_condition_2159.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_44_reg_5534.read())) {
            ap_phi_mux_p_0943_4_4_phi_fu_1084_p4 = p_Val2_5_4_reg_5622.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_44_reg_5534.read())) {
            ap_phi_mux_p_0943_4_4_phi_fu_1084_p4 = p_0943_4_3_reg_1038.read();
        } else {
            ap_phi_mux_p_0943_4_4_phi_fu_1084_p4 = ap_phi_reg_pp1_iter0_p_0943_4_4_reg_1081.read();
        }
    } else {
        ap_phi_mux_p_0943_4_4_phi_fu_1084_p4 = ap_phi_reg_pp1_iter0_p_0943_4_4_reg_1081.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_4_6_phi_fu_1182_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_48_reg_5632.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage15.read(), ap_const_boolean_0))) {
        ap_phi_mux_p_0943_4_6_phi_fu_1182_p4 = p_Val2_5_6_reg_5745.read();
    } else {
        ap_phi_mux_p_0943_4_6_phi_fu_1182_p4 = ap_phi_reg_pp1_iter0_p_0943_4_6_reg_1179.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_4_7_phi_fu_1226_p4() {
    if (esl_seteq<1,1,1>(ap_condition_2169.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_50_reg_5692.read())) {
            ap_phi_mux_p_0943_4_7_phi_fu_1226_p4 = p_Val2_5_7_reg_5789.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_50_reg_5692.read())) {
            ap_phi_mux_p_0943_4_7_phi_fu_1226_p4 = p_0943_4_6_reg_1179.read();
        } else {
            ap_phi_mux_p_0943_4_7_phi_fu_1226_p4 = ap_phi_reg_pp1_iter0_p_0943_4_7_reg_1223.read();
        }
    } else {
        ap_phi_mux_p_0943_4_7_phi_fu_1226_p4 = ap_phi_reg_pp1_iter0_p_0943_4_7_reg_1223.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_4_8_phi_fu_1258_p4() {
    if (esl_seteq<1,1,1>(ap_condition_2171.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_52_reg_5726.read())) {
            ap_phi_mux_p_0943_4_8_phi_fu_1258_p4 = p_Val2_5_8_reg_5839.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_52_reg_5726.read())) {
            ap_phi_mux_p_0943_4_8_phi_fu_1258_p4 = p_0943_4_7_reg_1223.read();
        } else {
            ap_phi_mux_p_0943_4_8_phi_fu_1258_p4 = ap_phi_reg_pp1_iter0_p_0943_4_8_reg_1255.read();
        }
    } else {
        ap_phi_mux_p_0943_4_8_phi_fu_1258_p4 = ap_phi_reg_pp1_iter0_p_0943_4_8_reg_1255.read();
    }
}

void disparityMap::thread_ap_phi_mux_p_0943_4_9_phi_fu_1301_p4() {
    if (esl_seteq<1,1,1>(ap_condition_1797.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_54_reg_5770.read())) {
            ap_phi_mux_p_0943_4_9_phi_fu_1301_p4 = p_Val2_5_9_reg_5888.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_1, tmp_54_reg_5770.read())) {
            ap_phi_mux_p_0943_4_9_phi_fu_1301_p4 = p_0943_4_8_reg_1255.read();
        } else {
            ap_phi_mux_p_0943_4_9_phi_fu_1301_p4 = ap_phi_reg_pp1_iter1_p_0943_4_9_reg_1298.read();
        }
    } else {
        ap_phi_mux_p_0943_4_9_phi_fu_1301_p4 = ap_phi_reg_pp1_iter1_p_0943_4_9_reg_1298.read();
    }
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01027_4_10_reg_1386() {
    ap_phi_reg_pp1_iter0_p_01027_4_10_reg_1386 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01027_4_12_reg_1485() {
    ap_phi_reg_pp1_iter0_p_01027_4_12_reg_1485 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01027_4_2_reg_995() {
    ap_phi_reg_pp1_iter0_p_01027_4_2_reg_995 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01027_4_7_reg_1212() {
    ap_phi_reg_pp1_iter0_p_01027_4_7_reg_1212 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01027_4_8_reg_1266() {
    ap_phi_reg_pp1_iter0_p_01027_4_8_reg_1266 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01027_4_9_reg_1309() {
    ap_phi_reg_pp1_iter0_p_01027_4_9_reg_1309 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01027_4_s_reg_1342() {
    ap_phi_reg_pp1_iter0_p_01027_4_s_reg_1342 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01181_2_10_reg_1419() {
    ap_phi_reg_pp1_iter0_p_01181_2_10_reg_1419 =  (sc_lv<4>) ("XXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01181_2_11_reg_1463() {
    ap_phi_reg_pp1_iter0_p_01181_2_11_reg_1463 =  (sc_lv<4>) ("XXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01181_2_12_reg_1506() {
    ap_phi_reg_pp1_iter0_p_01181_2_12_reg_1506 =  (sc_lv<4>) ("XXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01181_2_13_reg_1549() {
    ap_phi_reg_pp1_iter0_p_01181_2_13_reg_1549 =  (sc_lv<4>) ("XXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01181_2_14_reg_1584() {
    ap_phi_reg_pp1_iter0_p_01181_2_14_reg_1584 =  (sc_lv<4>) ("XXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01181_2_8_reg_1288() {
    ap_phi_reg_pp1_iter0_p_01181_2_8_reg_1288 =  (sc_lv<4>) ("XXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01181_2_9_reg_1331() {
    ap_phi_reg_pp1_iter0_p_01181_2_9_reg_1331 =  (sc_lv<4>) ("XXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01181_2_s_reg_1375() {
    ap_phi_reg_pp1_iter0_p_01181_2_s_reg_1375 =  (sc_lv<4>) ("XXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01189_2_10_reg_1408() {
    ap_phi_reg_pp1_iter0_p_01189_2_10_reg_1408 =  (sc_lv<11>) ("XXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01189_2_11_reg_1452() {
    ap_phi_reg_pp1_iter0_p_01189_2_11_reg_1452 =  (sc_lv<11>) ("XXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01189_2_12_reg_1495() {
    ap_phi_reg_pp1_iter0_p_01189_2_12_reg_1495 =  (sc_lv<11>) ("XXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01189_2_13_reg_1539() {
    ap_phi_reg_pp1_iter0_p_01189_2_13_reg_1539 =  (sc_lv<11>) ("XXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01189_2_8_reg_1277() {
    ap_phi_reg_pp1_iter0_p_01189_2_8_reg_1277 =  (sc_lv<11>) ("XXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01189_2_9_reg_1320() {
    ap_phi_reg_pp1_iter0_p_01189_2_9_reg_1320 =  (sc_lv<11>) ("XXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_01189_2_s_reg_1364() {
    ap_phi_reg_pp1_iter0_p_01189_2_s_reg_1364 =  (sc_lv<11>) ("XXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_0943_4_10_reg_1397() {
    ap_phi_reg_pp1_iter0_p_0943_4_10_reg_1397 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_0943_4_2_reg_1006() {
    ap_phi_reg_pp1_iter0_p_0943_4_2_reg_1006 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_0943_4_3_reg_1038() {
    ap_phi_reg_pp1_iter0_p_0943_4_3_reg_1038 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_0943_4_4_reg_1081() {
    ap_phi_reg_pp1_iter0_p_0943_4_4_reg_1081 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_0943_4_7_reg_1223() {
    ap_phi_reg_pp1_iter0_p_0943_4_7_reg_1223 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_0943_4_8_reg_1255() {
    ap_phi_reg_pp1_iter0_p_0943_4_8_reg_1255 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter0_p_0943_4_s_reg_1353() {
    ap_phi_reg_pp1_iter0_p_0943_4_s_reg_1353 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter1_p_01027_4_11_reg_1430() {
    ap_phi_reg_pp1_iter1_p_01027_4_11_reg_1430 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter1_p_01027_4_13_reg_1517() {
    ap_phi_reg_pp1_iter1_p_01027_4_13_reg_1517 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter1_p_01027_4_14_reg_1560() {
    ap_phi_reg_pp1_iter1_p_01027_4_14_reg_1560 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter1_p_0943_4_11_reg_1441() {
    ap_phi_reg_pp1_iter1_p_0943_4_11_reg_1441 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter1_p_0943_4_12_reg_1474() {
    ap_phi_reg_pp1_iter1_p_0943_4_12_reg_1474 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter1_p_0943_4_13_reg_1528() {
    ap_phi_reg_pp1_iter1_p_0943_4_13_reg_1528 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter1_p_0943_4_14_reg_1572() {
    ap_phi_reg_pp1_iter1_p_0943_4_14_reg_1572 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_phi_reg_pp1_iter1_p_0943_4_9_reg_1298() {
    ap_phi_reg_pp1_iter1_p_0943_4_9_reg_1298 =  (sc_lv<18>) ("XXXXXXXXXXXXXXXXXX");
}

void disparityMap::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_data_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_user_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_last_V_1_state.read()[0]) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, OUTPUT_last_V_1_ack_in.read())))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void disparityMap::thread_ap_rst_n_AXI_LITE_clk_inv() {
    ap_rst_n_AXI_LITE_clk_inv =  (sc_logic) (~ap_rst_n_AXI_LITE_clk.read());
}

void disparityMap::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void disparityMap::thread_bound_fu_1875_p0() {
    bound_fu_1875_p0 =  (sc_lv<32>) (bound_fu_1875_p00.read());
}

void disparityMap::thread_bound_fu_1875_p00() {
    bound_fu_1875_p00 = esl_zext<64,32>(cols_V.read());
}

void disparityMap::thread_bound_fu_1875_p1() {
    bound_fu_1875_p1 =  (sc_lv<32>) (bound_fu_1875_p10.read());
}

void disparityMap::thread_bound_fu_1875_p10() {
    bound_fu_1875_p10 = esl_zext<64,32>(cast_fu_1869_p0.read());
}

void disparityMap::thread_bound_fu_1875_p2() {
    bound_fu_1875_p2 = (!bound_fu_1875_p0.read().is_01() || !bound_fu_1875_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(bound_fu_1875_p0.read()) * sc_biguint<32>(bound_fu_1875_p1.read());
}

void disparityMap::thread_cast_fu_1869_p0() {
    cast_fu_1869_p0 = rows_V.read();
}

void disparityMap::thread_col_fu_1951_p2() {
    col_fu_1951_p2 = (!ap_const_lv32_1.is_01() || !i_op_assign_2_mid2_fu_1915_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_bigint<32>(i_op_assign_2_mid2_fu_1915_p3.read()));
}

void disparityMap::thread_col_packets_fu_1758_p4() {
    col_packets_fu_1758_p4 = cols_V.read().range(31, 1);
}

void disparityMap::thread_cost_d_actual_V_10_c_fu_3710_p1() {
    cost_d_actual_V_10_c_fu_3710_p1 = esl_zext<9,8>(agg_result_V_i_i12_fu_3705_p3.read());
}

void disparityMap::thread_cost_d_actual_V_11_c_fu_3839_p1() {
    cost_d_actual_V_11_c_fu_3839_p1 = esl_zext<9,8>(agg_result_V_i_i13_fu_3831_p3.read());
}

void disparityMap::thread_cost_d_actual_V_12_c_fu_3997_p1() {
    cost_d_actual_V_12_c_fu_3997_p1 = esl_zext<9,8>(agg_result_V_i_i14_fu_3989_p3.read());
}

void disparityMap::thread_cost_d_actual_V_13_c_fu_4140_p1() {
    cost_d_actual_V_13_c_fu_4140_p1 = esl_zext<9,8>(agg_result_V_i_i15_fu_4132_p3.read());
}

void disparityMap::thread_cost_d_actual_V_14_c_fu_4293_p1() {
    cost_d_actual_V_14_c_fu_4293_p1 = esl_zext<9,8>(agg_result_V_i_i16_fu_4285_p3.read());
}

void disparityMap::thread_cost_d_actual_V_15_c_fu_4469_p1() {
    cost_d_actual_V_15_c_fu_4469_p1 = esl_zext<9,8>(agg_result_V_i_i17_fu_4464_p3.read());
}

void disparityMap::thread_cost_d_actual_V_16_c_fu_2390_p1() {
    cost_d_actual_V_16_c_fu_2390_p1 = esl_zext<9,8>(agg_result_V_i_i4_fu_2382_p3.read());
}

void disparityMap::thread_cost_d_actual_V_1_10_1_fu_3888_p1() {
    cost_d_actual_V_1_10_1_fu_3888_p1 = esl_zext<10,9>(cost_d_actual_V_1_10_fu_3882_p2.read());
}

void disparityMap::thread_cost_d_actual_V_1_10_fu_3882_p2() {
    cost_d_actual_V_1_10_fu_3882_p2 = (!p_7_10_cast_fu_3878_p1.read().is_01() || !cost_d_actual_V_11_c_fu_3839_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_10_cast_fu_3878_p1.read()) + sc_biguint<9>(cost_d_actual_V_11_c_fu_3839_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_11_1_fu_4046_p1() {
    cost_d_actual_V_1_11_1_fu_4046_p1 = esl_zext<10,9>(cost_d_actual_V_1_11_fu_4040_p2.read());
}

void disparityMap::thread_cost_d_actual_V_1_11_fu_4040_p2() {
    cost_d_actual_V_1_11_fu_4040_p2 = (!p_7_11_cast_fu_4036_p1.read().is_01() || !cost_d_actual_V_12_c_fu_3997_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_11_cast_fu_4036_p1.read()) + sc_biguint<9>(cost_d_actual_V_12_c_fu_3997_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_12_1_fu_4190_p1() {
    cost_d_actual_V_1_12_1_fu_4190_p1 = esl_zext<10,9>(cost_d_actual_V_1_12_fu_4184_p2.read());
}

void disparityMap::thread_cost_d_actual_V_1_12_fu_4184_p2() {
    cost_d_actual_V_1_12_fu_4184_p2 = (!p_7_12_cast_fu_4180_p1.read().is_01() || !cost_d_actual_V_13_c_fu_4140_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_12_cast_fu_4180_p1.read()) + sc_biguint<9>(cost_d_actual_V_13_c_fu_4140_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_13_1_fu_4349_p1() {
    cost_d_actual_V_1_13_1_fu_4349_p1 = esl_zext<10,9>(cost_d_actual_V_1_13_reg_6123.read());
}

void disparityMap::thread_cost_d_actual_V_1_13_fu_4337_p2() {
    cost_d_actual_V_1_13_fu_4337_p2 = (!p_7_13_cast_fu_4333_p1.read().is_01() || !cost_d_actual_V_14_c_fu_4293_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_13_cast_fu_4333_p1.read()) + sc_biguint<9>(cost_d_actual_V_14_c_fu_4293_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_14_1_fu_4492_p1() {
    cost_d_actual_V_1_14_1_fu_4492_p1 = esl_zext<10,9>(cost_d_actual_V_1_14_fu_4486_p2.read());
}

void disparityMap::thread_cost_d_actual_V_1_14_fu_4486_p2() {
    cost_d_actual_V_1_14_fu_4486_p2 = (!p_7_14_cast_fu_4482_p1.read().is_01() || !cost_d_actual_V_15_c_fu_4469_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_14_cast_fu_4482_p1.read()) + sc_biguint<9>(cost_d_actual_V_15_c_fu_4469_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_1_fu_2273_p2() {
    cost_d_actual_V_1_1_fu_2273_p2 = (!p_7_1_cast_fu_2269_p1.read().is_01() || !cost_d_actual_V_cas_fu_2249_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_1_cast_fu_2269_p1.read()) + sc_biguint<9>(cost_d_actual_V_cas_fu_2249_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_1_s_fu_2279_p1() {
    cost_d_actual_V_1_1_s_fu_2279_p1 = esl_zext<10,9>(cost_d_actual_V_1_1_fu_2273_p2.read());
}

void disparityMap::thread_cost_d_actual_V_1_2_fu_2433_p2() {
    cost_d_actual_V_1_2_fu_2433_p2 = (!p_7_2_cast_fu_2429_p1.read().is_01() || !cost_d_actual_V_16_c_fu_2390_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_2_cast_fu_2429_p1.read()) + sc_biguint<9>(cost_d_actual_V_16_c_fu_2390_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_2_s_fu_2439_p1() {
    cost_d_actual_V_1_2_s_fu_2439_p1 = esl_zext<10,9>(cost_d_actual_V_1_2_fu_2433_p2.read());
}

void disparityMap::thread_cost_d_actual_V_1_3_fu_2593_p2() {
    cost_d_actual_V_1_3_fu_2593_p2 = (!p_7_3_cast_fu_2589_p1.read().is_01() || !cost_d_actual_V_3_ca_fu_2549_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_3_cast_fu_2589_p1.read()) + sc_biguint<9>(cost_d_actual_V_3_ca_fu_2549_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_3_s_fu_2599_p1() {
    cost_d_actual_V_1_3_s_fu_2599_p1 = esl_zext<10,9>(cost_d_actual_V_1_3_fu_2593_p2.read());
}

void disparityMap::thread_cost_d_actual_V_1_4_fu_2751_p2() {
    cost_d_actual_V_1_4_fu_2751_p2 = (!p_7_4_cast_fu_2747_p1.read().is_01() || !cost_d_actual_V_4_ca_fu_2707_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_4_cast_fu_2747_p1.read()) + sc_biguint<9>(cost_d_actual_V_4_ca_fu_2707_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_4_s_fu_2791_p1() {
    cost_d_actual_V_1_4_s_fu_2791_p1 = esl_zext<10,9>(cost_d_actual_V_1_4_reg_5627.read());
}

void disparityMap::thread_cost_d_actual_V_1_5_fu_2924_p2() {
    cost_d_actual_V_1_5_fu_2924_p2 = (!p_7_5_cast_fu_2920_p1.read().is_01() || !cost_d_actual_V_5_ca_fu_2907_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_5_cast_fu_2920_p1.read()) + sc_biguint<9>(cost_d_actual_V_5_ca_fu_2907_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_5_s_fu_2930_p1() {
    cost_d_actual_V_1_5_s_fu_2930_p1 = esl_zext<10,9>(cost_d_actual_V_1_5_fu_2924_p2.read());
}

void disparityMap::thread_cost_d_actual_V_1_6_fu_3082_p2() {
    cost_d_actual_V_1_6_fu_3082_p2 = (!p_7_6_cast_fu_3078_p1.read().is_01() || !cost_d_actual_V_6_ca_fu_3039_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_6_cast_fu_3078_p1.read()) + sc_biguint<9>(cost_d_actual_V_6_ca_fu_3039_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_6_s_fu_3088_p1() {
    cost_d_actual_V_1_6_s_fu_3088_p1 = esl_zext<10,9>(cost_d_actual_V_1_6_fu_3082_p2.read());
}

void disparityMap::thread_cost_d_actual_V_1_7_fu_3240_p2() {
    cost_d_actual_V_1_7_fu_3240_p2 = (!p_7_7_cast_fu_3236_p1.read().is_01() || !cost_d_actual_V_7_ca_fu_3197_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_7_cast_fu_3236_p1.read()) + sc_biguint<9>(cost_d_actual_V_7_ca_fu_3197_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_7_s_fu_3246_p1() {
    cost_d_actual_V_1_7_s_fu_3246_p1 = esl_zext<10,9>(cost_d_actual_V_1_7_fu_3240_p2.read());
}

void disparityMap::thread_cost_d_actual_V_1_8_fu_3396_p2() {
    cost_d_actual_V_1_8_fu_3396_p2 = (!p_7_8_cast_fu_3392_p1.read().is_01() || !cost_d_actual_V_8_ca_fu_3352_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_8_cast_fu_3392_p1.read()) + sc_biguint<9>(cost_d_actual_V_8_ca_fu_3352_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_8_s_fu_3402_p1() {
    cost_d_actual_V_1_8_s_fu_3402_p1 = esl_zext<10,9>(cost_d_actual_V_1_8_fu_3396_p2.read());
}

void disparityMap::thread_cost_d_actual_V_1_9_fu_3558_p2() {
    cost_d_actual_V_1_9_fu_3558_p2 = (!p_7_9_cast_fu_3554_p1.read().is_01() || !cost_d_actual_V_9_ca_fu_3514_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_9_cast_fu_3554_p1.read()) + sc_biguint<9>(cost_d_actual_V_9_ca_fu_3514_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_9_s_fu_3594_p1() {
    cost_d_actual_V_1_9_s_fu_3594_p1 = esl_zext<10,9>(cost_d_actual_V_1_9_reg_5893.read());
}

void disparityMap::thread_cost_d_actual_V_1_c_fu_3733_p1() {
    cost_d_actual_V_1_c_fu_3733_p1 = esl_zext<10,9>(cost_d_actual_V_1_s_fu_3727_p2.read());
}

void disparityMap::thread_cost_d_actual_V_1_ca_fu_2170_p1() {
    cost_d_actual_V_1_ca_fu_2170_p1 = esl_zext<10,9>(cost_d_actual_V_1_fu_2164_p2.read());
}

void disparityMap::thread_cost_d_actual_V_1_fu_2164_p2() {
    cost_d_actual_V_1_fu_2164_p2 = (!cost_d_actual_V_cast_fu_2140_p1.read().is_01() || !p_7_cast_fu_2160_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(cost_d_actual_V_cast_fu_2140_p1.read()) + sc_biguint<9>(p_7_cast_fu_2160_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_1_s_fu_3727_p2() {
    cost_d_actual_V_1_s_fu_3727_p2 = (!p_7_cast_30_fu_3723_p1.read().is_01() || !cost_d_actual_V_10_c_fu_3710_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_7_cast_30_fu_3723_p1.read()) + sc_biguint<9>(cost_d_actual_V_10_c_fu_3710_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_10_1_fu_3924_p1() {
    cost_d_actual_V_2_10_1_fu_3924_p1 = esl_zext<11,10>(cost_d_actual_V_2_10_fu_3918_p2.read());
}

void disparityMap::thread_cost_d_actual_V_2_10_2_fu_3934_p3() {
    cost_d_actual_V_2_10_2_fu_3934_p3 = (!tmp_50_10_fu_3928_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_50_10_fu_3928_p2.read()[0].to_bool())? cost_d_actual_V_2_10_1_fu_3924_p1.read(): ap_phi_reg_pp1_iter1_p_01189_2_s_reg_1364.read());
}

void disparityMap::thread_cost_d_actual_V_2_10_fu_3918_p2() {
    cost_d_actual_V_2_10_fu_3918_p2 = (!p_8_10_cast_fu_3914_p1.read().is_01() || !cost_d_actual_V_1_10_1_fu_3888_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_10_cast_fu_3914_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_10_1_fu_3888_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_11_1_fu_4082_p1() {
    cost_d_actual_V_2_11_1_fu_4082_p1 = esl_zext<11,10>(cost_d_actual_V_2_11_fu_4076_p2.read());
}

void disparityMap::thread_cost_d_actual_V_2_11_2_fu_4104_p3() {
    cost_d_actual_V_2_11_2_fu_4104_p3 = (!tmp_50_11_reg_6060.read()[0].is_01())? sc_lv<11>(): ((tmp_50_11_reg_6060.read()[0].to_bool())? cost_d_actual_V_2_11_1_reg_6055.read(): p_01189_2_10_reg_1408.read());
}

void disparityMap::thread_cost_d_actual_V_2_11_fu_4076_p2() {
    cost_d_actual_V_2_11_fu_4076_p2 = (!p_8_11_cast_fu_4072_p1.read().is_01() || !cost_d_actual_V_1_11_1_fu_4046_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_11_cast_fu_4072_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_11_1_fu_4046_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_12_1_fu_4245_p1() {
    cost_d_actual_V_2_12_1_fu_4245_p1 = esl_zext<11,10>(cost_d_actual_V_2_12_reg_6096.read());
}

void disparityMap::thread_cost_d_actual_V_2_12_2_fu_4254_p3() {
    cost_d_actual_V_2_12_2_fu_4254_p3 = (!tmp_50_12_fu_4248_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_50_12_fu_4248_p2.read()[0].to_bool())? cost_d_actual_V_2_12_1_fu_4245_p1.read(): ap_phi_reg_pp1_iter1_p_01189_2_11_reg_1452.read());
}

void disparityMap::thread_cost_d_actual_V_2_12_fu_4220_p2() {
    cost_d_actual_V_2_12_fu_4220_p2 = (!p_8_12_cast_fu_4216_p1.read().is_01() || !cost_d_actual_V_1_12_1_fu_4190_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_12_cast_fu_4216_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_12_1_fu_4190_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_13_1_fu_4379_p1() {
    cost_d_actual_V_2_13_1_fu_4379_p1 = esl_zext<11,10>(cost_d_actual_V_2_13_fu_4373_p2.read());
}

void disparityMap::thread_cost_d_actual_V_2_13_2_fu_4389_p3() {
    cost_d_actual_V_2_13_2_fu_4389_p3 = (!tmp_50_13_fu_4383_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_50_13_fu_4383_p2.read()[0].to_bool())? cost_d_actual_V_2_13_1_fu_4379_p1.read(): ap_phi_reg_pp1_iter1_p_01189_2_12_reg_1495.read());
}

void disparityMap::thread_cost_d_actual_V_2_13_fu_4373_p2() {
    cost_d_actual_V_2_13_fu_4373_p2 = (!p_8_13_cast_fu_4369_p1.read().is_01() || !cost_d_actual_V_1_13_1_fu_4349_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_13_cast_fu_4369_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_13_1_fu_4349_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_14_1_fu_4511_p1() {
    cost_d_actual_V_2_14_1_fu_4511_p1 = esl_zext<11,10>(cost_d_actual_V_2_14_fu_4505_p2.read());
}

void disparityMap::thread_cost_d_actual_V_2_14_fu_4505_p2() {
    cost_d_actual_V_2_14_fu_4505_p2 = (!p_8_14_cast_fu_4502_p1.read().is_01() || !cost_d_actual_V_1_14_1_fu_4492_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_14_cast_fu_4502_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_14_1_fu_4492_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_1_1_fu_2325_p3() {
    cost_d_actual_V_2_1_1_fu_2325_p3 = (!tmp_50_1_fu_2319_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_50_1_fu_2319_p2.read()[0].to_bool())? cost_d_actual_V_2_1_s_fu_2315_p1.read(): ap_phi_reg_pp1_iter0_p_01189_2_reg_939.read());
}

void disparityMap::thread_cost_d_actual_V_2_1_fu_2309_p2() {
    cost_d_actual_V_2_1_fu_2309_p2 = (!p_8_1_cast_fu_2305_p1.read().is_01() || !cost_d_actual_V_1_1_s_fu_2279_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_1_cast_fu_2305_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_1_s_fu_2279_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_1_s_fu_2315_p1() {
    cost_d_actual_V_2_1_s_fu_2315_p1 = esl_zext<11,10>(cost_d_actual_V_2_1_fu_2309_p2.read());
}

void disparityMap::thread_cost_d_actual_V_2_2_1_fu_2513_p3() {
    cost_d_actual_V_2_2_1_fu_2513_p3 = (!tmp_50_2_reg_5528.read()[0].is_01())? sc_lv<11>(): ((tmp_50_2_reg_5528.read()[0].to_bool())? cost_d_actual_V_2_2_s_reg_5523.read(): p_01189_2_1_reg_973.read());
}

void disparityMap::thread_cost_d_actual_V_2_2_fu_2469_p2() {
    cost_d_actual_V_2_2_fu_2469_p2 = (!p_8_2_cast_fu_2465_p1.read().is_01() || !cost_d_actual_V_1_2_s_fu_2439_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_2_cast_fu_2465_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_2_s_fu_2439_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_2_s_fu_2475_p1() {
    cost_d_actual_V_2_2_s_fu_2475_p1 = esl_zext<11,10>(cost_d_actual_V_2_2_fu_2469_p2.read());
}

void disparityMap::thread_cost_d_actual_V_2_3_1_fu_2668_p3() {
    cost_d_actual_V_2_3_1_fu_2668_p3 = (!tmp_50_3_fu_2662_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_50_3_fu_2662_p2.read()[0].to_bool())? cost_d_actual_V_2_3_s_fu_2659_p1.read(): ap_phi_reg_pp1_iter0_p_01189_2_2_reg_1017.read());
}

void disparityMap::thread_cost_d_actual_V_2_3_fu_2629_p2() {
    cost_d_actual_V_2_3_fu_2629_p2 = (!p_8_3_cast_fu_2625_p1.read().is_01() || !cost_d_actual_V_1_3_s_fu_2599_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_3_cast_fu_2625_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_3_s_fu_2599_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_3_s_fu_2659_p1() {
    cost_d_actual_V_2_3_s_fu_2659_p1 = esl_zext<11,10>(cost_d_actual_V_2_3_reg_5583.read());
}

void disparityMap::thread_cost_d_actual_V_2_4_1_fu_2830_p3() {
    cost_d_actual_V_2_4_1_fu_2830_p3 = (!tmp_50_4_fu_2824_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_50_4_fu_2824_p2.read()[0].to_bool())? cost_d_actual_V_2_4_s_fu_2820_p1.read(): ap_phi_reg_pp1_iter0_p_01189_2_3_reg_1060.read());
}

void disparityMap::thread_cost_d_actual_V_2_4_fu_2814_p2() {
    cost_d_actual_V_2_4_fu_2814_p2 = (!p_8_4_cast_fu_2810_p1.read().is_01() || !cost_d_actual_V_1_4_s_fu_2791_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_4_cast_fu_2810_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_4_s_fu_2791_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_4_s_fu_2820_p1() {
    cost_d_actual_V_2_4_s_fu_2820_p1 = esl_zext<11,10>(cost_d_actual_V_2_4_fu_2814_p2.read());
}

void disparityMap::thread_cost_d_actual_V_2_5_1_fu_2976_p3() {
    cost_d_actual_V_2_5_1_fu_2976_p3 = (!tmp_50_5_fu_2970_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_50_5_fu_2970_p2.read()[0].to_bool())? cost_d_actual_V_2_5_s_fu_2966_p1.read(): ap_phi_reg_pp1_iter0_p_01189_2_4_reg_1103.read());
}

void disparityMap::thread_cost_d_actual_V_2_5_fu_2960_p2() {
    cost_d_actual_V_2_5_fu_2960_p2 = (!p_8_5_cast_fu_2956_p1.read().is_01() || !cost_d_actual_V_1_5_s_fu_2930_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_5_cast_fu_2956_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_5_s_fu_2930_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_5_s_fu_2966_p1() {
    cost_d_actual_V_2_5_s_fu_2966_p1 = esl_zext<11,10>(cost_d_actual_V_2_5_fu_2960_p2.read());
}

void disparityMap::thread_cost_d_actual_V_2_6_1_fu_3134_p3() {
    cost_d_actual_V_2_6_1_fu_3134_p3 = (!tmp_50_6_fu_3128_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_50_6_fu_3128_p2.read()[0].to_bool())? cost_d_actual_V_2_6_s_fu_3124_p1.read(): ap_phi_reg_pp1_iter0_p_01189_2_5_reg_1146.read());
}

void disparityMap::thread_cost_d_actual_V_2_6_fu_3118_p2() {
    cost_d_actual_V_2_6_fu_3118_p2 = (!p_8_6_cast_fu_3114_p1.read().is_01() || !cost_d_actual_V_1_6_s_fu_3088_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_6_cast_fu_3114_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_6_s_fu_3088_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_6_s_fu_3124_p1() {
    cost_d_actual_V_2_6_s_fu_3124_p1 = esl_zext<11,10>(cost_d_actual_V_2_6_fu_3118_p2.read());
}

void disparityMap::thread_cost_d_actual_V_2_7_1_fu_3316_p3() {
    cost_d_actual_V_2_7_1_fu_3316_p3 = (!tmp_50_7_reg_5804.read()[0].is_01())? sc_lv<11>(): ((tmp_50_7_reg_5804.read()[0].to_bool())? cost_d_actual_V_2_7_s_reg_5799.read(): p_01189_2_6_reg_1190.read());
}

void disparityMap::thread_cost_d_actual_V_2_7_fu_3276_p2() {
    cost_d_actual_V_2_7_fu_3276_p2 = (!p_8_7_cast_fu_3272_p1.read().is_01() || !cost_d_actual_V_1_7_s_fu_3246_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_7_cast_fu_3272_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_7_s_fu_3246_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_7_s_fu_3282_p1() {
    cost_d_actual_V_2_7_s_fu_3282_p1 = esl_zext<11,10>(cost_d_actual_V_2_7_fu_3276_p2.read());
}

void disparityMap::thread_cost_d_actual_V_2_8_1_fu_3475_p3() {
    cost_d_actual_V_2_8_1_fu_3475_p3 = (!tmp_50_8_fu_3469_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_50_8_fu_3469_p2.read()[0].to_bool())? cost_d_actual_V_2_8_s_fu_3466_p1.read(): ap_phi_reg_pp1_iter0_p_01189_2_7_reg_1234.read());
}

void disparityMap::thread_cost_d_actual_V_2_8_fu_3432_p2() {
    cost_d_actual_V_2_8_fu_3432_p2 = (!p_8_8_cast_fu_3428_p1.read().is_01() || !cost_d_actual_V_1_8_s_fu_3402_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_8_cast_fu_3428_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_8_s_fu_3402_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_8_s_fu_3466_p1() {
    cost_d_actual_V_2_8_s_fu_3466_p1 = esl_zext<11,10>(cost_d_actual_V_2_8_reg_5849.read());
}

void disparityMap::thread_cost_d_actual_V_2_9_1_fu_3633_p3() {
    cost_d_actual_V_2_9_1_fu_3633_p3 = (!tmp_50_9_fu_3627_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_50_9_fu_3627_p2.read()[0].to_bool())? cost_d_actual_V_2_9_s_fu_3623_p1.read(): ap_phi_reg_pp1_iter1_p_01189_2_8_reg_1277.read());
}

void disparityMap::thread_cost_d_actual_V_2_9_fu_3617_p2() {
    cost_d_actual_V_2_9_fu_3617_p2 = (!p_8_9_cast_fu_3613_p1.read().is_01() || !cost_d_actual_V_1_9_s_fu_3594_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_9_cast_fu_3613_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_9_s_fu_3594_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_9_s_fu_3623_p1() {
    cost_d_actual_V_2_9_s_fu_3623_p1 = esl_zext<11,10>(cost_d_actual_V_2_9_fu_3617_p2.read());
}

void disparityMap::thread_cost_d_actual_V_2_c_1_fu_3779_p3() {
    cost_d_actual_V_2_c_1_fu_3779_p3 = (!tmp_50_s_fu_3773_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_50_s_fu_3773_p2.read()[0].to_bool())? cost_d_actual_V_2_c_fu_3769_p1.read(): ap_phi_reg_pp1_iter1_p_01189_2_9_reg_1320.read());
}

void disparityMap::thread_cost_d_actual_V_2_c_fu_3769_p1() {
    cost_d_actual_V_2_c_fu_3769_p1 = esl_zext<11,10>(cost_d_actual_V_2_s_fu_3763_p2.read());
}

void disparityMap::thread_cost_d_actual_V_2_fu_2200_p2() {
    cost_d_actual_V_2_fu_2200_p2 = (!cost_d_actual_V_1_ca_fu_2170_p1.read().is_01() || !p_8_cast_fu_2196_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(cost_d_actual_V_1_ca_fu_2170_p1.read()) + sc_biguint<10>(p_8_cast_fu_2196_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_2_s_fu_3763_p2() {
    cost_d_actual_V_2_s_fu_3763_p2 = (!p_8_cast_31_fu_3759_p1.read().is_01() || !cost_d_actual_V_1_c_fu_3733_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_8_cast_31_fu_3759_p1.read()) + sc_biguint<10>(cost_d_actual_V_1_c_fu_3733_p1.read()));
}

void disparityMap::thread_cost_d_actual_V_3_ca_fu_2549_p1() {
    cost_d_actual_V_3_ca_fu_2549_p1 = esl_zext<9,8>(agg_result_V_i_i5_fu_2541_p3.read());
}

void disparityMap::thread_cost_d_actual_V_4_ca_fu_2707_p1() {
    cost_d_actual_V_4_ca_fu_2707_p1 = esl_zext<9,8>(agg_result_V_i_i6_fu_2699_p3.read());
}

void disparityMap::thread_cost_d_actual_V_5_ca_fu_2907_p1() {
    cost_d_actual_V_5_ca_fu_2907_p1 = esl_zext<9,8>(agg_result_V_i_i7_fu_2902_p3.read());
}

void disparityMap::thread_cost_d_actual_V_6_ca_fu_3039_p1() {
    cost_d_actual_V_6_ca_fu_3039_p1 = esl_zext<9,8>(agg_result_V_i_i8_fu_3031_p3.read());
}

void disparityMap::thread_cost_d_actual_V_7_ca_fu_3197_p1() {
    cost_d_actual_V_7_ca_fu_3197_p1 = esl_zext<9,8>(agg_result_V_i_i9_fu_3189_p3.read());
}

void disparityMap::thread_cost_d_actual_V_8_ca_fu_3352_p1() {
    cost_d_actual_V_8_ca_fu_3352_p1 = esl_zext<9,8>(agg_result_V_i_i10_fu_3344_p3.read());
}

void disparityMap::thread_cost_d_actual_V_9_ca_fu_3514_p1() {
    cost_d_actual_V_9_ca_fu_3514_p1 = esl_zext<9,8>(agg_result_V_i_i11_fu_3506_p3.read());
}

void disparityMap::thread_cost_d_actual_V_cas_fu_2249_p1() {
    cost_d_actual_V_cas_fu_2249_p1 = esl_zext<9,8>(agg_result_V_i_i3_fu_2241_p3.read());
}

void disparityMap::thread_cost_d_actual_V_cast_fu_2140_p1() {
    cost_d_actual_V_cast_fu_2140_p1 = esl_zext<9,8>(agg_result_V_i_i2_fu_2132_p3.read());
}

void disparityMap::thread_cost_d_diagonal_V_10_fu_4845_p0() {
    cost_d_diagonal_V_10_fu_4845_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_10_fu_4845_p1() {
    cost_d_diagonal_V_10_fu_4845_p1 =  (sc_lv<9>) (cost_d_diagonal_V_10_fu_4845_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_10_fu_4845_p10() {
    cost_d_diagonal_V_10_fu_4845_p10 = esl_zext<18,9>(cost_last_line_11_V_2_reg_5367.read());
}

void disparityMap::thread_cost_d_diagonal_V_11_fu_4855_p0() {
    cost_d_diagonal_V_11_fu_4855_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_11_fu_4855_p1() {
    cost_d_diagonal_V_11_fu_4855_p1 =  (sc_lv<9>) (cost_d_diagonal_V_11_fu_4855_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_11_fu_4855_p10() {
    cost_d_diagonal_V_11_fu_4855_p10 = esl_zext<18,9>(cost_last_line_12_V_2_reg_5405.read());
}

void disparityMap::thread_cost_d_diagonal_V_12_fu_4865_p0() {
    cost_d_diagonal_V_12_fu_4865_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_12_fu_4865_p1() {
    cost_d_diagonal_V_12_fu_4865_p1 =  (sc_lv<9>) (cost_d_diagonal_V_12_fu_4865_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_12_fu_4865_p10() {
    cost_d_diagonal_V_12_fu_4865_p10 = esl_zext<18,9>(cost_last_line_13_V_2_reg_5449.read());
}

void disparityMap::thread_cost_d_diagonal_V_13_fu_4875_p0() {
    cost_d_diagonal_V_13_fu_4875_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_13_fu_4875_p1() {
    cost_d_diagonal_V_13_fu_4875_p1 =  (sc_lv<9>) (cost_d_diagonal_V_13_fu_4875_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_13_fu_4875_p10() {
    cost_d_diagonal_V_13_fu_4875_p10 = esl_zext<18,9>(cost_last_line_14_V_2_reg_5503.read());
}

void disparityMap::thread_cost_d_diagonal_V_14_fu_4885_p0() {
    cost_d_diagonal_V_14_fu_4885_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_14_fu_4885_p1() {
    cost_d_diagonal_V_14_fu_4885_p1 =  (sc_lv<9>) (cost_d_diagonal_V_14_fu_4885_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_14_fu_4885_p10() {
    cost_d_diagonal_V_14_fu_4885_p10 = esl_zext<18,9>(cost_last_line_15_V_2_reg_5602.read());
}

void disparityMap::thread_cost_d_diagonal_V_1_fu_4744_p0() {
    cost_d_diagonal_V_1_fu_4744_p0 =  (sc_lv<10>) (tmp_30_fu_2105_p1.read());
}

void disparityMap::thread_cost_d_diagonal_V_1_fu_4744_p1() {
    cost_d_diagonal_V_1_fu_4744_p1 =  (sc_lv<9>) (cost_d_diagonal_V_1_fu_4744_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_1_fu_4744_p10() {
    cost_d_diagonal_V_1_fu_4744_p10 = esl_zext<18,9>(cost_last_line_1_V_1_reg_5214.read());
}

void disparityMap::thread_cost_d_diagonal_V_2_fu_4755_p0() {
    cost_d_diagonal_V_2_fu_4755_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_2_fu_4755_p1() {
    cost_d_diagonal_V_2_fu_4755_p1 =  (sc_lv<9>) (cost_d_diagonal_V_2_fu_4755_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_2_fu_4755_p10() {
    cost_d_diagonal_V_2_fu_4755_p10 = esl_zext<18,9>(cost_last_line_2_V_1_reg_5219.read());
}

void disparityMap::thread_cost_d_diagonal_V_3_fu_4765_p0() {
    cost_d_diagonal_V_3_fu_4765_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_3_fu_4765_p1() {
    cost_d_diagonal_V_3_fu_4765_p1 =  (sc_lv<9>) (cost_d_diagonal_V_3_fu_4765_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_3_fu_4765_p10() {
    cost_d_diagonal_V_3_fu_4765_p10 = esl_zext<18,9>(cost_last_line_3_V_1_reg_5224.read());
}

void disparityMap::thread_cost_d_diagonal_V_4_fu_4775_p0() {
    cost_d_diagonal_V_4_fu_4775_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_4_fu_4775_p1() {
    cost_d_diagonal_V_4_fu_4775_p1 =  (sc_lv<9>) (cost_d_diagonal_V_4_fu_4775_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_4_fu_4775_p10() {
    cost_d_diagonal_V_4_fu_4775_p10 = esl_zext<18,9>(cost_last_line_4_V_1_reg_5229.read());
}

void disparityMap::thread_cost_d_diagonal_V_5_fu_4785_p0() {
    cost_d_diagonal_V_5_fu_4785_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_5_fu_4785_p1() {
    cost_d_diagonal_V_5_fu_4785_p1 =  (sc_lv<9>) (cost_d_diagonal_V_5_fu_4785_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_5_fu_4785_p10() {
    cost_d_diagonal_V_5_fu_4785_p10 = esl_zext<18,9>(cost_last_line_5_V_1_reg_5234.read());
}

void disparityMap::thread_cost_d_diagonal_V_6_fu_4795_p0() {
    cost_d_diagonal_V_6_fu_4795_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_6_fu_4795_p1() {
    cost_d_diagonal_V_6_fu_4795_p1 =  (sc_lv<9>) (cost_d_diagonal_V_6_fu_4795_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_6_fu_4795_p10() {
    cost_d_diagonal_V_6_fu_4795_p10 = esl_zext<18,9>(cost_last_line_6_V_1_reg_5239.read());
}

void disparityMap::thread_cost_d_diagonal_V_7_fu_4805_p0() {
    cost_d_diagonal_V_7_fu_4805_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_7_fu_4805_p1() {
    cost_d_diagonal_V_7_fu_4805_p1 =  (sc_lv<9>) (cost_d_diagonal_V_7_fu_4805_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_7_fu_4805_p10() {
    cost_d_diagonal_V_7_fu_4805_p10 = esl_zext<18,9>(cost_last_line_7_V_1_reg_5244.read());
}

void disparityMap::thread_cost_d_diagonal_V_8_fu_4815_p0() {
    cost_d_diagonal_V_8_fu_4815_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_8_fu_4815_p1() {
    cost_d_diagonal_V_8_fu_4815_p1 =  (sc_lv<9>) (cost_d_diagonal_V_8_fu_4815_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_8_fu_4815_p10() {
    cost_d_diagonal_V_8_fu_4815_p10 = esl_zext<18,9>(cost_last_line_8_V_1_reg_5249.read());
}

void disparityMap::thread_cost_d_diagonal_V_9_fu_4825_p0() {
    cost_d_diagonal_V_9_fu_4825_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_9_fu_4825_p1() {
    cost_d_diagonal_V_9_fu_4825_p1 =  (sc_lv<9>) (cost_d_diagonal_V_9_fu_4825_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_9_fu_4825_p10() {
    cost_d_diagonal_V_9_fu_4825_p10 = esl_zext<18,9>(cost_last_line_9_V_1_reg_5254.read());
}

void disparityMap::thread_cost_d_diagonal_V_fu_4738_p0() {
    cost_d_diagonal_V_fu_4738_p0 =  (sc_lv<9>) (cost_d_diagonal_V_fu_4738_p00.read());
}

void disparityMap::thread_cost_d_diagonal_V_fu_4738_p00() {
    cost_d_diagonal_V_fu_4738_p00 = esl_zext<18,9>(cost_last_line_0_V_2_reg_5209.read());
}

void disparityMap::thread_cost_d_diagonal_V_fu_4738_p1() {
    cost_d_diagonal_V_fu_4738_p1 =  (sc_lv<10>) (tmp_30_fu_2105_p1.read());
}

void disparityMap::thread_cost_d_diagonal_V_s_fu_4835_p0() {
    cost_d_diagonal_V_s_fu_4835_p0 =  (sc_lv<10>) (tmp_30_reg_5377.read());
}

void disparityMap::thread_cost_d_diagonal_V_s_fu_4835_p1() {
    cost_d_diagonal_V_s_fu_4835_p1 =  (sc_lv<9>) (cost_d_diagonal_V_s_fu_4835_p10.read());
}

void disparityMap::thread_cost_d_diagonal_V_s_fu_4835_p10() {
    cost_d_diagonal_V_s_fu_4835_p10 = esl_zext<18,9>(cost_last_line_10_V_2_reg_5304.read());
}

void disparityMap::thread_cost_d_right_V_10_fu_4840_p0() {
    cost_d_right_V_10_fu_4840_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_10_fu_4840_p1() {
    cost_d_right_V_10_fu_4840_p1 =  (sc_lv<9>) (cost_d_right_V_10_fu_4840_p10.read());
}

void disparityMap::thread_cost_d_right_V_10_fu_4840_p10() {
    cost_d_right_V_10_fu_4840_p10 = esl_zext<18,9>(cost_d_temp_right_V_11.read());
}

void disparityMap::thread_cost_d_right_V_11_fu_4850_p0() {
    cost_d_right_V_11_fu_4850_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_11_fu_4850_p1() {
    cost_d_right_V_11_fu_4850_p1 =  (sc_lv<9>) (cost_d_right_V_11_fu_4850_p10.read());
}

void disparityMap::thread_cost_d_right_V_11_fu_4850_p10() {
    cost_d_right_V_11_fu_4850_p10 = esl_zext<18,9>(cost_d_temp_right_V_12.read());
}

void disparityMap::thread_cost_d_right_V_12_fu_4860_p0() {
    cost_d_right_V_12_fu_4860_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_12_fu_4860_p1() {
    cost_d_right_V_12_fu_4860_p1 =  (sc_lv<9>) (cost_d_right_V_12_fu_4860_p10.read());
}

void disparityMap::thread_cost_d_right_V_12_fu_4860_p10() {
    cost_d_right_V_12_fu_4860_p10 = esl_zext<18,9>(cost_d_temp_right_V_13.read());
}

void disparityMap::thread_cost_d_right_V_13_fu_4870_p0() {
    cost_d_right_V_13_fu_4870_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_13_fu_4870_p1() {
    cost_d_right_V_13_fu_4870_p1 =  (sc_lv<9>) (cost_d_right_V_13_fu_4870_p10.read());
}

void disparityMap::thread_cost_d_right_V_13_fu_4870_p10() {
    cost_d_right_V_13_fu_4870_p10 = esl_zext<18,9>(cost_d_temp_right_V_14.read());
}

void disparityMap::thread_cost_d_right_V_14_fu_4880_p0() {
    cost_d_right_V_14_fu_4880_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_14_fu_4880_p1() {
    cost_d_right_V_14_fu_4880_p1 =  (sc_lv<9>) (cost_d_right_V_14_fu_4880_p10.read());
}

void disparityMap::thread_cost_d_right_V_14_fu_4880_p10() {
    cost_d_right_V_14_fu_4880_p10 = esl_zext<18,9>(cost_d_temp_right_V_15.read());
}

void disparityMap::thread_cost_d_right_V_1_fu_4732_p0() {
    cost_d_right_V_1_fu_4732_p0 =  (sc_lv<10>) (tmp_29_fu_2083_p1.read());
}

void disparityMap::thread_cost_d_right_V_1_fu_4732_p1() {
    cost_d_right_V_1_fu_4732_p1 =  (sc_lv<9>) (cost_d_right_V_1_fu_4732_p10.read());
}

void disparityMap::thread_cost_d_right_V_1_fu_4732_p10() {
    cost_d_right_V_1_fu_4732_p10 = esl_zext<18,9>(cost_d_temp_right_V_1.read());
}

void disparityMap::thread_cost_d_right_V_2_fu_4750_p0() {
    cost_d_right_V_2_fu_4750_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_2_fu_4750_p1() {
    cost_d_right_V_2_fu_4750_p1 =  (sc_lv<9>) (cost_d_right_V_2_fu_4750_p10.read());
}

void disparityMap::thread_cost_d_right_V_2_fu_4750_p10() {
    cost_d_right_V_2_fu_4750_p10 = esl_zext<18,9>(cost_d_temp_right_V_2.read());
}

void disparityMap::thread_cost_d_right_V_3_fu_4760_p0() {
    cost_d_right_V_3_fu_4760_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_3_fu_4760_p1() {
    cost_d_right_V_3_fu_4760_p1 =  (sc_lv<9>) (cost_d_right_V_3_fu_4760_p10.read());
}

void disparityMap::thread_cost_d_right_V_3_fu_4760_p10() {
    cost_d_right_V_3_fu_4760_p10 = esl_zext<18,9>(cost_d_temp_right_V_3.read());
}

void disparityMap::thread_cost_d_right_V_4_fu_4770_p0() {
    cost_d_right_V_4_fu_4770_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_4_fu_4770_p1() {
    cost_d_right_V_4_fu_4770_p1 =  (sc_lv<9>) (cost_d_right_V_4_fu_4770_p10.read());
}

void disparityMap::thread_cost_d_right_V_4_fu_4770_p10() {
    cost_d_right_V_4_fu_4770_p10 = esl_zext<18,9>(cost_d_temp_right_V_4.read());
}

void disparityMap::thread_cost_d_right_V_5_fu_4780_p0() {
    cost_d_right_V_5_fu_4780_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_5_fu_4780_p1() {
    cost_d_right_V_5_fu_4780_p1 =  (sc_lv<9>) (cost_d_right_V_5_fu_4780_p10.read());
}

void disparityMap::thread_cost_d_right_V_5_fu_4780_p10() {
    cost_d_right_V_5_fu_4780_p10 = esl_zext<18,9>(cost_d_temp_right_V_5.read());
}

void disparityMap::thread_cost_d_right_V_6_fu_4790_p0() {
    cost_d_right_V_6_fu_4790_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_6_fu_4790_p1() {
    cost_d_right_V_6_fu_4790_p1 =  (sc_lv<9>) (cost_d_right_V_6_fu_4790_p10.read());
}

void disparityMap::thread_cost_d_right_V_6_fu_4790_p10() {
    cost_d_right_V_6_fu_4790_p10 = esl_zext<18,9>(cost_d_temp_right_V_6.read());
}

void disparityMap::thread_cost_d_right_V_7_fu_4800_p0() {
    cost_d_right_V_7_fu_4800_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_7_fu_4800_p1() {
    cost_d_right_V_7_fu_4800_p1 =  (sc_lv<9>) (cost_d_right_V_7_fu_4800_p10.read());
}

void disparityMap::thread_cost_d_right_V_7_fu_4800_p10() {
    cost_d_right_V_7_fu_4800_p10 = esl_zext<18,9>(cost_d_temp_right_V_7.read());
}

void disparityMap::thread_cost_d_right_V_8_fu_4810_p0() {
    cost_d_right_V_8_fu_4810_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_8_fu_4810_p1() {
    cost_d_right_V_8_fu_4810_p1 =  (sc_lv<9>) (cost_d_right_V_8_fu_4810_p10.read());
}

void disparityMap::thread_cost_d_right_V_8_fu_4810_p10() {
    cost_d_right_V_8_fu_4810_p10 = esl_zext<18,9>(cost_d_temp_right_V_8.read());
}

void disparityMap::thread_cost_d_right_V_9_fu_4820_p0() {
    cost_d_right_V_9_fu_4820_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_9_fu_4820_p1() {
    cost_d_right_V_9_fu_4820_p1 =  (sc_lv<9>) (cost_d_right_V_9_fu_4820_p10.read());
}

void disparityMap::thread_cost_d_right_V_9_fu_4820_p10() {
    cost_d_right_V_9_fu_4820_p10 = esl_zext<18,9>(cost_d_temp_right_V_9.read());
}

void disparityMap::thread_cost_d_right_V_fu_4726_p0() {
    cost_d_right_V_fu_4726_p0 =  (sc_lv<9>) (cost_d_right_V_fu_4726_p00.read());
}

void disparityMap::thread_cost_d_right_V_fu_4726_p00() {
    cost_d_right_V_fu_4726_p00 = esl_zext<18,9>(cost_d_temp_right_V_s.read());
}

void disparityMap::thread_cost_d_right_V_fu_4726_p1() {
    cost_d_right_V_fu_4726_p1 =  (sc_lv<10>) (tmp_29_fu_2083_p1.read());
}

void disparityMap::thread_cost_d_right_V_s_fu_4830_p0() {
    cost_d_right_V_s_fu_4830_p0 =  (sc_lv<10>) (tmp_29_reg_5339.read());
}

void disparityMap::thread_cost_d_right_V_s_fu_4830_p1() {
    cost_d_right_V_s_fu_4830_p1 =  (sc_lv<9>) (cost_d_right_V_s_fu_4830_p10.read());
}

void disparityMap::thread_cost_d_right_V_s_fu_4830_p10() {
    cost_d_right_V_s_fu_4830_p10 = esl_zext<18,9>(cost_d_temp_right_V_10.read());
}

void disparityMap::thread_cost_last_line_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
            cost_last_line_0_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            cost_last_line_0_V_address0 =  (sc_lv<9>) (tmp_27_fu_1957_p1.read());
        } else {
            cost_last_line_0_V_address0 = "XXXXXXXXX";
        }
    } else {
        cost_last_line_0_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0)))) {
        cost_last_line_0_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_0_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0))) {
        cost_last_line_0_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_0_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_10_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
        cost_last_line_10_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        cost_last_line_10_V_address0 =  (sc_lv<9>) (tmp_27_reg_5040.read());
    } else {
        cost_last_line_10_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_10_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)))) {
        cost_last_line_10_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_10_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_10_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        cost_last_line_10_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_10_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_11_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
        cost_last_line_11_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        cost_last_line_11_V_address0 =  (sc_lv<9>) (tmp_27_reg_5040.read());
    } else {
        cost_last_line_11_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_11_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cost_last_line_11_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_11_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_11_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        cost_last_line_11_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_11_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_12_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
        cost_last_line_12_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        cost_last_line_12_V_address0 =  (sc_lv<9>) (tmp_27_reg_5040.read());
    } else {
        cost_last_line_12_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_12_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cost_last_line_12_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_12_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_12_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        cost_last_line_12_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_12_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_13_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage5.read(), ap_const_boolean_0))) {
        cost_last_line_13_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        cost_last_line_13_V_address0 =  (sc_lv<9>) (tmp_27_reg_5040.read());
    } else {
        cost_last_line_13_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_13_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cost_last_line_13_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_13_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_13_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage5_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        cost_last_line_13_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_13_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_14_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6.read(), ap_const_boolean_0))) {
        cost_last_line_14_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage7.read(), ap_const_boolean_0))) {
        cost_last_line_14_V_address0 =  (sc_lv<9>) (tmp_27_reg_5040.read());
    } else {
        cost_last_line_14_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_14_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage7_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cost_last_line_14_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_14_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_14_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage6_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        cost_last_line_14_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_14_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_15_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage8.read(), ap_const_boolean_0))) {
        cost_last_line_15_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109_pp1_iter1_reg.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
        cost_last_line_15_V_address0 =  (sc_lv<9>) (tmp_27_reg_5040.read());
    } else {
        cost_last_line_15_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_15_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cost_last_line_15_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_15_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_15_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage8.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage8_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        cost_last_line_15_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_15_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage9.read(), ap_const_boolean_0))) {
            cost_last_line_1_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            cost_last_line_1_V_address0 =  (sc_lv<9>) (tmp_27_fu_1957_p1.read());
        } else {
            cost_last_line_1_V_address0 = "XXXXXXXXX";
        }
    } else {
        cost_last_line_1_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0)))) {
        cost_last_line_1_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_1_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage9_11001.read(), ap_const_boolean_0))) {
        cost_last_line_1_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_1_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage10.read(), ap_const_boolean_0))) {
            cost_last_line_2_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            cost_last_line_2_V_address0 =  (sc_lv<9>) (tmp_27_fu_1957_p1.read());
        } else {
            cost_last_line_2_V_address0 = "XXXXXXXXX";
        }
    } else {
        cost_last_line_2_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage10_11001.read(), ap_const_boolean_0)))) {
        cost_last_line_2_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_2_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage10_11001.read(), ap_const_boolean_0))) {
        cost_last_line_2_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_2_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage11.read(), ap_const_boolean_0))) {
            cost_last_line_3_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            cost_last_line_3_V_address0 =  (sc_lv<9>) (tmp_27_fu_1957_p1.read());
        } else {
            cost_last_line_3_V_address0 = "XXXXXXXXX";
        }
    } else {
        cost_last_line_3_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage11_11001.read(), ap_const_boolean_0)))) {
        cost_last_line_3_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_3_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage11.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage11_11001.read(), ap_const_boolean_0))) {
        cost_last_line_3_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_3_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage12.read(), ap_const_boolean_0))) {
            cost_last_line_4_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            cost_last_line_4_V_address0 =  (sc_lv<9>) (tmp_27_fu_1957_p1.read());
        } else {
            cost_last_line_4_V_address0 = "XXXXXXXXX";
        }
    } else {
        cost_last_line_4_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage12_11001.read(), ap_const_boolean_0)))) {
        cost_last_line_4_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_4_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage12.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage12_11001.read(), ap_const_boolean_0))) {
        cost_last_line_4_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_4_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage14.read(), ap_const_boolean_0))) {
            cost_last_line_5_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            cost_last_line_5_V_address0 =  (sc_lv<9>) (tmp_27_fu_1957_p1.read());
        } else {
            cost_last_line_5_V_address0 = "XXXXXXXXX";
        }
    } else {
        cost_last_line_5_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage14_11001.read(), ap_const_boolean_0)))) {
        cost_last_line_5_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_5_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage14.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage14_11001.read(), ap_const_boolean_0))) {
        cost_last_line_5_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_5_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage15.read(), ap_const_boolean_0))) {
            cost_last_line_6_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            cost_last_line_6_V_address0 =  (sc_lv<9>) (tmp_27_fu_1957_p1.read());
        } else {
            cost_last_line_6_V_address0 = "XXXXXXXXX";
        }
    } else {
        cost_last_line_6_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage15_11001.read(), ap_const_boolean_0)))) {
        cost_last_line_6_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_6_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage15.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage15_11001.read(), ap_const_boolean_0))) {
        cost_last_line_6_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_6_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage16.read(), ap_const_boolean_0))) {
            cost_last_line_7_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            cost_last_line_7_V_address0 =  (sc_lv<9>) (tmp_27_fu_1957_p1.read());
        } else {
            cost_last_line_7_V_address0 = "XXXXXXXXX";
        }
    } else {
        cost_last_line_7_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage16_11001.read(), ap_const_boolean_0)))) {
        cost_last_line_7_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_7_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage16.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage16_11001.read(), ap_const_boolean_0))) {
        cost_last_line_7_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_7_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage17.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage17.read(), ap_const_boolean_0))) {
            cost_last_line_8_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            cost_last_line_8_V_address0 =  (sc_lv<9>) (tmp_27_fu_1957_p1.read());
        } else {
            cost_last_line_8_V_address0 = "XXXXXXXXX";
        }
    } else {
        cost_last_line_8_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_8_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage17_11001.read(), ap_const_boolean_0)))) {
        cost_last_line_8_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_8_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_8_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage17.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage17_11001.read(), ap_const_boolean_0))) {
        cost_last_line_8_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_8_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_9_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        cost_last_line_9_V_address0 =  (sc_lv<9>) (tmp_12_reg_5109.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        cost_last_line_9_V_address0 =  (sc_lv<9>) (tmp_27_fu_1957_p1.read());
    } else {
        cost_last_line_9_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_cost_last_line_9_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        cost_last_line_9_V_ce0 = ap_const_logic_1;
    } else {
        cost_last_line_9_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_cost_last_line_9_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        cost_last_line_9_V_we0 = ap_const_logic_1;
    } else {
        cost_last_line_9_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_dMap_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        dMap_V_address0 =  (sc_lv<17>) (tmp_20_fu_4703_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        dMap_V_address0 =  (sc_lv<17>) (tmp_14_fu_4661_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage10.read(), ap_const_boolean_0))) {
        dMap_V_address0 =  (sc_lv<17>) (tmp_13_cast_reg_5010_pp1_iter1_reg.read());
    } else {
        dMap_V_address0 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
    }
}

void disparityMap::thread_dMap_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        dMap_V_address1 =  (sc_lv<17>) (tmp_18_fu_4693_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        dMap_V_address1 =  (sc_lv<17>) (tmp_16_fu_4672_p1.read());
    } else {
        dMap_V_address1 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
    }
}

void disparityMap::thread_dMap_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage10_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())))) {
        dMap_V_ce0 = ap_const_logic_1;
    } else {
        dMap_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_dMap_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        dMap_V_ce1 = ap_const_logic_1;
    } else {
        dMap_V_ce1 = ap_const_logic_0;
    }
}

void disparityMap::thread_dMap_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage10.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage10_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958_pp1_iter1_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        dMap_V_we0 = ap_const_logic_1;
    } else {
        dMap_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_dMapout_TDATA() {
    dMapout_TDATA = OUTPUT_data_V_1_data_out.read();
}

void disparityMap::thread_dMapout_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()))) {
        dMapout_TDATA_blk_n = OUTPUT_data_V_1_state.read()[1];
    } else {
        dMapout_TDATA_blk_n = ap_const_logic_1;
    }
}

void disparityMap::thread_dMapout_TLAST() {
    dMapout_TLAST = OUTPUT_last_V_1_data_out.read();
}

void disparityMap::thread_dMapout_TUSER() {
    dMapout_TUSER = OUTPUT_user_V_1_data_out.read();
}

void disparityMap::thread_dMapout_TVALID() {
    dMapout_TVALID = OUTPUT_last_V_1_state.read()[0];
}

void disparityMap::thread_exitcond_flatten_fu_1881_p2() {
    exitcond_flatten_fu_1881_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_862_p4.read().is_01() || !bound_fu_1875_p2.read().is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten_phi_fu_862_p4.read() == bound_fu_1875_p2.read());
}

void disparityMap::thread_exitcond_fu_1886_p2() {
    exitcond_fu_1886_p2 = (!ap_phi_mux_i_op_assign_2_phi_fu_885_p4.read().is_01() || !cols_V.read().is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_i_op_assign_2_phi_fu_885_p4.read() == cols_V.read());
}

void disparityMap::thread_exponentials_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            exponentials_V_address0 =  (sc_lv<8>) (tmp_i1_fu_2034_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage3.read(), ap_const_boolean_0))) {
            exponentials_V_address0 =  (sc_lv<8>) (tmp_i_fu_2004_p1.read());
        } else {
            exponentials_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
        }
    } else {
        exponentials_V_address0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void disparityMap::thread_exponentials_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage4_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage3_11001.read(), ap_const_boolean_0)))) {
        exponentials_V_ce0 = ap_const_logic_1;
    } else {
        exponentials_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_grp_fu_1605_p2() {
    grp_fu_1605_p2 = (!i_op_assign_2_mid2_reg_4988.read().is_01() || !ap_const_lv32_FFFFFFFE.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFE));
}

void disparityMap::thread_grp_fu_1610_p3() {
    grp_fu_1610_p3 = grp_fu_1605_p2.read().range(31, 31);
}

void disparityMap::thread_grp_fu_1638_p2() {
    grp_fu_1638_p2 = (!i_op_assign_2_mid2_reg_4988.read().is_01() || !ap_const_lv32_FFFFFFFC.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFC));
}

void disparityMap::thread_grp_fu_1648_p2() {
    grp_fu_1648_p2 = (!i_op_assign_2_mid2_reg_4988.read().is_01() || !ap_const_lv32_FFFFFFFB.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFB));
}

void disparityMap::thread_grp_fu_1658_p2() {
    grp_fu_1658_p2 = (!i_op_assign_2_mid2_reg_4988.read().is_01() || !ap_const_lv32_FFFFFFFA.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFA));
}

void disparityMap::thread_grp_fu_1668_p2() {
    grp_fu_1668_p2 = (!i_op_assign_2_mid2_reg_4988.read().is_01() || !ap_const_lv32_FFFFFFF9.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFF9));
}

void disparityMap::thread_grp_fu_1678_p2() {
    grp_fu_1678_p2 = (!i_op_assign_2_mid2_reg_4988.read().is_01() || !ap_const_lv32_FFFFFFF8.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFF8));
}

void disparityMap::thread_grp_fu_1688_p2() {
    grp_fu_1688_p2 = (!i_op_assign_2_mid2_reg_4988.read().is_01() || !ap_const_lv32_FFFFFFF7.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFF7));
}

void disparityMap::thread_grp_fu_1698_p2() {
    grp_fu_1698_p2 = (!i_op_assign_2_mid2_reg_4988.read().is_01() || !ap_const_lv32_FFFFFFF6.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFF6));
}

void disparityMap::thread_grp_fu_1708_p2() {
    grp_fu_1708_p2 = (!i_op_assign_2_mid2_reg_4988.read().is_01() || !ap_const_lv32_FFFFFFF5.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFF5));
}

void disparityMap::thread_grp_fu_1718_p2() {
    grp_fu_1718_p2 = (!i_op_assign_2_mid2_reg_4988.read().is_01() || !ap_const_lv32_FFFFFFF4.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFF4));
}

void disparityMap::thread_grp_fu_1728_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            grp_fu_1728_p0 = i_op_assign_2_mid2_reg_4988_pp1_iter1_reg.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
            grp_fu_1728_p0 = i_op_assign_2_mid2_reg_4988.read();
        } else {
            grp_fu_1728_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_1728_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void disparityMap::thread_grp_fu_1728_p2() {
    grp_fu_1728_p2 = (!grp_fu_1728_p0.read().is_01() || !ap_const_lv32_FFFFFFF3.is_01())? sc_lv<32>(): (sc_bigint<32>(grp_fu_1728_p0.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFF3));
}

void disparityMap::thread_grp_fu_1738_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage4.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage4.read(), ap_const_boolean_0))) {
            grp_fu_1738_p0 = i_op_assign_2_mid2_reg_4988_pp1_iter1_reg.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            grp_fu_1738_p0 = i_op_assign_2_mid2_reg_4988.read();
        } else {
            grp_fu_1738_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_1738_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void disparityMap::thread_grp_fu_1738_p2() {
    grp_fu_1738_p2 = (!grp_fu_1738_p0.read().is_01() || !ap_const_lv32_FFFFFFF2.is_01())? sc_lv<32>(): (sc_bigint<32>(grp_fu_1738_p0.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFF2));
}

void disparityMap::thread_grp_fu_1748_p2() {
    grp_fu_1748_p2 = (!i_op_assign_2_mid2_reg_4988_pp1_iter1_reg.read().is_01() || !ap_const_lv32_FFFFFFF1.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988_pp1_iter1_reg.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFF1));
}

void disparityMap::thread_grp_fu_4559_p0() {
    grp_fu_4559_p0 =  (sc_lv<40>) (grp_fu_4559_p00.read());
}

void disparityMap::thread_grp_fu_4559_p00() {
    grp_fu_4559_p00 = esl_zext<81,40>(ret_V_1_cast_fu_4551_p1.read());
}

void disparityMap::thread_grp_fu_4559_p1() {
    grp_fu_4559_p1 =  (sc_lv<42>) (ap_const_lv81_11111111112);
}

void disparityMap::thread_grp_fu_4719_p0() {
    grp_fu_4719_p0 = cols_V.read().range(18-1, 0);
}

void disparityMap::thread_grp_fu_4719_p2() {
    grp_fu_4719_p2 = i_op_assign_2_mid2_fu_1915_p3.read().range(18-1, 0);
}

void disparityMap::thread_i_op_assign_2_mid2_fu_1915_p3() {
    i_op_assign_2_mid2_fu_1915_p3 = (!exitcond_reg_4962.read()[0].is_01())? sc_lv<32>(): ((exitcond_reg_4962.read()[0].to_bool())? ap_const_lv32_0: i_op_assign_2_reg_881.read());
}

void disparityMap::thread_in_stream_TDATA_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        in_stream_TDATA_blk_n = INPUT_data_V_0_state.read()[0];
    } else {
        in_stream_TDATA_blk_n = ap_const_logic_1;
    }
}

void disparityMap::thread_in_stream_TREADY() {
    in_stream_TREADY = INPUT_last_V_0_state.read()[1];
}

void disparityMap::thread_indvar_flatten_next_fu_2114_p2() {
    indvar_flatten_next_fu_2114_p2 = (!indvar_flatten_reg_858.read().is_01() || !ap_const_lv64_1.is_01())? sc_lv<64>(): (sc_biguint<64>(indvar_flatten_reg_858.read()) + sc_biguint<64>(ap_const_lv64_1));
}

void disparityMap::thread_leftImage_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        leftImage_V_address0 =  (sc_lv<17>) (tmp_13_cast_fu_1926_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        leftImage_V_address0 =  (sc_lv<17>) (tmp_2_fu_1803_p1.read());
    } else {
        leftImage_V_address0 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
    }
}

void disparityMap::thread_leftImage_V_address1() {
    leftImage_V_address1 =  (sc_lv<17>) (tmp_4_fu_1818_p1.read());
}

void disparityMap::thread_leftImage_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(INPUT_data_V_0_vld_out.read(), ap_const_logic_1)))) {
        leftImage_V_ce0 = ap_const_logic_1;
    } else {
        leftImage_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_leftImage_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(INPUT_data_V_0_vld_out.read(), ap_const_logic_1))) {
        leftImage_V_ce1 = ap_const_logic_1;
    } else {
        leftImage_V_ce1 = ap_const_logic_0;
    }
}

void disparityMap::thread_leftImage_V_d0() {
    leftImage_V_d0 = INPUT_data_V_0_data_out.read().range(8-1, 0);
}

void disparityMap::thread_leftImage_V_d1() {
    leftImage_V_d1 = INPUT_data_V_0_data_out.read().range(15, 8);
}

void disparityMap::thread_leftImage_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(INPUT_data_V_0_vld_out.read(), ap_const_logic_1))) {
        leftImage_V_we0 = ap_const_logic_1;
    } else {
        leftImage_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_leftImage_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(INPUT_data_V_0_vld_out.read(), ap_const_logic_1))) {
        leftImage_V_we1 = ap_const_logic_1;
    } else {
        leftImage_V_we1 = ap_const_logic_0;
    }
}

void disparityMap::thread_lhs_V_1_cast_fu_1860_p1() {
    lhs_V_1_cast_fu_1860_p1 = esl_zext<33,32>(cols_V.read());
}

void disparityMap::thread_lhs_V_cast_fu_4529_p1() {
    lhs_V_cast_fu_4529_p1 = esl_zext<13,4>(ap_phi_reg_pp1_iter1_p_01181_2_14_reg_1584.read());
}

void disparityMap::thread_min_cost_V_cast_cast_fu_2206_p1() {
    min_cost_V_cast_cast_fu_2206_p1 = esl_zext<11,10>(cost_d_actual_V_2_fu_2200_p2.read());
}

void disparityMap::thread_mu_diagonal_V_1_fu_2067_p3() {
    mu_diagonal_V_1_fu_2067_p3 = (!sel_tmp_fu_2062_p2.read()[0].is_01())? sc_lv<10>(): ((sel_tmp_fu_2062_p2.read()[0].to_bool())? exponentials_V_q0.read(): mu_diagonal_V_3_fu_344.read());
}

void disparityMap::thread_mu_diagonal_V_2_fu_2075_p3() {
    mu_diagonal_V_2_fu_2075_p3 = (!tmp_9_mid2_fu_2050_p3.read()[0].is_01())? sc_lv<10>(): ((tmp_9_mid2_fu_2050_p3.read()[0].to_bool())? mu_diagonal_V_1_fu_2067_p3.read(): mu_diagonal_V_3_fu_344.read());
}

void disparityMap::thread_mu_right_V_1_fu_2056_p3() {
    mu_right_V_1_fu_2056_p3 = (!tmp_23_reg_5269.read()[0].is_01())? sc_lv<10>(): ((tmp_23_reg_5269.read()[0].to_bool())? mu_right_V_reg_5289.read(): mu_right_V_2_fu_348.read());
}

void disparityMap::thread_or_cond10_fu_4014_p2() {
    or_cond10_fu_4014_p2 = (tmp_23_reg_5269.read() & rev10_fu_4008_p2.read());
}

void disparityMap::thread_or_cond11_fu_4158_p2() {
    or_cond11_fu_4158_p2 = (tmp_23_reg_5269.read() & rev11_fu_4152_p2.read());
}

void disparityMap::thread_or_cond12_fu_4311_p2() {
    or_cond12_fu_4311_p2 = (tmp_23_reg_5269_pp1_iter1_reg.read() & rev12_fu_4305_p2.read());
}

void disparityMap::thread_or_cond13_fu_4436_p2() {
    or_cond13_fu_4436_p2 = (tmp_23_reg_5269_pp1_iter1_reg.read() & rev13_fu_4430_p2.read());
}

void disparityMap::thread_or_cond1_fu_2407_p2() {
    or_cond1_fu_2407_p2 = (tmp_23_reg_5269.read() & rev_fu_2401_p2.read());
}

void disparityMap::thread_or_cond2_fu_2567_p2() {
    or_cond2_fu_2567_p2 = (tmp_23_reg_5269.read() & rev1_fu_2561_p2.read());
}

void disparityMap::thread_or_cond3_fu_2725_p2() {
    or_cond3_fu_2725_p2 = (tmp_23_reg_5269.read() & rev2_fu_2719_p2.read());
}

void disparityMap::thread_or_cond4_fu_2875_p2() {
    or_cond4_fu_2875_p2 = (tmp_23_reg_5269.read() & rev3_fu_2869_p2.read());
}

void disparityMap::thread_or_cond5_fu_3056_p2() {
    or_cond5_fu_3056_p2 = (tmp_23_reg_5269.read() & rev4_fu_3050_p2.read());
}

void disparityMap::thread_or_cond6_fu_3214_p2() {
    or_cond6_fu_3214_p2 = (tmp_23_reg_5269.read() & rev5_fu_3208_p2.read());
}

void disparityMap::thread_or_cond7_fu_3370_p2() {
    or_cond7_fu_3370_p2 = (tmp_23_reg_5269.read() & rev6_fu_3364_p2.read());
}

void disparityMap::thread_or_cond8_fu_3532_p2() {
    or_cond8_fu_3532_p2 = (tmp_23_reg_5269.read() & rev7_fu_3526_p2.read());
}

void disparityMap::thread_or_cond9_fu_3678_p2() {
    or_cond9_fu_3678_p2 = (tmp_23_reg_5269.read() & rev8_fu_3672_p2.read());
}

void disparityMap::thread_or_cond_fu_3856_p2() {
    or_cond_fu_3856_p2 = (tmp_23_reg_5269.read() & rev9_fu_3850_p2.read());
}

void disparityMap::thread_p_01181_2_10_40_fu_4397_p3() {
    p_01181_2_10_40_fu_4397_p3 = (!tmp_50_13_fu_4383_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_50_13_fu_4383_p2.read()[0].to_bool())? ap_const_lv4_E: ap_phi_reg_pp1_iter1_p_01181_2_12_reg_1506.read());
}

void disparityMap::thread_p_01181_2_1_34_fu_3942_p3() {
    p_01181_2_1_34_fu_3942_p3 = (!tmp_50_10_fu_3928_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_50_10_fu_3928_p2.read()[0].to_bool())? ap_const_lv4_B: ap_phi_reg_pp1_iter1_p_01181_2_s_reg_1375.read());
}

void disparityMap::thread_p_01181_2_1_cast_14_fu_2519_p3() {
    p_01181_2_1_cast_14_fu_2519_p3 = (!tmp_50_2_reg_5528.read()[0].is_01())? sc_lv<2>(): ((tmp_50_2_reg_5528.read()[0].to_bool())? ap_const_lv2_2: p_01181_2_1_cast_fu_2509_p1.read());
}

void disparityMap::thread_p_01181_2_1_cast_fu_2509_p1() {
    p_01181_2_1_cast_fu_2509_p1 = esl_zext<2,1>(ap_phi_reg_pp1_iter0_p_01181_2_1_reg_984.read());
}

void disparityMap::thread_p_01181_2_2_16_fu_2676_p3() {
    p_01181_2_2_16_fu_2676_p3 = (!tmp_50_3_fu_2662_p2.read()[0].is_01())? sc_lv<2>(): ((tmp_50_3_fu_2662_p2.read()[0].to_bool())? ap_const_lv2_3: ap_phi_reg_pp1_iter0_p_01181_2_2_reg_1028.read());
}

void disparityMap::thread_p_01181_2_3_36_fu_4110_p3() {
    p_01181_2_3_36_fu_4110_p3 = (!tmp_50_11_reg_6060.read()[0].is_01())? sc_lv<4>(): ((tmp_50_11_reg_6060.read()[0].to_bool())? ap_const_lv4_C: ap_phi_reg_pp1_iter1_p_01181_2_10_reg_1419.read());
}

void disparityMap::thread_p_01181_2_3_cast_18_fu_2838_p3() {
    p_01181_2_3_cast_18_fu_2838_p3 = (!tmp_50_4_fu_2824_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_50_4_fu_2824_p2.read()[0].to_bool())? ap_const_lv3_4: p_01181_2_3_cast_fu_2787_p1.read());
}

void disparityMap::thread_p_01181_2_3_cast_fu_2787_p1() {
    p_01181_2_3_cast_fu_2787_p1 = esl_zext<3,2>(ap_phi_reg_pp1_iter0_p_01181_2_3_reg_1071.read());
}

void disparityMap::thread_p_01181_2_4_20_fu_2984_p3() {
    p_01181_2_4_20_fu_2984_p3 = (!tmp_50_5_fu_2970_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_50_5_fu_2970_p2.read()[0].to_bool())? ap_const_lv3_5: ap_phi_reg_pp1_iter0_p_01181_2_4_reg_1114.read());
}

void disparityMap::thread_p_01181_2_5_22_fu_3142_p3() {
    p_01181_2_5_22_fu_3142_p3 = (!tmp_50_6_fu_3128_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_50_6_fu_3128_p2.read()[0].to_bool())? ap_const_lv3_6: ap_phi_reg_pp1_iter0_p_01181_2_5_reg_1157.read());
}

void disparityMap::thread_p_01181_2_6_24_fu_3322_p3() {
    p_01181_2_6_24_fu_3322_p3 = (!tmp_50_7_reg_5804.read()[0].is_01())? sc_lv<3>(): ((tmp_50_7_reg_5804.read()[0].to_bool())? ap_const_lv3_7: ap_phi_reg_pp1_iter0_p_01181_2_6_reg_1201.read());
}

void disparityMap::thread_p_01181_2_7_38_fu_4262_p3() {
    p_01181_2_7_38_fu_4262_p3 = (!tmp_50_12_fu_4248_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_50_12_fu_4248_p2.read()[0].to_bool())? ap_const_lv4_D: ap_phi_reg_pp1_iter1_p_01181_2_11_reg_1463.read());
}

void disparityMap::thread_p_01181_2_7_cast_26_fu_3483_p3() {
    p_01181_2_7_cast_26_fu_3483_p3 = (!tmp_50_8_fu_3469_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_50_8_fu_3469_p2.read()[0].to_bool())? ap_const_lv4_8: p_01181_2_7_cast_fu_3462_p1.read());
}

void disparityMap::thread_p_01181_2_7_cast_fu_3462_p1() {
    p_01181_2_7_cast_fu_3462_p1 = esl_zext<4,3>(ap_phi_reg_pp1_iter0_p_01181_2_7_reg_1245.read());
}

void disparityMap::thread_p_01181_2_8_28_fu_3641_p3() {
    p_01181_2_8_28_fu_3641_p3 = (!tmp_50_9_fu_3627_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_50_9_fu_3627_p2.read()[0].to_bool())? ap_const_lv4_9: ap_phi_reg_pp1_iter1_p_01181_2_8_reg_1288.read());
}

void disparityMap::thread_p_01181_2_9_32_fu_3787_p3() {
    p_01181_2_9_32_fu_3787_p3 = (!tmp_50_s_fu_3773_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_50_s_fu_3773_p2.read()[0].to_bool())? ap_const_lv4_A: ap_phi_reg_pp1_iter1_p_01181_2_9_reg_1331.read());
}

void disparityMap::thread_p_01181_2_s_43_fu_4521_p3() {
    p_01181_2_s_43_fu_4521_p3 = (!tmp_50_14_fu_4515_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_50_14_fu_4515_p2.read()[0].to_bool())? ap_const_lv4_F: ap_phi_reg_pp1_iter1_p_01181_2_13_reg_1549.read());
}

void disparityMap::thread_p_7_10_cast_fu_3878_p1() {
    p_7_10_cast_fu_3878_p1 = esl_zext<9,8>(p_Result_17_fu_3868_p4.read());
}

void disparityMap::thread_p_7_11_cast_fu_4036_p1() {
    p_7_11_cast_fu_4036_p1 = esl_zext<9,8>(p_Result_18_fu_4026_p4.read());
}

void disparityMap::thread_p_7_12_cast_fu_4180_p1() {
    p_7_12_cast_fu_4180_p1 = esl_zext<9,8>(p_Result_19_fu_4170_p4.read());
}

void disparityMap::thread_p_7_13_cast_fu_4333_p1() {
    p_7_13_cast_fu_4333_p1 = esl_zext<9,8>(p_Result_14_fu_4323_p4.read());
}

void disparityMap::thread_p_7_14_cast_fu_4482_p1() {
    p_7_14_cast_fu_4482_p1 = esl_zext<9,8>(p_Result_15_fu_4473_p4.read());
}

void disparityMap::thread_p_7_1_cast_fu_2269_p1() {
    p_7_1_cast_fu_2269_p1 = esl_zext<9,8>(p_Result_13_fu_2259_p4.read());
}

void disparityMap::thread_p_7_2_cast_fu_2429_p1() {
    p_7_2_cast_fu_2429_p1 = esl_zext<9,8>(p_Result_2_fu_2419_p4.read());
}

void disparityMap::thread_p_7_3_cast_fu_2589_p1() {
    p_7_3_cast_fu_2589_p1 = esl_zext<9,8>(p_Result_3_fu_2579_p4.read());
}

void disparityMap::thread_p_7_4_cast_fu_2747_p1() {
    p_7_4_cast_fu_2747_p1 = esl_zext<9,8>(p_Result_4_fu_2737_p4.read());
}

void disparityMap::thread_p_7_5_cast_fu_2920_p1() {
    p_7_5_cast_fu_2920_p1 = esl_zext<9,8>(p_Result_5_fu_2911_p4.read());
}

void disparityMap::thread_p_7_6_cast_fu_3078_p1() {
    p_7_6_cast_fu_3078_p1 = esl_zext<9,8>(p_Result_6_fu_3068_p4.read());
}

void disparityMap::thread_p_7_7_cast_fu_3236_p1() {
    p_7_7_cast_fu_3236_p1 = esl_zext<9,8>(p_Result_7_fu_3226_p4.read());
}

void disparityMap::thread_p_7_8_cast_fu_3392_p1() {
    p_7_8_cast_fu_3392_p1 = esl_zext<9,8>(p_Result_8_fu_3382_p4.read());
}

void disparityMap::thread_p_7_9_cast_fu_3554_p1() {
    p_7_9_cast_fu_3554_p1 = esl_zext<9,8>(p_Result_9_fu_3544_p4.read());
}

void disparityMap::thread_p_7_cast_30_fu_3723_p1() {
    p_7_cast_30_fu_3723_p1 = esl_zext<9,8>(p_Result_16_fu_3714_p4.read());
}

void disparityMap::thread_p_7_cast_fu_2160_p1() {
    p_7_cast_fu_2160_p1 = esl_zext<9,8>(p_Result_s_11_fu_2150_p4.read());
}

void disparityMap::thread_p_8_10_cast_fu_3914_p1() {
    p_8_10_cast_fu_3914_p1 = esl_zext<10,8>(p_Result_1_10_fu_3904_p4.read());
}

void disparityMap::thread_p_8_11_cast_fu_4072_p1() {
    p_8_11_cast_fu_4072_p1 = esl_zext<10,8>(p_Result_1_11_fu_4062_p4.read());
}

void disparityMap::thread_p_8_12_cast_fu_4216_p1() {
    p_8_12_cast_fu_4216_p1 = esl_zext<10,8>(p_Result_1_12_fu_4206_p4.read());
}

void disparityMap::thread_p_8_13_cast_fu_4369_p1() {
    p_8_13_cast_fu_4369_p1 = esl_zext<10,8>(p_Result_1_13_fu_4359_p4.read());
}

void disparityMap::thread_p_8_14_cast_fu_4502_p1() {
    p_8_14_cast_fu_4502_p1 = esl_zext<10,8>(p_Result_1_14_reg_6164.read());
}

void disparityMap::thread_p_8_1_cast_fu_2305_p1() {
    p_8_1_cast_fu_2305_p1 = esl_zext<10,8>(p_Result_1_1_fu_2295_p4.read());
}

void disparityMap::thread_p_8_2_cast_fu_2465_p1() {
    p_8_2_cast_fu_2465_p1 = esl_zext<10,8>(p_Result_1_2_fu_2455_p4.read());
}

void disparityMap::thread_p_8_3_cast_fu_2625_p1() {
    p_8_3_cast_fu_2625_p1 = esl_zext<10,8>(p_Result_1_3_fu_2615_p4.read());
}

void disparityMap::thread_p_8_4_cast_fu_2810_p1() {
    p_8_4_cast_fu_2810_p1 = esl_zext<10,8>(p_Result_1_4_fu_2800_p4.read());
}

void disparityMap::thread_p_8_5_cast_fu_2956_p1() {
    p_8_5_cast_fu_2956_p1 = esl_zext<10,8>(p_Result_1_5_fu_2946_p4.read());
}

void disparityMap::thread_p_8_6_cast_fu_3114_p1() {
    p_8_6_cast_fu_3114_p1 = esl_zext<10,8>(p_Result_1_6_fu_3104_p4.read());
}

void disparityMap::thread_p_8_7_cast_fu_3272_p1() {
    p_8_7_cast_fu_3272_p1 = esl_zext<10,8>(p_Result_1_7_fu_3262_p4.read());
}

void disparityMap::thread_p_8_8_cast_fu_3428_p1() {
    p_8_8_cast_fu_3428_p1 = esl_zext<10,8>(p_Result_1_8_fu_3418_p4.read());
}

void disparityMap::thread_p_8_9_cast_fu_3613_p1() {
    p_8_9_cast_fu_3613_p1 = esl_zext<10,8>(p_Result_1_9_fu_3603_p4.read());
}

void disparityMap::thread_p_8_cast_31_fu_3759_p1() {
    p_8_cast_31_fu_3759_p1 = esl_zext<10,8>(p_Result_1_s_fu_3749_p4.read());
}

void disparityMap::thread_p_8_cast_fu_2196_p1() {
    p_8_cast_fu_2196_p1 = esl_zext<10,8>(p_Result_11_fu_2186_p4.read());
}

void disparityMap::thread_p_Result_11_fu_2186_p4() {
    p_Result_11_fu_2186_p4 = p_Val2_6_fu_2180_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_13_fu_2259_p4() {
    p_Result_13_fu_2259_p4 = p_Val2_5_1_fu_2253_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_14_fu_4323_p4() {
    p_Result_14_fu_4323_p4 = p_Val2_5_13_fu_4316_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_15_fu_4473_p4() {
    p_Result_15_fu_4473_p4 = p_Val2_5_14_reg_6153.read().range(17, 10);
}

void disparityMap::thread_p_Result_16_fu_3714_p4() {
    p_Result_16_fu_3714_p4 = p_Val2_5_s_reg_5947.read().range(17, 10);
}

void disparityMap::thread_p_Result_17_fu_3868_p4() {
    p_Result_17_fu_3868_p4 = p_Val2_5_10_fu_3861_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_18_fu_4026_p4() {
    p_Result_18_fu_4026_p4 = p_Val2_5_11_fu_4019_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_19_fu_4170_p4() {
    p_Result_19_fu_4170_p4 = p_Val2_5_12_fu_4163_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_10_fu_3904_p4() {
    p_Result_1_10_fu_3904_p4 = p_Val2_6_10_fu_3898_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_11_fu_4062_p4() {
    p_Result_1_11_fu_4062_p4 = p_Val2_6_11_fu_4056_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_12_fu_4206_p4() {
    p_Result_1_12_fu_4206_p4 = p_Val2_6_12_fu_4200_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_13_fu_4359_p4() {
    p_Result_1_13_fu_4359_p4 = p_Val2_6_13_fu_4352_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_1_fu_2295_p4() {
    p_Result_1_1_fu_2295_p4 = p_Val2_6_1_fu_2289_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_2_fu_2455_p4() {
    p_Result_1_2_fu_2455_p4 = p_Val2_6_2_fu_2449_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_3_fu_2615_p4() {
    p_Result_1_3_fu_2615_p4 = p_Val2_6_3_fu_2609_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_4_fu_2800_p4() {
    p_Result_1_4_fu_2800_p4 = p_Val2_6_4_fu_2794_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_5_fu_2946_p4() {
    p_Result_1_5_fu_2946_p4 = p_Val2_6_5_fu_2940_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_6_fu_3104_p4() {
    p_Result_1_6_fu_3104_p4 = p_Val2_6_6_fu_3098_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_7_fu_3262_p4() {
    p_Result_1_7_fu_3262_p4 = p_Val2_6_7_fu_3256_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_8_fu_3418_p4() {
    p_Result_1_8_fu_3418_p4 = p_Val2_6_8_fu_3412_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_9_fu_3603_p4() {
    p_Result_1_9_fu_3603_p4 = p_Val2_6_9_fu_3597_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_1_s_fu_3749_p4() {
    p_Result_1_s_fu_3749_p4 = p_Val2_6_s_fu_3743_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_20_fu_4708_p5() {
    p_Result_20_fu_4708_p5 = esl_concat<24,8>(esl_concat<16,8>(esl_concat<8,8>(dMap_V_q0.read(), dMap_V_q1.read()), dMap_V_load_1_reg_6233.read()), dMap_V_load_reg_6228.read());
}

void disparityMap::thread_p_Result_2_fu_2419_p4() {
    p_Result_2_fu_2419_p4 = p_Val2_5_2_fu_2412_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_3_fu_2579_p4() {
    p_Result_3_fu_2579_p4 = p_Val2_5_3_fu_2572_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_4_fu_2737_p4() {
    p_Result_4_fu_2737_p4 = p_Val2_5_4_fu_2730_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_5_fu_2911_p4() {
    p_Result_5_fu_2911_p4 = p_Val2_5_5_reg_5686.read().range(17, 10);
}

void disparityMap::thread_p_Result_6_fu_3068_p4() {
    p_Result_6_fu_3068_p4 = p_Val2_5_6_fu_3061_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_7_fu_3226_p4() {
    p_Result_7_fu_3226_p4 = p_Val2_5_7_fu_3219_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_8_fu_3382_p4() {
    p_Result_8_fu_3382_p4 = p_Val2_5_8_fu_3375_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_9_fu_3544_p4() {
    p_Result_9_fu_3544_p4 = p_Val2_5_9_fu_3537_p3.read().range(17, 10);
}

void disparityMap::thread_p_Result_s_11_fu_2150_p4() {
    p_Result_s_11_fu_2150_p4 = p_Val2_5_fu_2144_p3.read().range(17, 10);
}

void disparityMap::thread_p_Val2_5_10_fu_3861_p3() {
    p_Val2_5_10_fu_3861_p3 = (!or_cond_fu_3856_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond_fu_3856_p2.read()[0].to_bool())? cost_d_right_V_10_reg_5858.read(): ap_phi_reg_pp1_iter1_p_0943_4_s_reg_1353.read());
}

void disparityMap::thread_p_Val2_5_11_fu_4019_p3() {
    p_Val2_5_11_fu_4019_p3 = (!or_cond10_fu_4014_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond10_fu_4014_p2.read()[0].to_bool())? cost_d_right_V_11_reg_5902.read(): ap_phi_mux_p_0943_4_10_phi_fu_1400_p4.read());
}

void disparityMap::thread_p_Val2_5_12_fu_4163_p3() {
    p_Val2_5_12_fu_4163_p3 = (!or_cond11_fu_4158_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond11_fu_4158_p2.read()[0].to_bool())? cost_d_right_V_12_reg_5957.read(): ap_phi_mux_p_0943_4_11_phi_fu_1444_p4.read());
}

void disparityMap::thread_p_Val2_5_13_fu_4316_p3() {
    p_Val2_5_13_fu_4316_p3 = (!or_cond12_fu_4311_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond12_fu_4311_p2.read()[0].to_bool())? cost_d_right_V_13_reg_5991.read(): ap_phi_mux_p_0943_4_12_phi_fu_1477_p4.read());
}

void disparityMap::thread_p_Val2_5_14_fu_4441_p3() {
    p_Val2_5_14_fu_4441_p3 = (!or_cond13_fu_4436_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond13_fu_4436_p2.read()[0].to_bool())? cost_d_right_V_14_reg_6035.read(): ap_phi_mux_p_0943_4_13_phi_fu_1531_p4.read());
}

void disparityMap::thread_p_Val2_5_1_fu_2253_p3() {
    p_Val2_5_1_fu_2253_p3 = (!tmp_39_reg_5299.read()[0].is_01())? sc_lv<18>(): ((tmp_39_reg_5299.read()[0].to_bool())? ap_phi_reg_pp1_iter0_p_0943_4_reg_928.read(): cost_d_right_V_1_reg_5362.read());
}

void disparityMap::thread_p_Val2_5_2_fu_2412_p3() {
    p_Val2_5_2_fu_2412_p3 = (!or_cond1_fu_2407_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond1_fu_2407_p2.read()[0].to_bool())? cost_d_right_V_2_reg_5439.read(): ap_phi_mux_p_0943_4_1_phi_fu_965_p4.read());
}

void disparityMap::thread_p_Val2_5_3_fu_2572_p3() {
    p_Val2_5_3_fu_2572_p3 = (!or_cond2_fu_2567_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond2_fu_2567_p2.read()[0].to_bool())? cost_d_right_V_3_reg_5493.read(): ap_phi_mux_p_0943_4_2_phi_fu_1009_p4.read());
}

void disparityMap::thread_p_Val2_5_4_fu_2730_p3() {
    p_Val2_5_4_fu_2730_p3 = (!or_cond3_fu_2725_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond3_fu_2725_p2.read()[0].to_bool())? cost_d_right_V_4_reg_5538.read(): ap_phi_mux_p_0943_4_3_phi_fu_1041_p4.read());
}

void disparityMap::thread_p_Val2_5_5_fu_2880_p3() {
    p_Val2_5_5_fu_2880_p3 = (!or_cond4_fu_2875_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond4_fu_2875_p2.read()[0].to_bool())? cost_d_right_V_5_reg_5592.read(): ap_phi_mux_p_0943_4_4_phi_fu_1084_p4.read());
}

void disparityMap::thread_p_Val2_5_6_fu_3061_p3() {
    p_Val2_5_6_fu_3061_p3 = (!or_cond5_fu_3056_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond5_fu_3056_p2.read()[0].to_bool())? cost_d_right_V_6_reg_5636.read(): ap_phi_reg_pp1_iter0_p_0943_4_5_reg_1135.read());
}

void disparityMap::thread_p_Val2_5_7_fu_3219_p3() {
    p_Val2_5_7_fu_3219_p3 = (!or_cond6_fu_3214_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond6_fu_3214_p2.read()[0].to_bool())? cost_d_right_V_7_reg_5696.read(): ap_phi_mux_p_0943_4_6_phi_fu_1182_p4.read());
}

void disparityMap::thread_p_Val2_5_8_fu_3375_p3() {
    p_Val2_5_8_fu_3375_p3 = (!or_cond7_fu_3370_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond7_fu_3370_p2.read()[0].to_bool())? cost_d_right_V_8_reg_5730.read(): ap_phi_mux_p_0943_4_7_phi_fu_1226_p4.read());
}

void disparityMap::thread_p_Val2_5_9_fu_3537_p3() {
    p_Val2_5_9_fu_3537_p3 = (!or_cond8_fu_3532_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond8_fu_3532_p2.read()[0].to_bool())? cost_d_right_V_9_reg_5774.read(): ap_phi_mux_p_0943_4_8_phi_fu_1258_p4.read());
}

void disparityMap::thread_p_Val2_5_fu_2144_p3() {
    p_Val2_5_fu_2144_p3 = (!tmp_23_reg_5269.read()[0].is_01())? sc_lv<18>(): ((tmp_23_reg_5269.read()[0].to_bool())? cost_d_right_V_reg_5357.read(): ap_phi_mux_p_0943_1_phi_fu_909_p4.read());
}

void disparityMap::thread_p_Val2_5_s_fu_3683_p3() {
    p_Val2_5_s_fu_3683_p3 = (!or_cond9_fu_3678_p2.read()[0].is_01())? sc_lv<18>(): ((or_cond9_fu_3678_p2.read()[0].to_bool())? cost_d_right_V_s_reg_5814.read(): ap_phi_mux_p_0943_4_9_phi_fu_1301_p4.read());
}

void disparityMap::thread_p_Val2_6_10_fu_3898_p3() {
    p_Val2_6_10_fu_3898_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_10_reg_5863.read(): ap_phi_reg_pp1_iter1_p_01027_4_s_reg_1342.read());
}

void disparityMap::thread_p_Val2_6_11_fu_4056_p3() {
    p_Val2_6_11_fu_4056_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_11_reg_5907.read(): ap_phi_mux_p_01027_4_10_phi_fu_1389_p4.read());
}

void disparityMap::thread_p_Val2_6_12_fu_4200_p3() {
    p_Val2_6_12_fu_4200_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_12_reg_5962.read(): ap_phi_mux_p_01027_4_11_phi_fu_1433_p4.read());
}

void disparityMap::thread_p_Val2_6_13_fu_4352_p3() {
    p_Val2_6_13_fu_4352_p3 = (!sel_tmp_reg_5314_pp1_iter1_reg.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314_pp1_iter1_reg.read()[0].to_bool())? cost_d_diagonal_V_13_reg_6026.read(): ap_phi_reg_pp1_iter1_p_01027_4_12_reg_1485.read());
}

void disparityMap::thread_p_Val2_6_14_fu_4448_p3() {
    p_Val2_6_14_fu_4448_p3 = (!sel_tmp_reg_5314_pp1_iter1_reg.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314_pp1_iter1_reg.read()[0].to_bool())? cost_d_diagonal_V_14_reg_6066.read(): ap_phi_mux_p_01027_4_13_phi_fu_1520_p4.read());
}

void disparityMap::thread_p_Val2_6_1_fu_2289_p3() {
    p_Val2_6_1_fu_2289_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_1_reg_5400.read(): ap_phi_reg_pp1_iter0_p_01027_4_reg_917.read());
}

void disparityMap::thread_p_Val2_6_2_fu_2449_p3() {
    p_Val2_6_2_fu_2449_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_2_reg_5444.read(): ap_phi_mux_p_01027_4_1_phi_fu_954_p4.read());
}

void disparityMap::thread_p_Val2_6_3_fu_2609_p3() {
    p_Val2_6_3_fu_2609_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_3_reg_5498.read(): ap_phi_mux_p_01027_4_2_phi_fu_998_p4.read());
}

void disparityMap::thread_p_Val2_6_4_fu_2794_p3() {
    p_Val2_6_4_fu_2794_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_4_reg_5543.read(): ap_phi_reg_pp1_iter0_p_01027_4_3_reg_1049.read());
}

void disparityMap::thread_p_Val2_6_5_fu_2940_p3() {
    p_Val2_6_5_fu_2940_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_5_reg_5597.read(): ap_phi_reg_pp1_iter0_p_01027_4_4_reg_1092.read());
}

void disparityMap::thread_p_Val2_6_6_fu_3098_p3() {
    p_Val2_6_6_fu_3098_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_6_reg_5641.read(): ap_phi_reg_pp1_iter0_p_01027_4_5_reg_1124.read());
}

void disparityMap::thread_p_Val2_6_7_fu_3256_p3() {
    p_Val2_6_7_fu_3256_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_7_reg_5701.read(): ap_phi_mux_p_01027_4_6_phi_fu_1171_p4.read());
}

void disparityMap::thread_p_Val2_6_8_fu_3412_p3() {
    p_Val2_6_8_fu_3412_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_8_reg_5735.read(): ap_phi_mux_p_01027_4_7_phi_fu_1215_p4.read());
}

void disparityMap::thread_p_Val2_6_9_fu_3597_p3() {
    p_Val2_6_9_fu_3597_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_9_reg_5779.read(): ap_phi_reg_pp1_iter1_p_01027_4_8_reg_1266.read());
}

void disparityMap::thread_p_Val2_6_fu_2180_p3() {
    p_Val2_6_fu_2180_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_reg_5395.read(): ap_phi_mux_p_01027_1_phi_fu_897_p4.read());
}

void disparityMap::thread_p_Val2_6_s_fu_3743_p3() {
    p_Val2_6_s_fu_3743_p3 = (!sel_tmp_reg_5314.read()[0].is_01())? sc_lv<18>(): ((sel_tmp_reg_5314.read()[0].to_bool())? cost_d_diagonal_V_s_reg_5819.read(): ap_phi_reg_pp1_iter1_p_01027_4_9_reg_1309.read());
}

void disparityMap::thread_p_lshr_f_fu_4607_p4() {
    p_lshr_f_fu_4607_p4 = packets_fu_1771_p2.read().range(31, 1);
}

void disparityMap::thread_p_lshr_fu_4587_p4() {
    p_lshr_fu_4587_p4 = p_neg_fu_4582_p2.read().range(31, 1);
}

void disparityMap::thread_p_neg_fu_4582_p2() {
    p_neg_fu_4582_p2 = (!ap_const_lv32_0.is_01() || !packets_fu_1771_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_0) - sc_biguint<32>(packets_fu_1771_p2.read()));
}

void disparityMap::thread_p_neg_t_fu_4601_p2() {
    p_neg_t_fu_4601_p2 = (!ap_const_lv32_0.is_01() || !tmp_28_fu_4597_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_0) - sc_biguint<32>(tmp_28_fu_4597_p1.read()));
}

void disparityMap::thread_p_shl_cast_cast_fu_4541_p1() {
    p_shl_cast_cast_fu_4541_p1 = esl_zext<13,12>(p_shl_fu_4533_p3.read());
}

void disparityMap::thread_p_shl_fu_4533_p3() {
    p_shl_fu_4533_p3 = esl_concat<4,8>(ap_phi_reg_pp1_iter1_p_01181_2_14_reg_1584.read(), ap_const_lv8_0);
}

void disparityMap::thread_packets_fu_1771_p0() {
    packets_fu_1771_p0 =  (sc_lv<31>) (packets_fu_1771_p00.read());
}

void disparityMap::thread_packets_fu_1771_p00() {
    packets_fu_1771_p00 = esl_zext<32,31>(col_packets_fu_1758_p4.read());
}

void disparityMap::thread_packets_fu_1771_p1() {
    packets_fu_1771_p1 = rows_V.read();
}

void disparityMap::thread_packets_fu_1771_p2() {
    packets_fu_1771_p2 = (!packets_fu_1771_p0.read().is_01() || !packets_fu_1771_p1.read().is_01())? sc_lv<32>(): sc_biguint<31>(packets_fu_1771_p0.read()) * sc_bigint<32>(packets_fu_1771_p1.read());
}

void disparityMap::thread_pixel_values_left_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage2.read(), ap_const_boolean_0))) {
            pixel_values_left_V_address0 =  (sc_lv<9>) (tmp_12_fu_1980_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
            pixel_values_left_V_address0 =  (sc_lv<9>) (tmp_25_fu_1937_p1.read());
        } else {
            pixel_values_left_V_address0 = "XXXXXXXXX";
        }
    } else {
        pixel_values_left_V_address0 = "XXXXXXXXX";
    }
}

void disparityMap::thread_pixel_values_left_V_address1() {
    pixel_values_left_V_address1 =  (sc_lv<9>) (tmp_27_fu_1957_p1.read());
}

void disparityMap::thread_pixel_values_left_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0)))) {
        pixel_values_left_V_ce0 = ap_const_logic_1;
    } else {
        pixel_values_left_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_pixel_values_left_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0))) {
        pixel_values_left_V_ce1 = ap_const_logic_1;
    } else {
        pixel_values_left_V_ce1 = ap_const_logic_0;
    }
}

void disparityMap::thread_pixel_values_left_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_4958.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage2_11001.read(), ap_const_boolean_0))) {
        pixel_values_left_V_we0 = ap_const_logic_1;
    } else {
        pixel_values_left_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_r8_cast_fu_4634_p1() {
    r8_cast_fu_4634_p1 = esl_zext<32,31>(r8_reg_1594.read());
}

void disparityMap::thread_r_1_fu_1785_p2() {
    r_1_fu_1785_p2 = (!r_reg_847.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(r_reg_847.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void disparityMap::thread_r_2_fu_4643_p2() {
    r_2_fu_4643_p2 = (!r8_reg_1594.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(r8_reg_1594.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void disparityMap::thread_r_cast_fu_1776_p1() {
    r_cast_fu_1776_p1 = esl_zext<32,31>(r_reg_847.read());
}

void disparityMap::thread_ret_V_1_cast_fu_4551_p1() {
    ret_V_1_cast_fu_4551_p1 = esl_sext<40,13>(ret_V_1_fu_4545_p2.read());
}

void disparityMap::thread_ret_V_1_fu_4545_p2() {
    ret_V_1_fu_4545_p2 = (!p_shl_cast_cast_fu_4541_p1.read().is_01() || !lhs_V_cast_fu_4529_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl_cast_cast_fu_4541_p1.read()) - sc_biguint<13>(lhs_V_cast_fu_4529_p1.read()));
}

void disparityMap::thread_ret_V_fu_1863_p2() {
    ret_V_fu_1863_p2 = (!ap_const_lv33_1FFFFFFFF.is_01() || !lhs_V_1_cast_fu_1860_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(ap_const_lv33_1FFFFFFFF) + sc_biguint<33>(lhs_V_1_cast_fu_1860_p1.read()));
}

void disparityMap::thread_ret_V_mid2_v_v_fu_1903_p3() {
    ret_V_mid2_v_v_fu_1903_p3 = (!exitcond_fu_1886_p2.read()[0].is_01())? sc_lv<32>(): ((exitcond_fu_1886_p2.read()[0].to_bool())? row3_fu_1891_p2.read(): ap_phi_mux_i_op_assign_phi_fu_874_p4.read());
}

void disparityMap::thread_rev10_fu_4008_p2() {
    rev10_fu_4008_p2 = (tmp_61_fu_4001_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rev11_fu_4152_p2() {
    rev11_fu_4152_p2 = (tmp_63_fu_4144_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rev12_fu_4305_p2() {
    rev12_fu_4305_p2 = (tmp_65_fu_4297_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rev13_fu_4430_p2() {
    rev13_fu_4430_p2 = (tmp_67_fu_4422_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rev1_fu_2561_p2() {
    rev1_fu_2561_p2 = (tmp_43_fu_2553_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rev2_fu_2719_p2() {
    rev2_fu_2719_p2 = (tmp_45_fu_2711_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rev3_fu_2869_p2() {
    rev3_fu_2869_p2 = (tmp_47_fu_2861_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rev4_fu_3050_p2() {
    rev4_fu_3050_p2 = (tmp_49_fu_3043_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rev5_fu_3208_p2() {
    rev5_fu_3208_p2 = (tmp_51_fu_3201_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rev6_fu_3364_p2() {
    rev6_fu_3364_p2 = (tmp_53_fu_3356_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rev7_fu_3526_p2() {
    rev7_fu_3526_p2 = (tmp_55_fu_3518_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rev8_fu_3672_p2() {
    rev8_fu_3672_p2 = (tmp_57_fu_3664_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rev9_fu_3850_p2() {
    rev9_fu_3850_p2 = (tmp_59_fu_3843_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rev_fu_2401_p2() {
    rev_fu_2401_p2 = (tmp_41_fu_2394_p3.read() ^ ap_const_lv1_1);
}

void disparityMap::thread_rightImage_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage1.read(), ap_const_boolean_0))) {
        rightImage_V_address0 =  (sc_lv<17>) (tmp_13_cast_fu_1926_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        rightImage_V_address0 =  (sc_lv<17>) (tmp_2_fu_1803_p1.read());
    } else {
        rightImage_V_address0 =  (sc_lv<17>) ("XXXXXXXXXXXXXXXXX");
    }
}

void disparityMap::thread_rightImage_V_address1() {
    rightImage_V_address1 =  (sc_lv<17>) (tmp_4_fu_1818_p1.read());
}

void disparityMap::thread_rightImage_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(INPUT_data_V_0_vld_out.read(), ap_const_logic_1)))) {
        rightImage_V_ce0 = ap_const_logic_1;
    } else {
        rightImage_V_ce0 = ap_const_logic_0;
    }
}

void disparityMap::thread_rightImage_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(INPUT_data_V_0_vld_out.read(), ap_const_logic_1))) {
        rightImage_V_ce1 = ap_const_logic_1;
    } else {
        rightImage_V_ce1 = ap_const_logic_0;
    }
}

void disparityMap::thread_rightImage_V_d0() {
    rightImage_V_d0 = INPUT_data_V_0_data_out.read().range(23, 16);
}

void disparityMap::thread_rightImage_V_d1() {
    rightImage_V_d1 = INPUT_data_V_0_data_out.read().range(31, 24);
}

void disparityMap::thread_rightImage_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(INPUT_data_V_0_vld_out.read(), ap_const_logic_1))) {
        rightImage_V_we0 = ap_const_logic_1;
    } else {
        rightImage_V_we0 = ap_const_logic_0;
    }
}

void disparityMap::thread_rightImage_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(INPUT_data_V_0_vld_out.read(), ap_const_logic_1))) {
        rightImage_V_we1 = ap_const_logic_1;
    } else {
        rightImage_V_we1 = ap_const_logic_0;
    }
}

void disparityMap::thread_row3_fu_1891_p2() {
    row3_fu_1891_p2 = (!ap_const_lv32_1.is_01() || !ap_phi_mux_i_op_assign_phi_fu_874_p4.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(ap_phi_mux_i_op_assign_phi_fu_874_p4.read()));
}

void disparityMap::thread_sel_tmp_fu_2062_p2() {
    sel_tmp_fu_2062_p2 = (tmp_9_mid2_fu_2050_p3.read() & tmp_26_reg_5030.read());
}

void disparityMap::thread_tmp_11_fu_4653_p3() {
    tmp_11_fu_4653_p3 = esl_concat<30,2>(tmp_38_fu_4649_p1.read(), ap_const_lv2_0);
}

void disparityMap::thread_tmp_12_fu_1980_p1() {
    tmp_12_fu_1980_p1 = esl_sext<64,32>(i_op_assign_2_mid2_reg_4988.read());
}

void disparityMap::thread_tmp_13_cast_fu_1926_p1() {
    tmp_13_cast_fu_1926_p1 = esl_zext<64,18>(grp_fu_4719_p3.read());
}

void disparityMap::thread_tmp_14_fu_4661_p1() {
    tmp_14_fu_4661_p1 = esl_sext<64,32>(tmp_11_fu_4653_p3.read());
}

void disparityMap::thread_tmp_15_fu_4666_p2() {
    tmp_15_fu_4666_p2 = (tmp_11_fu_4653_p3.read() | ap_const_lv32_1);
}

void disparityMap::thread_tmp_16_fu_4672_p1() {
    tmp_16_fu_4672_p1 = esl_sext<64,32>(tmp_15_fu_4666_p2.read());
}

void disparityMap::thread_tmp_17_fu_4688_p2() {
    tmp_17_fu_4688_p2 = (tmp_11_reg_6202.read() | ap_const_lv32_2);
}

void disparityMap::thread_tmp_18_fu_4693_p1() {
    tmp_18_fu_4693_p1 = esl_sext<64,32>(tmp_17_fu_4688_p2.read());
}

void disparityMap::thread_tmp_19_fu_4698_p2() {
    tmp_19_fu_4698_p2 = (tmp_11_reg_6202.read() | ap_const_lv32_3);
}

void disparityMap::thread_tmp_1_fu_1791_p3() {
    tmp_1_fu_1791_p3 = esl_concat<31,1>(r_reg_847.read(), ap_const_lv1_0);
}

void disparityMap::thread_tmp_20_fu_4703_p1() {
    tmp_20_fu_4703_p1 = esl_sext<64,32>(tmp_19_fu_4698_p2.read());
}

void disparityMap::thread_tmp_21_fu_4677_p2() {
    tmp_21_fu_4677_p2 = (!r8_reg_1594.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): sc_lv<1>(r8_reg_1594.read() == ap_const_lv31_0);
}

void disparityMap::thread_tmp_22_fu_4683_p2() {
    tmp_22_fu_4683_p2 = (!r8_cast_fu_4634_p1.read().is_01() || !tmp_5_fu_4628_p2.read().is_01())? sc_lv<1>(): sc_lv<1>(r8_cast_fu_4634_p1.read() == tmp_5_fu_4628_p2.read());
}

void disparityMap::thread_tmp_23_fu_2009_p2() {
    tmp_23_fu_2009_p2 = (!i_op_assign_2_mid2_reg_4988.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void disparityMap::thread_tmp_24_fu_1931_p2() {
    tmp_24_fu_1931_p2 = (!ap_const_lv32_FFFFFFFF.is_01() || !i_op_assign_2_mid2_fu_1915_p3.read().is_01())? sc_lv<32>(): (sc_bigint<32>(ap_const_lv32_FFFFFFFF) + sc_bigint<32>(i_op_assign_2_mid2_fu_1915_p3.read()));
}

void disparityMap::thread_tmp_25_fu_1937_p1() {
    tmp_25_fu_1937_p1 = esl_zext<64,32>(tmp_24_fu_1931_p2.read());
}

void disparityMap::thread_tmp_26_fu_1946_p2() {
    tmp_26_fu_1946_p2 = (!tmp_27_cast_fu_1942_p1.read().is_01() || !ret_V_fu_1863_p2.read().is_01())? sc_lv<1>(): (sc_bigint<33>(tmp_27_cast_fu_1942_p1.read()) < sc_bigint<33>(ret_V_fu_1863_p2.read()));
}

void disparityMap::thread_tmp_27_cast_fu_1942_p1() {
    tmp_27_cast_fu_1942_p1 = esl_sext<33,32>(i_op_assign_2_mid2_fu_1915_p3.read());
}

void disparityMap::thread_tmp_27_fu_1957_p1() {
    tmp_27_fu_1957_p1 = esl_sext<64,32>(col_fu_1951_p2.read());
}

void disparityMap::thread_tmp_28_fu_4597_p1() {
    tmp_28_fu_4597_p1 = esl_zext<32,31>(p_lshr_fu_4587_p4.read());
}

void disparityMap::thread_tmp_29_fu_2083_p1() {
    tmp_29_fu_2083_p1 = esl_zext<18,10>(mu_right_V_1_fu_2056_p3.read());
}

void disparityMap::thread_tmp_2_fu_1803_p1() {
    tmp_2_fu_1803_p1 = esl_sext<64,32>(tmp_1_reg_4925.read());
}

void disparityMap::thread_tmp_30_fu_2105_p1() {
    tmp_30_fu_2105_p1 = esl_zext<18,10>(mu_diagonal_V_2_reg_5334.read());
}

void disparityMap::thread_tmp_32_fu_4575_p3() {
    tmp_32_fu_4575_p3 = packets_fu_1771_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_33_fu_4616_p1() {
    tmp_33_fu_4616_p1 = esl_zext<32,31>(p_lshr_f_fu_4607_p4.read());
}

void disparityMap::thread_tmp_34_fu_1897_p2() {
    tmp_34_fu_1897_p2 = (!ap_phi_mux_i_op_assign_phi_fu_874_p4.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(ap_phi_mux_i_op_assign_phi_fu_874_p4.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void disparityMap::thread_tmp_35_fu_1911_p1() {
    tmp_35_fu_1911_p1 = ret_V_mid2_v_v_fu_1903_p3.read().range(18-1, 0);
}

void disparityMap::thread_tmp_36_i_i10_fu_3334_p2() {
    tmp_36_i_i10_fu_3334_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_7.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(pixel_values_right_V_7.read()));
}

void disparityMap::thread_tmp_36_i_i11_fu_3496_p2() {
    tmp_36_i_i11_fu_3496_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_8.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(pixel_values_right_V_8.read()));
}

void disparityMap::thread_tmp_36_i_i12_fu_3654_p2() {
    tmp_36_i_i12_fu_3654_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_9.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(pixel_values_right_V_9.read()));
}

void disparityMap::thread_tmp_36_i_i13_fu_3821_p2() {
    tmp_36_i_i13_fu_3821_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_10.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(pixel_values_right_V_10.read()));
}

void disparityMap::thread_tmp_36_i_i14_fu_3979_p2() {
    tmp_36_i_i14_fu_3979_p2 = (!leftImage_V_load_reg_5129_pp1_iter1_reg.read().is_01() || !pixel_values_right_V_11.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129_pp1_iter1_reg.read()) - sc_biguint<8>(pixel_values_right_V_11.read()));
}

void disparityMap::thread_tmp_36_i_i15_fu_4122_p2() {
    tmp_36_i_i15_fu_4122_p2 = (!leftImage_V_load_reg_5129_pp1_iter1_reg.read().is_01() || !pixel_values_right_V_12.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129_pp1_iter1_reg.read()) - sc_biguint<8>(pixel_values_right_V_12.read()));
}

void disparityMap::thread_tmp_36_i_i16_fu_4275_p2() {
    tmp_36_i_i16_fu_4275_p2 = (!leftImage_V_load_reg_5129_pp1_iter1_reg.read().is_01() || !pixel_values_right_V_13.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129_pp1_iter1_reg.read()) - sc_biguint<8>(pixel_values_right_V_13.read()));
}

void disparityMap::thread_tmp_36_i_i17_fu_4409_p2() {
    tmp_36_i_i17_fu_4409_p2 = (!leftImage_V_load_reg_5129_pp1_iter1_reg.read().is_01() || !pixel_values_right_V_15_reg_6101.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129_pp1_iter1_reg.read()) - sc_biguint<8>(pixel_values_right_V_15_reg_6101.read()));
}

void disparityMap::thread_tmp_36_i_i1_fu_2018_p2() {
    tmp_36_i_i1_fu_2018_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_left_V_4_reg_5202.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(pixel_values_left_V_4_reg_5202.read()));
}

void disparityMap::thread_tmp_36_i_i2_fu_2124_p2() {
    tmp_36_i_i2_fu_2124_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !rightImage_V_load_reg_5187.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(rightImage_V_load_reg_5187.read()));
}

void disparityMap::thread_tmp_36_i_i3_fu_2231_p2() {
    tmp_36_i_i3_fu_2231_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(pixel_values_right_V.read()));
}

void disparityMap::thread_tmp_36_i_i4_fu_2372_p2() {
    tmp_36_i_i4_fu_2372_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(pixel_values_right_V_1.read()));
}

void disparityMap::thread_tmp_36_i_i5_fu_2531_p2() {
    tmp_36_i_i5_fu_2531_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(pixel_values_right_V_2.read()));
}

void disparityMap::thread_tmp_36_i_i6_fu_2689_p2() {
    tmp_36_i_i6_fu_2689_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_3.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(pixel_values_right_V_3.read()));
}

void disparityMap::thread_tmp_36_i_i7_fu_2851_p2() {
    tmp_36_i_i7_fu_2851_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(pixel_values_right_V_4.read()));
}

void disparityMap::thread_tmp_36_i_i8_fu_3021_p2() {
    tmp_36_i_i8_fu_3021_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_5.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(pixel_values_right_V_5.read()));
}

void disparityMap::thread_tmp_36_i_i9_fu_3179_p2() {
    tmp_36_i_i9_fu_3179_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_6.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(pixel_values_right_V_6.read()));
}

void disparityMap::thread_tmp_36_i_i_fu_1988_p2() {
    tmp_36_i_i_fu_1988_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_left_V_2_reg_5195.read().is_01())? sc_lv<8>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) - sc_biguint<8>(pixel_values_left_V_2_reg_5195.read()));
}

void disparityMap::thread_tmp_38_fu_4649_p1() {
    tmp_38_fu_4649_p1 = r8_reg_1594.read().range(30-1, 0);
}

void disparityMap::thread_tmp_3_fu_1813_p2() {
    tmp_3_fu_1813_p2 = (tmp_1_reg_4925.read() | ap_const_lv32_1);
}

void disparityMap::thread_tmp_41_3_fu_2341_p2() {
    tmp_41_3_fu_2341_p2 = (!i_op_assign_2_mid2_reg_4988.read().is_01() || !ap_const_lv32_FFFFFFFD.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFD));
}

void disparityMap::thread_tmp_41_fu_2394_p3() {
    tmp_41_fu_2394_p3 = tmp_44_2_reg_5484.read().range(31, 31);
}

void disparityMap::thread_tmp_42_fu_2346_p3() {
    tmp_42_fu_2346_p3 = tmp_41_3_fu_2341_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_43_fu_2553_p3() {
    tmp_43_fu_2553_p3 = grp_fu_1638_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_44_14_fu_4417_p2() {
    tmp_44_14_fu_4417_p2 = (!i_op_assign_2_mid2_reg_4988_pp1_iter1_reg.read().is_01() || !ap_const_lv32_FFFFFFF0.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988_pp1_iter1_reg.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFF0));
}

void disparityMap::thread_tmp_44_2_fu_2333_p2() {
    tmp_44_2_fu_2333_p2 = (!i_op_assign_2_mid2_reg_4988.read().is_01() || !ap_const_lv32_FFFFFFFD.is_01())? sc_lv<32>(): (sc_bigint<32>(i_op_assign_2_mid2_reg_4988.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFD));
}

void disparityMap::thread_tmp_44_fu_2488_p3() {
    tmp_44_fu_2488_p3 = grp_fu_1638_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_45_fu_2711_p3() {
    tmp_45_fu_2711_p3 = grp_fu_1648_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_46_fu_2638_p3() {
    tmp_46_fu_2638_p3 = grp_fu_1648_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_47_fu_2861_p3() {
    tmp_47_fu_2861_p3 = grp_fu_1658_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_48_fu_2766_p3() {
    tmp_48_fu_2766_p3 = grp_fu_1658_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_49_fu_3043_p3() {
    tmp_49_fu_3043_p3 = tmp_44_6_reg_5721.read().range(31, 31);
}

void disparityMap::thread_tmp_4_fu_1818_p1() {
    tmp_4_fu_1818_p1 = esl_sext<64,32>(tmp_3_fu_1813_p2.read());
}

void disparityMap::thread_tmp_50_10_fu_3928_p2() {
    tmp_50_10_fu_3928_p2 = (!cost_d_actual_V_2_10_1_fu_3924_p1.read().is_01() || !ap_phi_reg_pp1_iter1_p_01189_2_s_reg_1364.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_10_1_fu_3924_p1.read()) < sc_biguint<11>(ap_phi_reg_pp1_iter1_p_01189_2_s_reg_1364.read()));
}

void disparityMap::thread_tmp_50_11_fu_4086_p2() {
    tmp_50_11_fu_4086_p2 = (!cost_d_actual_V_2_11_1_fu_4082_p1.read().is_01() || !ap_phi_mux_p_01189_2_10_phi_fu_1411_p4.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_11_1_fu_4082_p1.read()) < sc_biguint<11>(ap_phi_mux_p_01189_2_10_phi_fu_1411_p4.read()));
}

void disparityMap::thread_tmp_50_12_fu_4248_p2() {
    tmp_50_12_fu_4248_p2 = (!cost_d_actual_V_2_12_1_fu_4245_p1.read().is_01() || !ap_phi_reg_pp1_iter1_p_01189_2_11_reg_1452.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_12_1_fu_4245_p1.read()) < sc_biguint<11>(ap_phi_reg_pp1_iter1_p_01189_2_11_reg_1452.read()));
}

void disparityMap::thread_tmp_50_13_fu_4383_p2() {
    tmp_50_13_fu_4383_p2 = (!cost_d_actual_V_2_13_1_fu_4379_p1.read().is_01() || !ap_phi_reg_pp1_iter1_p_01189_2_12_reg_1495.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_13_1_fu_4379_p1.read()) < sc_biguint<11>(ap_phi_reg_pp1_iter1_p_01189_2_12_reg_1495.read()));
}

void disparityMap::thread_tmp_50_14_fu_4515_p2() {
    tmp_50_14_fu_4515_p2 = (!cost_d_actual_V_2_14_1_fu_4511_p1.read().is_01() || !ap_phi_reg_pp1_iter1_p_01189_2_13_reg_1539.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_14_1_fu_4511_p1.read()) < sc_biguint<11>(ap_phi_reg_pp1_iter1_p_01189_2_13_reg_1539.read()));
}

void disparityMap::thread_tmp_50_1_fu_2319_p2() {
    tmp_50_1_fu_2319_p2 = (!cost_d_actual_V_2_1_s_fu_2315_p1.read().is_01() || !ap_phi_reg_pp1_iter0_p_01189_2_reg_939.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_1_s_fu_2315_p1.read()) < sc_biguint<11>(ap_phi_reg_pp1_iter0_p_01189_2_reg_939.read()));
}

void disparityMap::thread_tmp_50_2_fu_2479_p2() {
    tmp_50_2_fu_2479_p2 = (!cost_d_actual_V_2_2_s_fu_2475_p1.read().is_01() || !ap_phi_mux_p_01189_2_1_phi_fu_976_p4.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_2_s_fu_2475_p1.read()) < sc_biguint<11>(ap_phi_mux_p_01189_2_1_phi_fu_976_p4.read()));
}

void disparityMap::thread_tmp_50_3_fu_2662_p2() {
    tmp_50_3_fu_2662_p2 = (!cost_d_actual_V_2_3_s_fu_2659_p1.read().is_01() || !ap_phi_reg_pp1_iter0_p_01189_2_2_reg_1017.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_3_s_fu_2659_p1.read()) < sc_biguint<11>(ap_phi_reg_pp1_iter0_p_01189_2_2_reg_1017.read()));
}

void disparityMap::thread_tmp_50_4_fu_2824_p2() {
    tmp_50_4_fu_2824_p2 = (!cost_d_actual_V_2_4_s_fu_2820_p1.read().is_01() || !ap_phi_reg_pp1_iter0_p_01189_2_3_reg_1060.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_4_s_fu_2820_p1.read()) < sc_biguint<11>(ap_phi_reg_pp1_iter0_p_01189_2_3_reg_1060.read()));
}

void disparityMap::thread_tmp_50_5_fu_2970_p2() {
    tmp_50_5_fu_2970_p2 = (!cost_d_actual_V_2_5_s_fu_2966_p1.read().is_01() || !ap_phi_reg_pp1_iter0_p_01189_2_4_reg_1103.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_5_s_fu_2966_p1.read()) < sc_biguint<11>(ap_phi_reg_pp1_iter0_p_01189_2_4_reg_1103.read()));
}

void disparityMap::thread_tmp_50_6_fu_3128_p2() {
    tmp_50_6_fu_3128_p2 = (!cost_d_actual_V_2_6_s_fu_3124_p1.read().is_01() || !ap_phi_reg_pp1_iter0_p_01189_2_5_reg_1146.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_6_s_fu_3124_p1.read()) < sc_biguint<11>(ap_phi_reg_pp1_iter0_p_01189_2_5_reg_1146.read()));
}

void disparityMap::thread_tmp_50_7_fu_3286_p2() {
    tmp_50_7_fu_3286_p2 = (!cost_d_actual_V_2_7_s_fu_3282_p1.read().is_01() || !ap_phi_mux_p_01189_2_6_phi_fu_1193_p4.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_7_s_fu_3282_p1.read()) < sc_biguint<11>(ap_phi_mux_p_01189_2_6_phi_fu_1193_p4.read()));
}

void disparityMap::thread_tmp_50_8_fu_3469_p2() {
    tmp_50_8_fu_3469_p2 = (!cost_d_actual_V_2_8_s_fu_3466_p1.read().is_01() || !ap_phi_reg_pp1_iter0_p_01189_2_7_reg_1234.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_8_s_fu_3466_p1.read()) < sc_biguint<11>(ap_phi_reg_pp1_iter0_p_01189_2_7_reg_1234.read()));
}

void disparityMap::thread_tmp_50_9_fu_3627_p2() {
    tmp_50_9_fu_3627_p2 = (!cost_d_actual_V_2_9_s_fu_3623_p1.read().is_01() || !ap_phi_reg_pp1_iter1_p_01189_2_8_reg_1277.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_9_s_fu_3623_p1.read()) < sc_biguint<11>(ap_phi_reg_pp1_iter1_p_01189_2_8_reg_1277.read()));
}

void disparityMap::thread_tmp_50_fu_2890_p3() {
    tmp_50_fu_2890_p3 = grp_fu_1668_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_50_s_fu_3773_p2() {
    tmp_50_s_fu_3773_p2 = (!cost_d_actual_V_2_c_fu_3769_p1.read().is_01() || !ap_phi_reg_pp1_iter1_p_01189_2_9_reg_1320.read().is_01())? sc_lv<1>(): (sc_biguint<11>(cost_d_actual_V_2_c_fu_3769_p1.read()) < sc_biguint<11>(ap_phi_reg_pp1_iter1_p_01189_2_9_reg_1320.read()));
}

void disparityMap::thread_tmp_51_fu_3201_p3() {
    tmp_51_fu_3201_p3 = tmp_44_7_reg_5765.read().range(31, 31);
}

void disparityMap::thread_tmp_52_fu_2995_p3() {
    tmp_52_fu_2995_p3 = grp_fu_1678_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_53_fu_3356_p3() {
    tmp_53_fu_3356_p3 = grp_fu_1688_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_54_fu_3153_p3() {
    tmp_54_fu_3153_p3 = grp_fu_1688_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_55_fu_3518_p3() {
    tmp_55_fu_3518_p3 = grp_fu_1698_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_56_fu_3295_p3() {
    tmp_56_fu_3295_p3 = grp_fu_1698_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_57_fu_3664_p3() {
    tmp_57_fu_3664_p3 = grp_fu_1708_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_58_fu_3441_p3() {
    tmp_58_fu_3441_p3 = grp_fu_1708_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_59_fu_3843_p3() {
    tmp_59_fu_3843_p3 = tmp_44_10_reg_5982.read().range(31, 31);
}

void disparityMap::thread_tmp_5_fu_4628_p2() {
    tmp_5_fu_4628_p2 = (!tmp_s_fu_4620_p3.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_s_fu_4620_p3.read()) + sc_bigint<32>(ap_const_lv32_FFFFFFFF));
}

void disparityMap::thread_tmp_60_fu_3573_p3() {
    tmp_60_fu_3573_p3 = grp_fu_1718_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_61_fu_4001_p3() {
    tmp_61_fu_4001_p3 = tmp_44_11_reg_6021.read().range(31, 31);
}

void disparityMap::thread_tmp_62_fu_3693_p3() {
    tmp_62_fu_3693_p3 = grp_fu_1728_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_63_fu_4144_p3() {
    tmp_63_fu_4144_p3 = grp_fu_1738_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_64_fu_3795_p3() {
    tmp_64_fu_3795_p3 = grp_fu_1738_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_65_fu_4297_p3() {
    tmp_65_fu_4297_p3 = grp_fu_1748_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_66_fu_3953_p3() {
    tmp_66_fu_3953_p3 = grp_fu_1748_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_67_fu_4422_p3() {
    tmp_67_fu_4422_p3 = tmp_44_14_fu_4417_p2.read().range(31, 31);
}

void disparityMap::thread_tmp_8_fu_4638_p2() {
    tmp_8_fu_4638_p2 = (!r8_cast_fu_4634_p1.read().is_01() || !tmp_s_fu_4620_p3.read().is_01())? sc_lv<1>(): (sc_bigint<32>(r8_cast_fu_4634_p1.read()) < sc_bigint<32>(tmp_s_fu_4620_p3.read()));
}

void disparityMap::thread_tmp_9_mid1_fu_2045_p2() {
    tmp_9_mid1_fu_2045_p2 = (!row3_reg_4968.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(row3_reg_4968.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void disparityMap::thread_tmp_9_mid2_fu_2050_p3() {
    tmp_9_mid2_fu_2050_p3 = (!exitcond_reg_4962.read()[0].is_01())? sc_lv<1>(): ((exitcond_reg_4962.read()[0].to_bool())? tmp_9_mid1_fu_2045_p2.read(): tmp_34_reg_4973.read());
}

void disparityMap::thread_tmp_fu_1780_p2() {
    tmp_fu_1780_p2 = (!r_cast_fu_1776_p1.read().is_01() || !packets_fu_1771_p2.read().is_01())? sc_lv<1>(): (sc_bigint<32>(r_cast_fu_1776_p1.read()) < sc_bigint<32>(packets_fu_1771_p2.read()));
}

void disparityMap::thread_tmp_i1_fu_2034_p1() {
    tmp_i1_fu_2034_p1 = esl_zext<64,8>(agg_result_V_i_i1_fu_2026_p3.read());
}

void disparityMap::thread_tmp_i_fu_2004_p1() {
    tmp_i_fu_2004_p1 = esl_zext<64,8>(agg_result_V_i_i_fu_1996_p3.read());
}

void disparityMap::thread_tmp_i_i10_25_fu_3339_p2() {
    tmp_i_i10_25_fu_3339_p2 = (!pixel_values_right_V_7.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_7.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i10_fu_3329_p2() {
    tmp_i_i10_fu_3329_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_7.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(pixel_values_right_V_7.read()));
}

void disparityMap::thread_tmp_i_i11_27_fu_3501_p2() {
    tmp_i_i11_27_fu_3501_p2 = (!pixel_values_right_V_8.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_8.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i11_fu_3491_p2() {
    tmp_i_i11_fu_3491_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_8.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(pixel_values_right_V_8.read()));
}

void disparityMap::thread_tmp_i_i12_29_fu_3659_p2() {
    tmp_i_i12_29_fu_3659_p2 = (!pixel_values_right_V_9.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_9.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i12_fu_3649_p2() {
    tmp_i_i12_fu_3649_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_9.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(pixel_values_right_V_9.read()));
}

void disparityMap::thread_tmp_i_i13_33_fu_3826_p2() {
    tmp_i_i13_33_fu_3826_p2 = (!pixel_values_right_V_10.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_10.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i13_fu_3816_p2() {
    tmp_i_i13_fu_3816_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_10.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(pixel_values_right_V_10.read()));
}

void disparityMap::thread_tmp_i_i14_35_fu_3984_p2() {
    tmp_i_i14_35_fu_3984_p2 = (!pixel_values_right_V_11.read().is_01() || !leftImage_V_load_reg_5129_pp1_iter1_reg.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_11.read()) - sc_biguint<8>(leftImage_V_load_reg_5129_pp1_iter1_reg.read()));
}

void disparityMap::thread_tmp_i_i14_fu_3974_p2() {
    tmp_i_i14_fu_3974_p2 = (!leftImage_V_load_reg_5129_pp1_iter1_reg.read().is_01() || !pixel_values_right_V_11.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129_pp1_iter1_reg.read()) < sc_biguint<8>(pixel_values_right_V_11.read()));
}

void disparityMap::thread_tmp_i_i15_37_fu_4127_p2() {
    tmp_i_i15_37_fu_4127_p2 = (!pixel_values_right_V_12.read().is_01() || !leftImage_V_load_reg_5129_pp1_iter1_reg.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_12.read()) - sc_biguint<8>(leftImage_V_load_reg_5129_pp1_iter1_reg.read()));
}

void disparityMap::thread_tmp_i_i15_fu_4117_p2() {
    tmp_i_i15_fu_4117_p2 = (!leftImage_V_load_reg_5129_pp1_iter1_reg.read().is_01() || !pixel_values_right_V_12.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129_pp1_iter1_reg.read()) < sc_biguint<8>(pixel_values_right_V_12.read()));
}

void disparityMap::thread_tmp_i_i16_39_fu_4280_p2() {
    tmp_i_i16_39_fu_4280_p2 = (!pixel_values_right_V_13.read().is_01() || !leftImage_V_load_reg_5129_pp1_iter1_reg.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_13.read()) - sc_biguint<8>(leftImage_V_load_reg_5129_pp1_iter1_reg.read()));
}

void disparityMap::thread_tmp_i_i16_fu_4270_p2() {
    tmp_i_i16_fu_4270_p2 = (!leftImage_V_load_reg_5129_pp1_iter1_reg.read().is_01() || !pixel_values_right_V_13.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129_pp1_iter1_reg.read()) < sc_biguint<8>(pixel_values_right_V_13.read()));
}

void disparityMap::thread_tmp_i_i17_42_fu_4413_p2() {
    tmp_i_i17_42_fu_4413_p2 = (!pixel_values_right_V_15_reg_6101.read().is_01() || !leftImage_V_load_reg_5129_pp1_iter1_reg.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_15_reg_6101.read()) - sc_biguint<8>(leftImage_V_load_reg_5129_pp1_iter1_reg.read()));
}

void disparityMap::thread_tmp_i_i17_fu_4405_p2() {
    tmp_i_i17_fu_4405_p2 = (!leftImage_V_load_reg_5129_pp1_iter1_reg.read().is_01() || !pixel_values_right_V_15_reg_6101.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129_pp1_iter1_reg.read()) < sc_biguint<8>(pixel_values_right_V_15_reg_6101.read()));
}

void disparityMap::thread_tmp_i_i1_45_fu_2022_p2() {
    tmp_i_i1_45_fu_2022_p2 = (!pixel_values_left_V_4_reg_5202.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_left_V_4_reg_5202.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i1_fu_2014_p2() {
    tmp_i_i1_fu_2014_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_left_V_4_reg_5202.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(pixel_values_left_V_4_reg_5202.read()));
}

void disparityMap::thread_tmp_i_i2_10_fu_2128_p2() {
    tmp_i_i2_10_fu_2128_p2 = (!rightImage_V_load_reg_5187.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(rightImage_V_load_reg_5187.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i2_fu_2120_p2() {
    tmp_i_i2_fu_2120_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !rightImage_V_load_reg_5187.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(rightImage_V_load_reg_5187.read()));
}

void disparityMap::thread_tmp_i_i3_12_fu_2236_p2() {
    tmp_i_i3_12_fu_2236_p2 = (!pixel_values_right_V.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i3_fu_2226_p2() {
    tmp_i_i3_fu_2226_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(pixel_values_right_V.read()));
}

void disparityMap::thread_tmp_i_i4_13_fu_2377_p2() {
    tmp_i_i4_13_fu_2377_p2 = (!pixel_values_right_V_1.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_1.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i4_fu_2367_p2() {
    tmp_i_i4_fu_2367_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_1.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(pixel_values_right_V_1.read()));
}

void disparityMap::thread_tmp_i_i5_15_fu_2536_p2() {
    tmp_i_i5_15_fu_2536_p2 = (!pixel_values_right_V_2.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_2.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i5_fu_2526_p2() {
    tmp_i_i5_fu_2526_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_2.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(pixel_values_right_V_2.read()));
}

void disparityMap::thread_tmp_i_i6_17_fu_2694_p2() {
    tmp_i_i6_17_fu_2694_p2 = (!pixel_values_right_V_3.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_3.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i6_fu_2684_p2() {
    tmp_i_i6_fu_2684_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_3.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(pixel_values_right_V_3.read()));
}

void disparityMap::thread_tmp_i_i7_19_fu_2856_p2() {
    tmp_i_i7_19_fu_2856_p2 = (!pixel_values_right_V_4.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_4.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i7_fu_2846_p2() {
    tmp_i_i7_fu_2846_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_4.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(pixel_values_right_V_4.read()));
}

void disparityMap::thread_tmp_i_i8_21_fu_3026_p2() {
    tmp_i_i8_21_fu_3026_p2 = (!pixel_values_right_V_5.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_5.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i8_fu_3016_p2() {
    tmp_i_i8_fu_3016_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_5.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(pixel_values_right_V_5.read()));
}

void disparityMap::thread_tmp_i_i9_23_fu_3184_p2() {
    tmp_i_i9_23_fu_3184_p2 = (!pixel_values_right_V_6.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_right_V_6.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i9_fu_3174_p2() {
    tmp_i_i9_fu_3174_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_right_V_6.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(pixel_values_right_V_6.read()));
}

void disparityMap::thread_tmp_i_i_44_fu_1992_p2() {
    tmp_i_i_44_fu_1992_p2 = (!pixel_values_left_V_2_reg_5195.read().is_01() || !leftImage_V_load_reg_5129.read().is_01())? sc_lv<8>(): (sc_biguint<8>(pixel_values_left_V_2_reg_5195.read()) - sc_biguint<8>(leftImage_V_load_reg_5129.read()));
}

void disparityMap::thread_tmp_i_i_fu_1984_p2() {
    tmp_i_i_fu_1984_p2 = (!leftImage_V_load_reg_5129.read().is_01() || !pixel_values_left_V_2_reg_5195.read().is_01())? sc_lv<1>(): (sc_biguint<8>(leftImage_V_load_reg_5129.read()) < sc_biguint<8>(pixel_values_left_V_2_reg_5195.read()));
}

void disparityMap::thread_tmp_s_fu_4620_p3() {
    tmp_s_fu_4620_p3 = (!tmp_32_fu_4575_p3.read()[0].is_01())? sc_lv<32>(): ((tmp_32_fu_4575_p3.read()[0].to_bool())? p_neg_t_fu_4601_p2.read(): tmp_33_fu_4616_p1.read());
}

}

