-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity Loop_disparityMap_la is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    rows_V : IN STD_LOGIC_VECTOR (31 downto 0);
    in_stream_TDATA : IN STD_LOGIC_VECTOR (31 downto 0);
    in_stream_TVALID : IN STD_LOGIC;
    in_stream_TREADY : OUT STD_LOGIC;
    p_read : IN STD_LOGIC_VECTOR (31 downto 0);
    p_read1 : IN STD_LOGIC_VECTOR (62 downto 0);
    leftImage_in_V_address0 : OUT STD_LOGIC_VECTOR (16 downto 0);
    leftImage_in_V_ce0 : OUT STD_LOGIC;
    leftImage_in_V_we0 : OUT STD_LOGIC;
    leftImage_in_V_d0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    leftImage_in_V_address1 : OUT STD_LOGIC_VECTOR (16 downto 0);
    leftImage_in_V_ce1 : OUT STD_LOGIC;
    leftImage_in_V_we1 : OUT STD_LOGIC;
    leftImage_in_V_d1 : OUT STD_LOGIC_VECTOR (7 downto 0);
    rightImage_in_V_address0 : OUT STD_LOGIC_VECTOR (16 downto 0);
    rightImage_in_V_ce0 : OUT STD_LOGIC;
    rightImage_in_V_we0 : OUT STD_LOGIC;
    rightImage_in_V_d0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    rightImage_in_V_address1 : OUT STD_LOGIC_VECTOR (16 downto 0);
    rightImage_in_V_ce1 : OUT STD_LOGIC;
    rightImage_in_V_we1 : OUT STD_LOGIC;
    rightImage_in_V_d1 : OUT STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of Loop_disparityMap_la is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv41_0 : STD_LOGIC_VECTOR (40 downto 0) := "00000000000000000000000000000000000000000";
    constant ap_const_lv31_0 : STD_LOGIC_VECTOR (30 downto 0) := "0000000000000000000000000000000";
    constant ap_const_lv41_168 : STD_LOGIC_VECTOR (40 downto 0) := "00000000000000000000000000000000101101000";
    constant ap_const_lv31_1 : STD_LOGIC_VECTOR (30 downto 0) := "0000000000000000000000000000001";
    constant ap_const_lv18_1 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000001";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv32_10 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010000";
    constant ap_const_lv32_17 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010111";
    constant ap_const_lv32_18 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011000";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal in_stream_data_V_0_data_out : STD_LOGIC_VECTOR (31 downto 0);
    signal in_stream_data_V_0_vld_in : STD_LOGIC;
    signal in_stream_data_V_0_vld_out : STD_LOGIC;
    signal in_stream_data_V_0_ack_in : STD_LOGIC;
    signal in_stream_data_V_0_ack_out : STD_LOGIC;
    signal in_stream_data_V_0_payload_A : STD_LOGIC_VECTOR (31 downto 0);
    signal in_stream_data_V_0_payload_B : STD_LOGIC_VECTOR (31 downto 0);
    signal in_stream_data_V_0_sel_rd : STD_LOGIC := '0';
    signal in_stream_data_V_0_sel_wr : STD_LOGIC := '0';
    signal in_stream_data_V_0_sel : STD_LOGIC;
    signal in_stream_data_V_0_load_A : STD_LOGIC;
    signal in_stream_data_V_0_load_B : STD_LOGIC;
    signal in_stream_data_V_0_state : STD_LOGIC_VECTOR (1 downto 0) := "00";
    signal in_stream_data_V_0_state_cmp_full : STD_LOGIC;
    signal in_stream_TDATA_blk_n : STD_LOGIC;
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal ap_block_state1 : BOOLEAN;
    signal tmp_fu_185_p1 : STD_LOGIC_VECTOR (17 downto 0);
    signal tmp_reg_319 : STD_LOGIC_VECTOR (17 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal next_mul_fu_189_p2 : STD_LOGIC_VECTOR (40 downto 0);
    signal next_mul_reg_325 : STD_LOGIC_VECTOR (40 downto 0);
    signal exitcond_i_fu_195_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal r_fu_200_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal r_reg_334 : STD_LOGIC_VECTOR (31 downto 0);
    signal c_fu_215_p2 : STD_LOGIC_VECTOR (30 downto 0);
    signal c_reg_342 : STD_LOGIC_VECTOR (30 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_1_fu_237_p2 : STD_LOGIC_VECTOR (17 downto 0);
    signal tmp_1_reg_347 : STD_LOGIC_VECTOR (17 downto 0);
    signal exitcond2_i_fu_210_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_2_fu_256_p2 : STD_LOGIC_VECTOR (17 downto 0);
    signal tmp_2_reg_352 : STD_LOGIC_VECTOR (17 downto 0);
    signal i_op_assign_reg_152 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal phi_mul_reg_163 : STD_LOGIC_VECTOR (40 downto 0);
    signal i_op_assign_1_reg_174 : STD_LOGIC_VECTOR (30 downto 0);
    signal tmp_1_cast_fu_261_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_2_cast_fu_271_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal lftr_wideiv_cast_i_fu_206_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_7_fu_225_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal tmp_22_i_cast_fu_229_p3 : STD_LOGIC_VECTOR (17 downto 0);
    signal tmp_6_fu_221_p1 : STD_LOGIC_VECTOR (16 downto 0);
    signal tmp_9_fu_242_p3 : STD_LOGIC_VECTOR (17 downto 0);
    signal tmp_10_fu_250_p2 : STD_LOGIC_VECTOR (17 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_continue = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif (((exitcond_i_fu_195_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    in_stream_data_V_0_sel_rd_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                in_stream_data_V_0_sel_rd <= ap_const_logic_0;
            else
                if (((in_stream_data_V_0_ack_out = ap_const_logic_1) and (in_stream_data_V_0_vld_out = ap_const_logic_1))) then 
                                        in_stream_data_V_0_sel_rd <= not(in_stream_data_V_0_sel_rd);
                end if; 
            end if;
        end if;
    end process;


    in_stream_data_V_0_sel_wr_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                in_stream_data_V_0_sel_wr <= ap_const_logic_0;
            else
                if (((in_stream_data_V_0_ack_in = ap_const_logic_1) and (in_stream_data_V_0_vld_in = ap_const_logic_1))) then 
                                        in_stream_data_V_0_sel_wr <= not(in_stream_data_V_0_sel_wr);
                end if; 
            end if;
        end if;
    end process;


    in_stream_data_V_0_state_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                in_stream_data_V_0_state <= ap_const_lv2_0;
            else
                if ((((in_stream_data_V_0_state = ap_const_lv2_2) and (in_stream_data_V_0_vld_in = ap_const_logic_0)) or ((in_stream_data_V_0_state = ap_const_lv2_3) and (in_stream_data_V_0_vld_in = ap_const_logic_0) and (in_stream_data_V_0_ack_out = ap_const_logic_1)))) then 
                    in_stream_data_V_0_state <= ap_const_lv2_2;
                elsif ((((in_stream_data_V_0_state = ap_const_lv2_1) and (in_stream_data_V_0_ack_out = ap_const_logic_0)) or ((in_stream_data_V_0_state = ap_const_lv2_3) and (in_stream_data_V_0_ack_out = ap_const_logic_0) and (in_stream_data_V_0_vld_in = ap_const_logic_1)))) then 
                    in_stream_data_V_0_state <= ap_const_lv2_1;
                elsif (((not(((in_stream_data_V_0_vld_in = ap_const_logic_0) and (in_stream_data_V_0_ack_out = ap_const_logic_1))) and not(((in_stream_data_V_0_ack_out = ap_const_logic_0) and (in_stream_data_V_0_vld_in = ap_const_logic_1))) and (in_stream_data_V_0_state = ap_const_lv2_3)) or ((in_stream_data_V_0_state = ap_const_lv2_1) and (in_stream_data_V_0_ack_out = ap_const_logic_1)) or ((in_stream_data_V_0_state = ap_const_lv2_2) and (in_stream_data_V_0_vld_in = ap_const_logic_1)))) then 
                    in_stream_data_V_0_state <= ap_const_lv2_3;
                else 
                    in_stream_data_V_0_state <= ap_const_lv2_2;
                end if; 
            end if;
        end if;
    end process;


    i_op_assign_1_reg_174_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((in_stream_data_V_0_vld_out = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                i_op_assign_1_reg_174 <= c_reg_342;
            elsif (((exitcond_i_fu_195_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i_op_assign_1_reg_174 <= ap_const_lv31_0;
            end if; 
        end if;
    end process;

    i_op_assign_reg_152_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                i_op_assign_reg_152 <= r_reg_334;
            elsif ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                i_op_assign_reg_152 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;

    phi_mul_reg_163_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                phi_mul_reg_163 <= next_mul_reg_325;
            elsif ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                phi_mul_reg_163 <= ap_const_lv41_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                c_reg_342 <= c_fu_215_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((in_stream_data_V_0_load_A = ap_const_logic_1)) then
                in_stream_data_V_0_payload_A <= in_stream_TDATA;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((in_stream_data_V_0_load_B = ap_const_logic_1)) then
                in_stream_data_V_0_payload_B <= in_stream_TDATA;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                next_mul_reg_325 <= next_mul_fu_189_p2;
                r_reg_334 <= r_fu_200_p2;
                tmp_reg_319 <= tmp_fu_185_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond2_i_fu_210_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                tmp_1_reg_347 <= tmp_1_fu_237_p2;
                tmp_2_reg_352 <= tmp_2_fu_256_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_done_reg, ap_CS_fsm, ap_CS_fsm_state1, in_stream_data_V_0_vld_out, ap_CS_fsm_state4, ap_CS_fsm_state2, exitcond_i_fu_195_p2, ap_CS_fsm_state3, exitcond2_i_fu_210_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if ((not(((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond_i_fu_195_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((exitcond2_i_fu_210_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state4 => 
                if (((in_stream_data_V_0_vld_out = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);

    ap_block_state1_assign_proc : process(ap_start, ap_done_reg)
    begin
                ap_block_state1 <= ((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    ap_done_assign_proc : process(ap_done_reg, ap_CS_fsm_state2, exitcond_i_fu_195_p2)
    begin
        if (((exitcond_i_fu_195_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_done_reg;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond_i_fu_195_p2)
    begin
        if (((exitcond_i_fu_195_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    c_fu_215_p2 <= std_logic_vector(unsigned(i_op_assign_1_reg_174) + unsigned(ap_const_lv31_1));
    exitcond2_i_fu_210_p2 <= "1" when (lftr_wideiv_cast_i_fu_206_p1 = p_read) else "0";
    exitcond_i_fu_195_p2 <= "1" when (i_op_assign_reg_152 = rows_V) else "0";

    in_stream_TDATA_blk_n_assign_proc : process(in_stream_data_V_0_state, ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            in_stream_TDATA_blk_n <= in_stream_data_V_0_state(0);
        else 
            in_stream_TDATA_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    in_stream_TREADY <= in_stream_data_V_0_state(1);
    in_stream_data_V_0_ack_in <= in_stream_data_V_0_state(1);

    in_stream_data_V_0_ack_out_assign_proc : process(in_stream_data_V_0_vld_out, ap_CS_fsm_state4)
    begin
        if (((in_stream_data_V_0_vld_out = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            in_stream_data_V_0_ack_out <= ap_const_logic_1;
        else 
            in_stream_data_V_0_ack_out <= ap_const_logic_0;
        end if; 
    end process;


    in_stream_data_V_0_data_out_assign_proc : process(in_stream_data_V_0_payload_A, in_stream_data_V_0_payload_B, in_stream_data_V_0_sel)
    begin
        if ((in_stream_data_V_0_sel = ap_const_logic_1)) then 
            in_stream_data_V_0_data_out <= in_stream_data_V_0_payload_B;
        else 
            in_stream_data_V_0_data_out <= in_stream_data_V_0_payload_A;
        end if; 
    end process;

    in_stream_data_V_0_load_A <= (in_stream_data_V_0_state_cmp_full and not(in_stream_data_V_0_sel_wr));
    in_stream_data_V_0_load_B <= (in_stream_data_V_0_state_cmp_full and in_stream_data_V_0_sel_wr);
    in_stream_data_V_0_sel <= in_stream_data_V_0_sel_rd;
    in_stream_data_V_0_state_cmp_full <= '0' when (in_stream_data_V_0_state = ap_const_lv2_1) else '1';
    in_stream_data_V_0_vld_in <= in_stream_TVALID;
    in_stream_data_V_0_vld_out <= in_stream_data_V_0_state(0);
    leftImage_in_V_address0 <= tmp_1_cast_fu_261_p1(17 - 1 downto 0);
    leftImage_in_V_address1 <= tmp_2_cast_fu_271_p1(17 - 1 downto 0);

    leftImage_in_V_ce0_assign_proc : process(in_stream_data_V_0_vld_out, ap_CS_fsm_state4)
    begin
        if (((in_stream_data_V_0_vld_out = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            leftImage_in_V_ce0 <= ap_const_logic_1;
        else 
            leftImage_in_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    leftImage_in_V_ce1_assign_proc : process(in_stream_data_V_0_vld_out, ap_CS_fsm_state4)
    begin
        if (((in_stream_data_V_0_vld_out = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            leftImage_in_V_ce1 <= ap_const_logic_1;
        else 
            leftImage_in_V_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    leftImage_in_V_d0 <= in_stream_data_V_0_data_out(8 - 1 downto 0);
    leftImage_in_V_d1 <= in_stream_data_V_0_data_out(15 downto 8);

    leftImage_in_V_we0_assign_proc : process(in_stream_data_V_0_vld_out, ap_CS_fsm_state4)
    begin
        if (((in_stream_data_V_0_vld_out = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            leftImage_in_V_we0 <= ap_const_logic_1;
        else 
            leftImage_in_V_we0 <= ap_const_logic_0;
        end if; 
    end process;


    leftImage_in_V_we1_assign_proc : process(in_stream_data_V_0_vld_out, ap_CS_fsm_state4)
    begin
        if (((in_stream_data_V_0_vld_out = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            leftImage_in_V_we1 <= ap_const_logic_1;
        else 
            leftImage_in_V_we1 <= ap_const_logic_0;
        end if; 
    end process;

    lftr_wideiv_cast_i_fu_206_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_op_assign_1_reg_174),32));
    next_mul_fu_189_p2 <= std_logic_vector(unsigned(ap_const_lv41_168) + unsigned(phi_mul_reg_163));
    r_fu_200_p2 <= std_logic_vector(unsigned(ap_const_lv32_1) + unsigned(i_op_assign_reg_152));
    rightImage_in_V_address0 <= tmp_1_cast_fu_261_p1(17 - 1 downto 0);
    rightImage_in_V_address1 <= tmp_2_cast_fu_271_p1(17 - 1 downto 0);

    rightImage_in_V_ce0_assign_proc : process(in_stream_data_V_0_vld_out, ap_CS_fsm_state4)
    begin
        if (((in_stream_data_V_0_vld_out = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            rightImage_in_V_ce0 <= ap_const_logic_1;
        else 
            rightImage_in_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    rightImage_in_V_ce1_assign_proc : process(in_stream_data_V_0_vld_out, ap_CS_fsm_state4)
    begin
        if (((in_stream_data_V_0_vld_out = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            rightImage_in_V_ce1 <= ap_const_logic_1;
        else 
            rightImage_in_V_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    rightImage_in_V_d0 <= in_stream_data_V_0_data_out(23 downto 16);
    rightImage_in_V_d1 <= in_stream_data_V_0_data_out(31 downto 24);

    rightImage_in_V_we0_assign_proc : process(in_stream_data_V_0_vld_out, ap_CS_fsm_state4)
    begin
        if (((in_stream_data_V_0_vld_out = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            rightImage_in_V_we0 <= ap_const_logic_1;
        else 
            rightImage_in_V_we0 <= ap_const_logic_0;
        end if; 
    end process;


    rightImage_in_V_we1_assign_proc : process(in_stream_data_V_0_vld_out, ap_CS_fsm_state4)
    begin
        if (((in_stream_data_V_0_vld_out = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            rightImage_in_V_we1 <= ap_const_logic_1;
        else 
            rightImage_in_V_we1 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_10_fu_250_p2 <= (tmp_9_fu_242_p3 or ap_const_lv18_1);
    tmp_1_cast_fu_261_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_1_reg_347),64));
    tmp_1_fu_237_p2 <= std_logic_vector(unsigned(tmp_22_i_cast_fu_229_p3) + unsigned(tmp_reg_319));
    tmp_22_i_cast_fu_229_p3 <= (tmp_7_fu_225_p1 & ap_const_lv1_0);
    tmp_2_cast_fu_271_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_2_reg_352),64));
    tmp_2_fu_256_p2 <= std_logic_vector(unsigned(tmp_10_fu_250_p2) + unsigned(tmp_reg_319));
    tmp_6_fu_221_p1 <= i_op_assign_1_reg_174(17 - 1 downto 0);
    tmp_7_fu_225_p1 <= i_op_assign_1_reg_174(17 - 1 downto 0);
    tmp_9_fu_242_p3 <= (tmp_6_fu_221_p1 & ap_const_lv1_0);
    tmp_fu_185_p1 <= phi_mul_reg_163(18 - 1 downto 0);
end behav;
