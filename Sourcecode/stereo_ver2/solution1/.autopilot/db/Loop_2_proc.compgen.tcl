# This script segment is generated automatically by AutoPilot

# Memory (RAM/ROM)  definition:
set ID 10
set hasByteEnable 0
set MemName Loop_2_proc_PAR_Rbkb
set CoreName ap_simcore_mem
set PortList { 1 1 1 }
set DataWd 32
set AddrRange 9
set AddrWd 4
set TrueReset 0
set IsROM 1
set ROMData { "00111111011111111111001110110111" "00111010101110100001000100110010" "10111100100111100010111100010010" "10111010101111001100011001110111" "00111111011111111111111111100101" "10111010100010100110110110111011" "00111100100111100010101111011101" "00111010100011100000110001000000" "00111111011111111111001110111111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 3 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 3 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 11
set hasByteEnable 0
set MemName Loop_2_proc_PAR_Lcud
set CoreName ap_simcore_mem
set PortList { 1 1 1 }
set DataWd 32
set AddrRange 9
set AddrWd 4
set TrueReset 0
set IsROM 1
set ROMData { "00111111011111111111001110110111" "10111010101111001100011001110111" "00111100100111100010101111011101" "00111010101110100001000100110010" "00111111011111111111111111100101" "10111100100101010100111001001110" "10111010100010100110110110111011" "00111111011111111111001110111111" "00000000000000000000000000000000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 3 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 3 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 12
set hasByteEnable 0
set MemName Loop_2_proc_PAR_RdEe
set CoreName ap_simcore_mem
set PortList { 1 1 1 }
set DataWd 32
set AddrRange 9
set AddrWd 4
set TrueReset 0
set IsROM 1
set ROMData { "01000100100000100100011110110100" "00000000000000000000000000000000" "01000011110110111011100100001100" "00000000000000000000000000000000" "01000100100000100111011111100110" "01000011101011001110111100000010" "00000000000000000000000000000000" "00000000000000000000000000000000" "00111111100000000000000000000000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 3 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 3 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 13
set hasByteEnable 0
set MemName Loop_2_proc_PAR_LeOg
set CoreName ap_simcore_mem
set PortList { 1 1 1 }
set DataWd 32
set AddrRange 9
set AddrWd 4
set TrueReset 0
set IsROM 1
set ROMData { "01000100100000110101101100000101" "00000000000000000000000000000000" "01000011111010111111010001011010" "00000000000000000000000000000000" "01000100100000111001000001101101" "01000011101101110010000100010001" "00000000000000000000000000000000" "00000000000000000000000000000000" "00111111100000000000000000000000" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 3 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 3 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 14 \
    name PAR_R_RINV_val_2_2_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_R_RINV_val_2_2_out_out \
    op interface \
    ports { PAR_R_RINV_val_2_2_out_out_din { O 32 vector } PAR_R_RINV_val_2_2_out_out_full_n { I 1 bit } PAR_R_RINV_val_2_2_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 15 \
    name PAR_R_RINV_val_2_1_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_R_RINV_val_2_1_out_out \
    op interface \
    ports { PAR_R_RINV_val_2_1_out_out_din { O 32 vector } PAR_R_RINV_val_2_1_out_out_full_n { I 1 bit } PAR_R_RINV_val_2_1_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 16 \
    name PAR_R_RINV_val_2_0_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_R_RINV_val_2_0_out_out \
    op interface \
    ports { PAR_R_RINV_val_2_0_out_out_din { O 32 vector } PAR_R_RINV_val_2_0_out_out_full_n { I 1 bit } PAR_R_RINV_val_2_0_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 17 \
    name PAR_R_RINV_val_1_2_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_R_RINV_val_1_2_out_out \
    op interface \
    ports { PAR_R_RINV_val_1_2_out_out_din { O 32 vector } PAR_R_RINV_val_1_2_out_out_full_n { I 1 bit } PAR_R_RINV_val_1_2_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 18 \
    name PAR_R_RINV_val_1_1_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_R_RINV_val_1_1_out_out \
    op interface \
    ports { PAR_R_RINV_val_1_1_out_out_din { O 32 vector } PAR_R_RINV_val_1_1_out_out_full_n { I 1 bit } PAR_R_RINV_val_1_1_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 19 \
    name PAR_R_RINV_val_1_0_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_R_RINV_val_1_0_out_out \
    op interface \
    ports { PAR_R_RINV_val_1_0_out_out_din { O 32 vector } PAR_R_RINV_val_1_0_out_out_full_n { I 1 bit } PAR_R_RINV_val_1_0_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 20 \
    name PAR_R_RINV_val_0_2_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_R_RINV_val_0_2_out_out \
    op interface \
    ports { PAR_R_RINV_val_0_2_out_out_din { O 32 vector } PAR_R_RINV_val_0_2_out_out_full_n { I 1 bit } PAR_R_RINV_val_0_2_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 21 \
    name PAR_R_RINV_val_0_1_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_R_RINV_val_0_1_out_out \
    op interface \
    ports { PAR_R_RINV_val_0_1_out_out_din { O 32 vector } PAR_R_RINV_val_0_1_out_out_full_n { I 1 bit } PAR_R_RINV_val_0_1_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 22 \
    name PAR_R_RINV_val_0_0_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_R_RINV_val_0_0_out_out \
    op interface \
    ports { PAR_R_RINV_val_0_0_out_out_din { O 32 vector } PAR_R_RINV_val_0_0_out_out_full_n { I 1 bit } PAR_R_RINV_val_0_0_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 23 \
    name PAR_L_RINV_val_2_2_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_L_RINV_val_2_2_out_out \
    op interface \
    ports { PAR_L_RINV_val_2_2_out_out_din { O 32 vector } PAR_L_RINV_val_2_2_out_out_full_n { I 1 bit } PAR_L_RINV_val_2_2_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 24 \
    name PAR_L_RINV_val_2_1_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_L_RINV_val_2_1_out_out \
    op interface \
    ports { PAR_L_RINV_val_2_1_out_out_din { O 32 vector } PAR_L_RINV_val_2_1_out_out_full_n { I 1 bit } PAR_L_RINV_val_2_1_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 25 \
    name PAR_L_RINV_val_2_0_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_L_RINV_val_2_0_out_out \
    op interface \
    ports { PAR_L_RINV_val_2_0_out_out_din { O 32 vector } PAR_L_RINV_val_2_0_out_out_full_n { I 1 bit } PAR_L_RINV_val_2_0_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 26 \
    name PAR_L_RINV_val_1_2_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_L_RINV_val_1_2_out_out \
    op interface \
    ports { PAR_L_RINV_val_1_2_out_out_din { O 32 vector } PAR_L_RINV_val_1_2_out_out_full_n { I 1 bit } PAR_L_RINV_val_1_2_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 27 \
    name PAR_L_RINV_val_1_1_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_L_RINV_val_1_1_out_out \
    op interface \
    ports { PAR_L_RINV_val_1_1_out_out_din { O 32 vector } PAR_L_RINV_val_1_1_out_out_full_n { I 1 bit } PAR_L_RINV_val_1_1_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 28 \
    name PAR_L_RINV_val_1_0_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_L_RINV_val_1_0_out_out \
    op interface \
    ports { PAR_L_RINV_val_1_0_out_out_din { O 32 vector } PAR_L_RINV_val_1_0_out_out_full_n { I 1 bit } PAR_L_RINV_val_1_0_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 29 \
    name PAR_L_RINV_val_0_2_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_L_RINV_val_0_2_out_out \
    op interface \
    ports { PAR_L_RINV_val_0_2_out_out_din { O 32 vector } PAR_L_RINV_val_0_2_out_out_full_n { I 1 bit } PAR_L_RINV_val_0_2_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 30 \
    name PAR_L_RINV_val_0_1_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_L_RINV_val_0_1_out_out \
    op interface \
    ports { PAR_L_RINV_val_0_1_out_out_din { O 32 vector } PAR_L_RINV_val_0_1_out_out_full_n { I 1 bit } PAR_L_RINV_val_0_1_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 31 \
    name PAR_L_RINV_val_0_0_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_PAR_L_RINV_val_0_0_out_out \
    op interface \
    ports { PAR_L_RINV_val_0_0_out_out_din { O 32 vector } PAR_L_RINV_val_0_0_out_out_full_n { I 1 bit } PAR_L_RINV_val_0_0_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 32 \
    name cy2_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_cy2_out_out \
    op interface \
    ports { cy2_out_out_din { O 32 vector } cy2_out_out_full_n { I 1 bit } cy2_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 33 \
    name fy2_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_fy2_out_out \
    op interface \
    ports { fy2_out_out_din { O 32 vector } fy2_out_out_full_n { I 1 bit } fy2_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 34 \
    name cx2_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_cx2_out_out \
    op interface \
    ports { cx2_out_out_din { O 32 vector } cx2_out_out_full_n { I 1 bit } cx2_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 35 \
    name fx2_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_fx2_out_out \
    op interface \
    ports { fx2_out_out_din { O 32 vector } fx2_out_out_full_n { I 1 bit } fx2_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 36 \
    name cy1_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_cy1_out_out \
    op interface \
    ports { cy1_out_out_din { O 32 vector } cy1_out_out_full_n { I 1 bit } cy1_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 37 \
    name fy1_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_fy1_out_out \
    op interface \
    ports { fy1_out_out_din { O 32 vector } fy1_out_out_full_n { I 1 bit } fy1_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 38 \
    name cx1_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_cx1_out_out \
    op interface \
    ports { cx1_out_out_din { O 32 vector } cx1_out_out_full_n { I 1 bit } cx1_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 39 \
    name fx1_out_out \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_fx1_out_out \
    op interface \
    ports { fx1_out_out_din { O 32 vector } fx1_out_out_full_n { I 1 bit } fx1_out_out_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


