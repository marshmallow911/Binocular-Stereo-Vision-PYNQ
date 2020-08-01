set moduleName Loop_2_proc
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {Loop_2_proc}
set C_modelType { void 0 }
set C_modelArgList {
	{ PAR_R_RINV_val_2_2_out_out float 32 regular {fifo 1}  }
	{ PAR_R_RINV_val_2_1_out_out float 32 regular {fifo 1}  }
	{ PAR_R_RINV_val_2_0_out_out float 32 regular {fifo 1}  }
	{ PAR_R_RINV_val_1_2_out_out float 32 regular {fifo 1}  }
	{ PAR_R_RINV_val_1_1_out_out float 32 regular {fifo 1}  }
	{ PAR_R_RINV_val_1_0_out_out float 32 regular {fifo 1}  }
	{ PAR_R_RINV_val_0_2_out_out float 32 regular {fifo 1}  }
	{ PAR_R_RINV_val_0_1_out_out float 32 regular {fifo 1}  }
	{ PAR_R_RINV_val_0_0_out_out float 32 regular {fifo 1}  }
	{ PAR_L_RINV_val_2_2_out_out float 32 regular {fifo 1}  }
	{ PAR_L_RINV_val_2_1_out_out float 32 regular {fifo 1}  }
	{ PAR_L_RINV_val_2_0_out_out float 32 regular {fifo 1}  }
	{ PAR_L_RINV_val_1_2_out_out float 32 regular {fifo 1}  }
	{ PAR_L_RINV_val_1_1_out_out float 32 regular {fifo 1}  }
	{ PAR_L_RINV_val_1_0_out_out float 32 regular {fifo 1}  }
	{ PAR_L_RINV_val_0_2_out_out float 32 regular {fifo 1}  }
	{ PAR_L_RINV_val_0_1_out_out float 32 regular {fifo 1}  }
	{ PAR_L_RINV_val_0_0_out_out float 32 regular {fifo 1}  }
	{ cy2_out_out float 32 regular {fifo 1}  }
	{ fy2_out_out float 32 regular {fifo 1}  }
	{ cx2_out_out float 32 regular {fifo 1}  }
	{ fx2_out_out float 32 regular {fifo 1}  }
	{ cy1_out_out float 32 regular {fifo 1}  }
	{ fy1_out_out float 32 regular {fifo 1}  }
	{ cx1_out_out float 32 regular {fifo 1}  }
	{ fx1_out_out float 32 regular {fifo 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "PAR_R_RINV_val_2_2_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_2_1_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_2_0_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_1_2_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_1_1_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_1_0_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_0_2_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_0_1_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_0_0_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_2_2_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_2_1_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_2_0_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_1_2_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_1_1_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_1_0_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_0_2_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_0_1_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_0_0_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "cy2_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fy2_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "cx2_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fx2_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "cy1_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fy1_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "cx1_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "fx1_out_out", "interface" : "fifo", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 85
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ PAR_R_RINV_val_2_2_out_out_din sc_out sc_lv 32 signal 0 } 
	{ PAR_R_RINV_val_2_2_out_out_full_n sc_in sc_logic 1 signal 0 } 
	{ PAR_R_RINV_val_2_2_out_out_write sc_out sc_logic 1 signal 0 } 
	{ PAR_R_RINV_val_2_1_out_out_din sc_out sc_lv 32 signal 1 } 
	{ PAR_R_RINV_val_2_1_out_out_full_n sc_in sc_logic 1 signal 1 } 
	{ PAR_R_RINV_val_2_1_out_out_write sc_out sc_logic 1 signal 1 } 
	{ PAR_R_RINV_val_2_0_out_out_din sc_out sc_lv 32 signal 2 } 
	{ PAR_R_RINV_val_2_0_out_out_full_n sc_in sc_logic 1 signal 2 } 
	{ PAR_R_RINV_val_2_0_out_out_write sc_out sc_logic 1 signal 2 } 
	{ PAR_R_RINV_val_1_2_out_out_din sc_out sc_lv 32 signal 3 } 
	{ PAR_R_RINV_val_1_2_out_out_full_n sc_in sc_logic 1 signal 3 } 
	{ PAR_R_RINV_val_1_2_out_out_write sc_out sc_logic 1 signal 3 } 
	{ PAR_R_RINV_val_1_1_out_out_din sc_out sc_lv 32 signal 4 } 
	{ PAR_R_RINV_val_1_1_out_out_full_n sc_in sc_logic 1 signal 4 } 
	{ PAR_R_RINV_val_1_1_out_out_write sc_out sc_logic 1 signal 4 } 
	{ PAR_R_RINV_val_1_0_out_out_din sc_out sc_lv 32 signal 5 } 
	{ PAR_R_RINV_val_1_0_out_out_full_n sc_in sc_logic 1 signal 5 } 
	{ PAR_R_RINV_val_1_0_out_out_write sc_out sc_logic 1 signal 5 } 
	{ PAR_R_RINV_val_0_2_out_out_din sc_out sc_lv 32 signal 6 } 
	{ PAR_R_RINV_val_0_2_out_out_full_n sc_in sc_logic 1 signal 6 } 
	{ PAR_R_RINV_val_0_2_out_out_write sc_out sc_logic 1 signal 6 } 
	{ PAR_R_RINV_val_0_1_out_out_din sc_out sc_lv 32 signal 7 } 
	{ PAR_R_RINV_val_0_1_out_out_full_n sc_in sc_logic 1 signal 7 } 
	{ PAR_R_RINV_val_0_1_out_out_write sc_out sc_logic 1 signal 7 } 
	{ PAR_R_RINV_val_0_0_out_out_din sc_out sc_lv 32 signal 8 } 
	{ PAR_R_RINV_val_0_0_out_out_full_n sc_in sc_logic 1 signal 8 } 
	{ PAR_R_RINV_val_0_0_out_out_write sc_out sc_logic 1 signal 8 } 
	{ PAR_L_RINV_val_2_2_out_out_din sc_out sc_lv 32 signal 9 } 
	{ PAR_L_RINV_val_2_2_out_out_full_n sc_in sc_logic 1 signal 9 } 
	{ PAR_L_RINV_val_2_2_out_out_write sc_out sc_logic 1 signal 9 } 
	{ PAR_L_RINV_val_2_1_out_out_din sc_out sc_lv 32 signal 10 } 
	{ PAR_L_RINV_val_2_1_out_out_full_n sc_in sc_logic 1 signal 10 } 
	{ PAR_L_RINV_val_2_1_out_out_write sc_out sc_logic 1 signal 10 } 
	{ PAR_L_RINV_val_2_0_out_out_din sc_out sc_lv 32 signal 11 } 
	{ PAR_L_RINV_val_2_0_out_out_full_n sc_in sc_logic 1 signal 11 } 
	{ PAR_L_RINV_val_2_0_out_out_write sc_out sc_logic 1 signal 11 } 
	{ PAR_L_RINV_val_1_2_out_out_din sc_out sc_lv 32 signal 12 } 
	{ PAR_L_RINV_val_1_2_out_out_full_n sc_in sc_logic 1 signal 12 } 
	{ PAR_L_RINV_val_1_2_out_out_write sc_out sc_logic 1 signal 12 } 
	{ PAR_L_RINV_val_1_1_out_out_din sc_out sc_lv 32 signal 13 } 
	{ PAR_L_RINV_val_1_1_out_out_full_n sc_in sc_logic 1 signal 13 } 
	{ PAR_L_RINV_val_1_1_out_out_write sc_out sc_logic 1 signal 13 } 
	{ PAR_L_RINV_val_1_0_out_out_din sc_out sc_lv 32 signal 14 } 
	{ PAR_L_RINV_val_1_0_out_out_full_n sc_in sc_logic 1 signal 14 } 
	{ PAR_L_RINV_val_1_0_out_out_write sc_out sc_logic 1 signal 14 } 
	{ PAR_L_RINV_val_0_2_out_out_din sc_out sc_lv 32 signal 15 } 
	{ PAR_L_RINV_val_0_2_out_out_full_n sc_in sc_logic 1 signal 15 } 
	{ PAR_L_RINV_val_0_2_out_out_write sc_out sc_logic 1 signal 15 } 
	{ PAR_L_RINV_val_0_1_out_out_din sc_out sc_lv 32 signal 16 } 
	{ PAR_L_RINV_val_0_1_out_out_full_n sc_in sc_logic 1 signal 16 } 
	{ PAR_L_RINV_val_0_1_out_out_write sc_out sc_logic 1 signal 16 } 
	{ PAR_L_RINV_val_0_0_out_out_din sc_out sc_lv 32 signal 17 } 
	{ PAR_L_RINV_val_0_0_out_out_full_n sc_in sc_logic 1 signal 17 } 
	{ PAR_L_RINV_val_0_0_out_out_write sc_out sc_logic 1 signal 17 } 
	{ cy2_out_out_din sc_out sc_lv 32 signal 18 } 
	{ cy2_out_out_full_n sc_in sc_logic 1 signal 18 } 
	{ cy2_out_out_write sc_out sc_logic 1 signal 18 } 
	{ fy2_out_out_din sc_out sc_lv 32 signal 19 } 
	{ fy2_out_out_full_n sc_in sc_logic 1 signal 19 } 
	{ fy2_out_out_write sc_out sc_logic 1 signal 19 } 
	{ cx2_out_out_din sc_out sc_lv 32 signal 20 } 
	{ cx2_out_out_full_n sc_in sc_logic 1 signal 20 } 
	{ cx2_out_out_write sc_out sc_logic 1 signal 20 } 
	{ fx2_out_out_din sc_out sc_lv 32 signal 21 } 
	{ fx2_out_out_full_n sc_in sc_logic 1 signal 21 } 
	{ fx2_out_out_write sc_out sc_logic 1 signal 21 } 
	{ cy1_out_out_din sc_out sc_lv 32 signal 22 } 
	{ cy1_out_out_full_n sc_in sc_logic 1 signal 22 } 
	{ cy1_out_out_write sc_out sc_logic 1 signal 22 } 
	{ fy1_out_out_din sc_out sc_lv 32 signal 23 } 
	{ fy1_out_out_full_n sc_in sc_logic 1 signal 23 } 
	{ fy1_out_out_write sc_out sc_logic 1 signal 23 } 
	{ cx1_out_out_din sc_out sc_lv 32 signal 24 } 
	{ cx1_out_out_full_n sc_in sc_logic 1 signal 24 } 
	{ cx1_out_out_write sc_out sc_logic 1 signal 24 } 
	{ fx1_out_out_din sc_out sc_lv 32 signal 25 } 
	{ fx1_out_out_full_n sc_in sc_logic 1 signal 25 } 
	{ fx1_out_out_write sc_out sc_logic 1 signal 25 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "PAR_R_RINV_val_2_2_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_2_out_out", "role": "din" }} , 
 	{ "name": "PAR_R_RINV_val_2_2_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_2_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_R_RINV_val_2_2_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_2_out_out", "role": "write" }} , 
 	{ "name": "PAR_R_RINV_val_2_1_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_1_out_out", "role": "din" }} , 
 	{ "name": "PAR_R_RINV_val_2_1_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_1_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_R_RINV_val_2_1_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_1_out_out", "role": "write" }} , 
 	{ "name": "PAR_R_RINV_val_2_0_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_0_out_out", "role": "din" }} , 
 	{ "name": "PAR_R_RINV_val_2_0_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_0_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_R_RINV_val_2_0_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_0_out_out", "role": "write" }} , 
 	{ "name": "PAR_R_RINV_val_1_2_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_2_out_out", "role": "din" }} , 
 	{ "name": "PAR_R_RINV_val_1_2_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_2_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_R_RINV_val_1_2_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_2_out_out", "role": "write" }} , 
 	{ "name": "PAR_R_RINV_val_1_1_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_1_out_out", "role": "din" }} , 
 	{ "name": "PAR_R_RINV_val_1_1_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_1_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_R_RINV_val_1_1_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_1_out_out", "role": "write" }} , 
 	{ "name": "PAR_R_RINV_val_1_0_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_0_out_out", "role": "din" }} , 
 	{ "name": "PAR_R_RINV_val_1_0_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_0_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_R_RINV_val_1_0_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_0_out_out", "role": "write" }} , 
 	{ "name": "PAR_R_RINV_val_0_2_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_2_out_out", "role": "din" }} , 
 	{ "name": "PAR_R_RINV_val_0_2_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_2_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_R_RINV_val_0_2_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_2_out_out", "role": "write" }} , 
 	{ "name": "PAR_R_RINV_val_0_1_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_1_out_out", "role": "din" }} , 
 	{ "name": "PAR_R_RINV_val_0_1_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_1_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_R_RINV_val_0_1_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_1_out_out", "role": "write" }} , 
 	{ "name": "PAR_R_RINV_val_0_0_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_0_out_out", "role": "din" }} , 
 	{ "name": "PAR_R_RINV_val_0_0_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_0_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_R_RINV_val_0_0_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_0_out_out", "role": "write" }} , 
 	{ "name": "PAR_L_RINV_val_2_2_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_2_out_out", "role": "din" }} , 
 	{ "name": "PAR_L_RINV_val_2_2_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_2_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_L_RINV_val_2_2_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_2_out_out", "role": "write" }} , 
 	{ "name": "PAR_L_RINV_val_2_1_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_1_out_out", "role": "din" }} , 
 	{ "name": "PAR_L_RINV_val_2_1_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_1_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_L_RINV_val_2_1_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_1_out_out", "role": "write" }} , 
 	{ "name": "PAR_L_RINV_val_2_0_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_0_out_out", "role": "din" }} , 
 	{ "name": "PAR_L_RINV_val_2_0_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_0_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_L_RINV_val_2_0_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_0_out_out", "role": "write" }} , 
 	{ "name": "PAR_L_RINV_val_1_2_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_2_out_out", "role": "din" }} , 
 	{ "name": "PAR_L_RINV_val_1_2_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_2_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_L_RINV_val_1_2_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_2_out_out", "role": "write" }} , 
 	{ "name": "PAR_L_RINV_val_1_1_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_1_out_out", "role": "din" }} , 
 	{ "name": "PAR_L_RINV_val_1_1_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_1_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_L_RINV_val_1_1_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_1_out_out", "role": "write" }} , 
 	{ "name": "PAR_L_RINV_val_1_0_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_0_out_out", "role": "din" }} , 
 	{ "name": "PAR_L_RINV_val_1_0_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_0_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_L_RINV_val_1_0_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_0_out_out", "role": "write" }} , 
 	{ "name": "PAR_L_RINV_val_0_2_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_2_out_out", "role": "din" }} , 
 	{ "name": "PAR_L_RINV_val_0_2_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_2_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_L_RINV_val_0_2_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_2_out_out", "role": "write" }} , 
 	{ "name": "PAR_L_RINV_val_0_1_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_1_out_out", "role": "din" }} , 
 	{ "name": "PAR_L_RINV_val_0_1_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_1_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_L_RINV_val_0_1_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_1_out_out", "role": "write" }} , 
 	{ "name": "PAR_L_RINV_val_0_0_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_0_out_out", "role": "din" }} , 
 	{ "name": "PAR_L_RINV_val_0_0_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_0_out_out", "role": "full_n" }} , 
 	{ "name": "PAR_L_RINV_val_0_0_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_0_out_out", "role": "write" }} , 
 	{ "name": "cy2_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cy2_out_out", "role": "din" }} , 
 	{ "name": "cy2_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cy2_out_out", "role": "full_n" }} , 
 	{ "name": "cy2_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cy2_out_out", "role": "write" }} , 
 	{ "name": "fy2_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fy2_out_out", "role": "din" }} , 
 	{ "name": "fy2_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fy2_out_out", "role": "full_n" }} , 
 	{ "name": "fy2_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fy2_out_out", "role": "write" }} , 
 	{ "name": "cx2_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cx2_out_out", "role": "din" }} , 
 	{ "name": "cx2_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cx2_out_out", "role": "full_n" }} , 
 	{ "name": "cx2_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cx2_out_out", "role": "write" }} , 
 	{ "name": "fx2_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fx2_out_out", "role": "din" }} , 
 	{ "name": "fx2_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fx2_out_out", "role": "full_n" }} , 
 	{ "name": "fx2_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fx2_out_out", "role": "write" }} , 
 	{ "name": "cy1_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cy1_out_out", "role": "din" }} , 
 	{ "name": "cy1_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cy1_out_out", "role": "full_n" }} , 
 	{ "name": "cy1_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cy1_out_out", "role": "write" }} , 
 	{ "name": "fy1_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fy1_out_out", "role": "din" }} , 
 	{ "name": "fy1_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fy1_out_out", "role": "full_n" }} , 
 	{ "name": "fy1_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fy1_out_out", "role": "write" }} , 
 	{ "name": "cx1_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cx1_out_out", "role": "din" }} , 
 	{ "name": "cx1_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cx1_out_out", "role": "full_n" }} , 
 	{ "name": "cx1_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cx1_out_out", "role": "write" }} , 
 	{ "name": "fx1_out_out_din", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fx1_out_out", "role": "din" }} , 
 	{ "name": "fx1_out_out_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fx1_out_out", "role": "full_n" }} , 
 	{ "name": "fx1_out_out_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fx1_out_out", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
		"CDFG" : "Loop_2_proc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5", "EstimateLatencyMax" : "5",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "PAR_R_RINV_val_2_2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_2_2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_2_1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_2_1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_2_0_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_2_0_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_1_2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_1_2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_1_1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_1_1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_1_0_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_1_0_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_0_2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_0_2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_0_1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_0_1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_0_0_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_0_0_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_2_2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_2_2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_2_1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_2_1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_2_0_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_2_0_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_1_2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_1_2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_1_1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_1_1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_1_0_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_1_0_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_0_2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_0_2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_0_1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_0_1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_0_0_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_0_0_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cy2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "cy2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fy2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "fy2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cx2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "cx2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fx2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "fx2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cy1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "cy1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fy1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "fy1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cx1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "cx1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fx1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "fx1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RM_INV", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "PAR_L_RM_INV", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "PAR_R_CAMM_RAW", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "PAR_L_CAMM_RAW", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_R_RM_INV_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_L_RM_INV_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_R_CAMM_RAW_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_L_CAMM_RAW_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	Loop_2_proc {
		PAR_R_RINV_val_2_2_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_R_RINV_val_2_1_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_R_RINV_val_2_0_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_R_RINV_val_1_2_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_R_RINV_val_1_1_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_R_RINV_val_1_0_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_R_RINV_val_0_2_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_R_RINV_val_0_1_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_R_RINV_val_0_0_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_L_RINV_val_2_2_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_L_RINV_val_2_1_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_L_RINV_val_2_0_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_L_RINV_val_1_2_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_L_RINV_val_1_1_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_L_RINV_val_1_0_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_L_RINV_val_0_2_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_L_RINV_val_0_1_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_L_RINV_val_0_0_out_out {Type O LastRead -1 FirstWrite 2}
		cy2_out_out {Type O LastRead -1 FirstWrite 2}
		fy2_out_out {Type O LastRead -1 FirstWrite 2}
		cx2_out_out {Type O LastRead -1 FirstWrite 2}
		fx2_out_out {Type O LastRead -1 FirstWrite 2}
		cy1_out_out {Type O LastRead -1 FirstWrite 2}
		fy1_out_out {Type O LastRead -1 FirstWrite 2}
		cx1_out_out {Type O LastRead -1 FirstWrite 2}
		fx1_out_out {Type O LastRead -1 FirstWrite 2}
		PAR_R_RM_INV {Type I LastRead -1 FirstWrite -1}
		PAR_L_RM_INV {Type I LastRead -1 FirstWrite -1}
		PAR_R_CAMM_RAW {Type I LastRead -1 FirstWrite -1}
		PAR_L_CAMM_RAW {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "5", "Max" : "5"}
	, {"Name" : "Interval", "Min" : "5", "Max" : "5"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	PAR_R_RINV_val_2_2_out_out { ap_fifo {  { PAR_R_RINV_val_2_2_out_out_din fifo_data 1 32 }  { PAR_R_RINV_val_2_2_out_out_full_n fifo_status 0 1 }  { PAR_R_RINV_val_2_2_out_out_write fifo_update 1 1 } } }
	PAR_R_RINV_val_2_1_out_out { ap_fifo {  { PAR_R_RINV_val_2_1_out_out_din fifo_data 1 32 }  { PAR_R_RINV_val_2_1_out_out_full_n fifo_status 0 1 }  { PAR_R_RINV_val_2_1_out_out_write fifo_update 1 1 } } }
	PAR_R_RINV_val_2_0_out_out { ap_fifo {  { PAR_R_RINV_val_2_0_out_out_din fifo_data 1 32 }  { PAR_R_RINV_val_2_0_out_out_full_n fifo_status 0 1 }  { PAR_R_RINV_val_2_0_out_out_write fifo_update 1 1 } } }
	PAR_R_RINV_val_1_2_out_out { ap_fifo {  { PAR_R_RINV_val_1_2_out_out_din fifo_data 1 32 }  { PAR_R_RINV_val_1_2_out_out_full_n fifo_status 0 1 }  { PAR_R_RINV_val_1_2_out_out_write fifo_update 1 1 } } }
	PAR_R_RINV_val_1_1_out_out { ap_fifo {  { PAR_R_RINV_val_1_1_out_out_din fifo_data 1 32 }  { PAR_R_RINV_val_1_1_out_out_full_n fifo_status 0 1 }  { PAR_R_RINV_val_1_1_out_out_write fifo_update 1 1 } } }
	PAR_R_RINV_val_1_0_out_out { ap_fifo {  { PAR_R_RINV_val_1_0_out_out_din fifo_data 1 32 }  { PAR_R_RINV_val_1_0_out_out_full_n fifo_status 0 1 }  { PAR_R_RINV_val_1_0_out_out_write fifo_update 1 1 } } }
	PAR_R_RINV_val_0_2_out_out { ap_fifo {  { PAR_R_RINV_val_0_2_out_out_din fifo_data 1 32 }  { PAR_R_RINV_val_0_2_out_out_full_n fifo_status 0 1 }  { PAR_R_RINV_val_0_2_out_out_write fifo_update 1 1 } } }
	PAR_R_RINV_val_0_1_out_out { ap_fifo {  { PAR_R_RINV_val_0_1_out_out_din fifo_data 1 32 }  { PAR_R_RINV_val_0_1_out_out_full_n fifo_status 0 1 }  { PAR_R_RINV_val_0_1_out_out_write fifo_update 1 1 } } }
	PAR_R_RINV_val_0_0_out_out { ap_fifo {  { PAR_R_RINV_val_0_0_out_out_din fifo_data 1 32 }  { PAR_R_RINV_val_0_0_out_out_full_n fifo_status 0 1 }  { PAR_R_RINV_val_0_0_out_out_write fifo_update 1 1 } } }
	PAR_L_RINV_val_2_2_out_out { ap_fifo {  { PAR_L_RINV_val_2_2_out_out_din fifo_data 1 32 }  { PAR_L_RINV_val_2_2_out_out_full_n fifo_status 0 1 }  { PAR_L_RINV_val_2_2_out_out_write fifo_update 1 1 } } }
	PAR_L_RINV_val_2_1_out_out { ap_fifo {  { PAR_L_RINV_val_2_1_out_out_din fifo_data 1 32 }  { PAR_L_RINV_val_2_1_out_out_full_n fifo_status 0 1 }  { PAR_L_RINV_val_2_1_out_out_write fifo_update 1 1 } } }
	PAR_L_RINV_val_2_0_out_out { ap_fifo {  { PAR_L_RINV_val_2_0_out_out_din fifo_data 1 32 }  { PAR_L_RINV_val_2_0_out_out_full_n fifo_status 0 1 }  { PAR_L_RINV_val_2_0_out_out_write fifo_update 1 1 } } }
	PAR_L_RINV_val_1_2_out_out { ap_fifo {  { PAR_L_RINV_val_1_2_out_out_din fifo_data 1 32 }  { PAR_L_RINV_val_1_2_out_out_full_n fifo_status 0 1 }  { PAR_L_RINV_val_1_2_out_out_write fifo_update 1 1 } } }
	PAR_L_RINV_val_1_1_out_out { ap_fifo {  { PAR_L_RINV_val_1_1_out_out_din fifo_data 1 32 }  { PAR_L_RINV_val_1_1_out_out_full_n fifo_status 0 1 }  { PAR_L_RINV_val_1_1_out_out_write fifo_update 1 1 } } }
	PAR_L_RINV_val_1_0_out_out { ap_fifo {  { PAR_L_RINV_val_1_0_out_out_din fifo_data 1 32 }  { PAR_L_RINV_val_1_0_out_out_full_n fifo_status 0 1 }  { PAR_L_RINV_val_1_0_out_out_write fifo_update 1 1 } } }
	PAR_L_RINV_val_0_2_out_out { ap_fifo {  { PAR_L_RINV_val_0_2_out_out_din fifo_data 1 32 }  { PAR_L_RINV_val_0_2_out_out_full_n fifo_status 0 1 }  { PAR_L_RINV_val_0_2_out_out_write fifo_update 1 1 } } }
	PAR_L_RINV_val_0_1_out_out { ap_fifo {  { PAR_L_RINV_val_0_1_out_out_din fifo_data 1 32 }  { PAR_L_RINV_val_0_1_out_out_full_n fifo_status 0 1 }  { PAR_L_RINV_val_0_1_out_out_write fifo_update 1 1 } } }
	PAR_L_RINV_val_0_0_out_out { ap_fifo {  { PAR_L_RINV_val_0_0_out_out_din fifo_data 1 32 }  { PAR_L_RINV_val_0_0_out_out_full_n fifo_status 0 1 }  { PAR_L_RINV_val_0_0_out_out_write fifo_update 1 1 } } }
	cy2_out_out { ap_fifo {  { cy2_out_out_din fifo_data 1 32 }  { cy2_out_out_full_n fifo_status 0 1 }  { cy2_out_out_write fifo_update 1 1 } } }
	fy2_out_out { ap_fifo {  { fy2_out_out_din fifo_data 1 32 }  { fy2_out_out_full_n fifo_status 0 1 }  { fy2_out_out_write fifo_update 1 1 } } }
	cx2_out_out { ap_fifo {  { cx2_out_out_din fifo_data 1 32 }  { cx2_out_out_full_n fifo_status 0 1 }  { cx2_out_out_write fifo_update 1 1 } } }
	fx2_out_out { ap_fifo {  { fx2_out_out_din fifo_data 1 32 }  { fx2_out_out_full_n fifo_status 0 1 }  { fx2_out_out_write fifo_update 1 1 } } }
	cy1_out_out { ap_fifo {  { cy1_out_out_din fifo_data 1 32 }  { cy1_out_out_full_n fifo_status 0 1 }  { cy1_out_out_write fifo_update 1 1 } } }
	fy1_out_out { ap_fifo {  { fy1_out_out_din fifo_data 1 32 }  { fy1_out_out_full_n fifo_status 0 1 }  { fy1_out_out_write fifo_update 1 1 } } }
	cx1_out_out { ap_fifo {  { cx1_out_out_din fifo_data 1 32 }  { cx1_out_out_full_n fifo_status 0 1 }  { cx1_out_out_write fifo_update 1 1 } } }
	fx1_out_out { ap_fifo {  { fx1_out_out_din fifo_data 1 32 }  { fx1_out_out_full_n fifo_status 0 1 }  { fx1_out_out_write fifo_update 1 1 } } }
}
