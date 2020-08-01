set moduleName Loop_Loop_Row_proc
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
set C_modelName {Loop_Loop_Row_proc}
set C_modelType { void 0 }
set C_modelArgList {
	{ fx1_loc float 32 regular {fifo 0}  }
	{ fx2_loc float 32 regular {fifo 0}  }
	{ fy1_loc float 32 regular {fifo 0}  }
	{ fy2_loc float 32 regular {fifo 0}  }
	{ cx1_loc float 32 regular {fifo 0}  }
	{ cx2_loc float 32 regular {fifo 0}  }
	{ cy1_loc float 32 regular {fifo 0}  }
	{ cy2_loc float 32 regular {fifo 0}  }
	{ rows_V int 32 regular {ap_stable 0} }
	{ cols_V int 32 regular {ap_stable 0} }
	{ dMap_data_stream_0_V int 8 regular {fifo 1 volatile }  }
	{ PAR_L_RINV_val_0_0_loc float 32 regular {fifo 0}  }
	{ PAR_L_RINV_val_0_1_loc float 32 regular {fifo 0}  }
	{ PAR_L_RINV_val_0_2_loc float 32 regular {fifo 0}  }
	{ PAR_L_RINV_val_1_0_loc float 32 regular {fifo 0}  }
	{ PAR_L_RINV_val_1_1_loc float 32 regular {fifo 0}  }
	{ PAR_L_RINV_val_1_2_loc float 32 regular {fifo 0}  }
	{ PAR_L_RINV_val_2_0_loc float 32 regular {fifo 0}  }
	{ PAR_L_RINV_val_2_1_loc float 32 regular {fifo 0}  }
	{ PAR_L_RINV_val_2_2_loc float 32 regular {fifo 0}  }
	{ PAR_R_RINV_val_0_0_loc float 32 regular {fifo 0}  }
	{ PAR_R_RINV_val_0_1_loc float 32 regular {fifo 0}  }
	{ PAR_R_RINV_val_0_2_loc float 32 regular {fifo 0}  }
	{ PAR_R_RINV_val_1_0_loc float 32 regular {fifo 0}  }
	{ PAR_R_RINV_val_1_1_loc float 32 regular {fifo 0}  }
	{ PAR_R_RINV_val_1_2_loc float 32 regular {fifo 0}  }
	{ PAR_R_RINV_val_2_0_loc float 32 regular {fifo 0}  }
	{ PAR_R_RINV_val_2_1_loc float 32 regular {fifo 0}  }
	{ PAR_R_RINV_val_2_2_loc float 32 regular {fifo 0}  }
	{ leftImage_in_V int 8 regular {array 97200 { 1 1 } 1 1 }  }
	{ rightImage_in_V int 8 regular {array 97200 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "fx1_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "fx2_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "fy1_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "fy2_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "cx1_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "cx2_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "cy1_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "cy2_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "rows_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "cols_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "dMap_data_stream_0_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_0_0_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_0_1_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_0_2_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_1_0_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_1_1_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_1_2_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_2_0_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_2_1_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_L_RINV_val_2_2_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_0_0_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_0_1_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_0_2_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_1_0_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_1_1_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_1_2_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_2_0_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_2_1_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "PAR_R_RINV_val_2_2_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "leftImage_in_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "rightImage_in_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 102
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ fx1_loc_dout sc_in sc_lv 32 signal 0 } 
	{ fx1_loc_empty_n sc_in sc_logic 1 signal 0 } 
	{ fx1_loc_read sc_out sc_logic 1 signal 0 } 
	{ fx2_loc_dout sc_in sc_lv 32 signal 1 } 
	{ fx2_loc_empty_n sc_in sc_logic 1 signal 1 } 
	{ fx2_loc_read sc_out sc_logic 1 signal 1 } 
	{ fy1_loc_dout sc_in sc_lv 32 signal 2 } 
	{ fy1_loc_empty_n sc_in sc_logic 1 signal 2 } 
	{ fy1_loc_read sc_out sc_logic 1 signal 2 } 
	{ fy2_loc_dout sc_in sc_lv 32 signal 3 } 
	{ fy2_loc_empty_n sc_in sc_logic 1 signal 3 } 
	{ fy2_loc_read sc_out sc_logic 1 signal 3 } 
	{ cx1_loc_dout sc_in sc_lv 32 signal 4 } 
	{ cx1_loc_empty_n sc_in sc_logic 1 signal 4 } 
	{ cx1_loc_read sc_out sc_logic 1 signal 4 } 
	{ cx2_loc_dout sc_in sc_lv 32 signal 5 } 
	{ cx2_loc_empty_n sc_in sc_logic 1 signal 5 } 
	{ cx2_loc_read sc_out sc_logic 1 signal 5 } 
	{ cy1_loc_dout sc_in sc_lv 32 signal 6 } 
	{ cy1_loc_empty_n sc_in sc_logic 1 signal 6 } 
	{ cy1_loc_read sc_out sc_logic 1 signal 6 } 
	{ cy2_loc_dout sc_in sc_lv 32 signal 7 } 
	{ cy2_loc_empty_n sc_in sc_logic 1 signal 7 } 
	{ cy2_loc_read sc_out sc_logic 1 signal 7 } 
	{ rows_V sc_in sc_lv 32 signal 8 } 
	{ cols_V sc_in sc_lv 32 signal 9 } 
	{ dMap_data_stream_0_V_din sc_out sc_lv 8 signal 10 } 
	{ dMap_data_stream_0_V_full_n sc_in sc_logic 1 signal 10 } 
	{ dMap_data_stream_0_V_write sc_out sc_logic 1 signal 10 } 
	{ PAR_L_RINV_val_0_0_loc_dout sc_in sc_lv 32 signal 11 } 
	{ PAR_L_RINV_val_0_0_loc_empty_n sc_in sc_logic 1 signal 11 } 
	{ PAR_L_RINV_val_0_0_loc_read sc_out sc_logic 1 signal 11 } 
	{ PAR_L_RINV_val_0_1_loc_dout sc_in sc_lv 32 signal 12 } 
	{ PAR_L_RINV_val_0_1_loc_empty_n sc_in sc_logic 1 signal 12 } 
	{ PAR_L_RINV_val_0_1_loc_read sc_out sc_logic 1 signal 12 } 
	{ PAR_L_RINV_val_0_2_loc_dout sc_in sc_lv 32 signal 13 } 
	{ PAR_L_RINV_val_0_2_loc_empty_n sc_in sc_logic 1 signal 13 } 
	{ PAR_L_RINV_val_0_2_loc_read sc_out sc_logic 1 signal 13 } 
	{ PAR_L_RINV_val_1_0_loc_dout sc_in sc_lv 32 signal 14 } 
	{ PAR_L_RINV_val_1_0_loc_empty_n sc_in sc_logic 1 signal 14 } 
	{ PAR_L_RINV_val_1_0_loc_read sc_out sc_logic 1 signal 14 } 
	{ PAR_L_RINV_val_1_1_loc_dout sc_in sc_lv 32 signal 15 } 
	{ PAR_L_RINV_val_1_1_loc_empty_n sc_in sc_logic 1 signal 15 } 
	{ PAR_L_RINV_val_1_1_loc_read sc_out sc_logic 1 signal 15 } 
	{ PAR_L_RINV_val_1_2_loc_dout sc_in sc_lv 32 signal 16 } 
	{ PAR_L_RINV_val_1_2_loc_empty_n sc_in sc_logic 1 signal 16 } 
	{ PAR_L_RINV_val_1_2_loc_read sc_out sc_logic 1 signal 16 } 
	{ PAR_L_RINV_val_2_0_loc_dout sc_in sc_lv 32 signal 17 } 
	{ PAR_L_RINV_val_2_0_loc_empty_n sc_in sc_logic 1 signal 17 } 
	{ PAR_L_RINV_val_2_0_loc_read sc_out sc_logic 1 signal 17 } 
	{ PAR_L_RINV_val_2_1_loc_dout sc_in sc_lv 32 signal 18 } 
	{ PAR_L_RINV_val_2_1_loc_empty_n sc_in sc_logic 1 signal 18 } 
	{ PAR_L_RINV_val_2_1_loc_read sc_out sc_logic 1 signal 18 } 
	{ PAR_L_RINV_val_2_2_loc_dout sc_in sc_lv 32 signal 19 } 
	{ PAR_L_RINV_val_2_2_loc_empty_n sc_in sc_logic 1 signal 19 } 
	{ PAR_L_RINV_val_2_2_loc_read sc_out sc_logic 1 signal 19 } 
	{ PAR_R_RINV_val_0_0_loc_dout sc_in sc_lv 32 signal 20 } 
	{ PAR_R_RINV_val_0_0_loc_empty_n sc_in sc_logic 1 signal 20 } 
	{ PAR_R_RINV_val_0_0_loc_read sc_out sc_logic 1 signal 20 } 
	{ PAR_R_RINV_val_0_1_loc_dout sc_in sc_lv 32 signal 21 } 
	{ PAR_R_RINV_val_0_1_loc_empty_n sc_in sc_logic 1 signal 21 } 
	{ PAR_R_RINV_val_0_1_loc_read sc_out sc_logic 1 signal 21 } 
	{ PAR_R_RINV_val_0_2_loc_dout sc_in sc_lv 32 signal 22 } 
	{ PAR_R_RINV_val_0_2_loc_empty_n sc_in sc_logic 1 signal 22 } 
	{ PAR_R_RINV_val_0_2_loc_read sc_out sc_logic 1 signal 22 } 
	{ PAR_R_RINV_val_1_0_loc_dout sc_in sc_lv 32 signal 23 } 
	{ PAR_R_RINV_val_1_0_loc_empty_n sc_in sc_logic 1 signal 23 } 
	{ PAR_R_RINV_val_1_0_loc_read sc_out sc_logic 1 signal 23 } 
	{ PAR_R_RINV_val_1_1_loc_dout sc_in sc_lv 32 signal 24 } 
	{ PAR_R_RINV_val_1_1_loc_empty_n sc_in sc_logic 1 signal 24 } 
	{ PAR_R_RINV_val_1_1_loc_read sc_out sc_logic 1 signal 24 } 
	{ PAR_R_RINV_val_1_2_loc_dout sc_in sc_lv 32 signal 25 } 
	{ PAR_R_RINV_val_1_2_loc_empty_n sc_in sc_logic 1 signal 25 } 
	{ PAR_R_RINV_val_1_2_loc_read sc_out sc_logic 1 signal 25 } 
	{ PAR_R_RINV_val_2_0_loc_dout sc_in sc_lv 32 signal 26 } 
	{ PAR_R_RINV_val_2_0_loc_empty_n sc_in sc_logic 1 signal 26 } 
	{ PAR_R_RINV_val_2_0_loc_read sc_out sc_logic 1 signal 26 } 
	{ PAR_R_RINV_val_2_1_loc_dout sc_in sc_lv 32 signal 27 } 
	{ PAR_R_RINV_val_2_1_loc_empty_n sc_in sc_logic 1 signal 27 } 
	{ PAR_R_RINV_val_2_1_loc_read sc_out sc_logic 1 signal 27 } 
	{ PAR_R_RINV_val_2_2_loc_dout sc_in sc_lv 32 signal 28 } 
	{ PAR_R_RINV_val_2_2_loc_empty_n sc_in sc_logic 1 signal 28 } 
	{ PAR_R_RINV_val_2_2_loc_read sc_out sc_logic 1 signal 28 } 
	{ leftImage_in_V_address0 sc_out sc_lv 17 signal 29 } 
	{ leftImage_in_V_ce0 sc_out sc_logic 1 signal 29 } 
	{ leftImage_in_V_q0 sc_in sc_lv 8 signal 29 } 
	{ leftImage_in_V_address1 sc_out sc_lv 17 signal 29 } 
	{ leftImage_in_V_ce1 sc_out sc_logic 1 signal 29 } 
	{ leftImage_in_V_q1 sc_in sc_lv 8 signal 29 } 
	{ rightImage_in_V_address0 sc_out sc_lv 17 signal 30 } 
	{ rightImage_in_V_ce0 sc_out sc_logic 1 signal 30 } 
	{ rightImage_in_V_q0 sc_in sc_lv 8 signal 30 } 
	{ rightImage_in_V_address1 sc_out sc_lv 17 signal 30 } 
	{ rightImage_in_V_ce1 sc_out sc_logic 1 signal 30 } 
	{ rightImage_in_V_q1 sc_in sc_lv 8 signal 30 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "fx1_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fx1_loc", "role": "dout" }} , 
 	{ "name": "fx1_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fx1_loc", "role": "empty_n" }} , 
 	{ "name": "fx1_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fx1_loc", "role": "read" }} , 
 	{ "name": "fx2_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fx2_loc", "role": "dout" }} , 
 	{ "name": "fx2_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fx2_loc", "role": "empty_n" }} , 
 	{ "name": "fx2_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fx2_loc", "role": "read" }} , 
 	{ "name": "fy1_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fy1_loc", "role": "dout" }} , 
 	{ "name": "fy1_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fy1_loc", "role": "empty_n" }} , 
 	{ "name": "fy1_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fy1_loc", "role": "read" }} , 
 	{ "name": "fy2_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fy2_loc", "role": "dout" }} , 
 	{ "name": "fy2_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fy2_loc", "role": "empty_n" }} , 
 	{ "name": "fy2_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fy2_loc", "role": "read" }} , 
 	{ "name": "cx1_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cx1_loc", "role": "dout" }} , 
 	{ "name": "cx1_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cx1_loc", "role": "empty_n" }} , 
 	{ "name": "cx1_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cx1_loc", "role": "read" }} , 
 	{ "name": "cx2_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cx2_loc", "role": "dout" }} , 
 	{ "name": "cx2_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cx2_loc", "role": "empty_n" }} , 
 	{ "name": "cx2_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cx2_loc", "role": "read" }} , 
 	{ "name": "cy1_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cy1_loc", "role": "dout" }} , 
 	{ "name": "cy1_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cy1_loc", "role": "empty_n" }} , 
 	{ "name": "cy1_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cy1_loc", "role": "read" }} , 
 	{ "name": "cy2_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cy2_loc", "role": "dout" }} , 
 	{ "name": "cy2_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cy2_loc", "role": "empty_n" }} , 
 	{ "name": "cy2_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "cy2_loc", "role": "read" }} , 
 	{ "name": "rows_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rows_V", "role": "default" }} , 
 	{ "name": "cols_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cols_V", "role": "default" }} , 
 	{ "name": "dMap_data_stream_0_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dMap_data_stream_0_V", "role": "din" }} , 
 	{ "name": "dMap_data_stream_0_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dMap_data_stream_0_V", "role": "full_n" }} , 
 	{ "name": "dMap_data_stream_0_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dMap_data_stream_0_V", "role": "write" }} , 
 	{ "name": "PAR_L_RINV_val_0_0_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_0_loc", "role": "dout" }} , 
 	{ "name": "PAR_L_RINV_val_0_0_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_0_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_L_RINV_val_0_0_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_0_loc", "role": "read" }} , 
 	{ "name": "PAR_L_RINV_val_0_1_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_1_loc", "role": "dout" }} , 
 	{ "name": "PAR_L_RINV_val_0_1_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_1_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_L_RINV_val_0_1_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_1_loc", "role": "read" }} , 
 	{ "name": "PAR_L_RINV_val_0_2_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_2_loc", "role": "dout" }} , 
 	{ "name": "PAR_L_RINV_val_0_2_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_2_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_L_RINV_val_0_2_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_0_2_loc", "role": "read" }} , 
 	{ "name": "PAR_L_RINV_val_1_0_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_0_loc", "role": "dout" }} , 
 	{ "name": "PAR_L_RINV_val_1_0_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_0_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_L_RINV_val_1_0_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_0_loc", "role": "read" }} , 
 	{ "name": "PAR_L_RINV_val_1_1_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_1_loc", "role": "dout" }} , 
 	{ "name": "PAR_L_RINV_val_1_1_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_1_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_L_RINV_val_1_1_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_1_loc", "role": "read" }} , 
 	{ "name": "PAR_L_RINV_val_1_2_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_2_loc", "role": "dout" }} , 
 	{ "name": "PAR_L_RINV_val_1_2_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_2_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_L_RINV_val_1_2_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_1_2_loc", "role": "read" }} , 
 	{ "name": "PAR_L_RINV_val_2_0_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_0_loc", "role": "dout" }} , 
 	{ "name": "PAR_L_RINV_val_2_0_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_0_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_L_RINV_val_2_0_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_0_loc", "role": "read" }} , 
 	{ "name": "PAR_L_RINV_val_2_1_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_1_loc", "role": "dout" }} , 
 	{ "name": "PAR_L_RINV_val_2_1_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_1_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_L_RINV_val_2_1_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_1_loc", "role": "read" }} , 
 	{ "name": "PAR_L_RINV_val_2_2_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_2_loc", "role": "dout" }} , 
 	{ "name": "PAR_L_RINV_val_2_2_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_2_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_L_RINV_val_2_2_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_L_RINV_val_2_2_loc", "role": "read" }} , 
 	{ "name": "PAR_R_RINV_val_0_0_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_0_loc", "role": "dout" }} , 
 	{ "name": "PAR_R_RINV_val_0_0_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_0_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_R_RINV_val_0_0_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_0_loc", "role": "read" }} , 
 	{ "name": "PAR_R_RINV_val_0_1_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_1_loc", "role": "dout" }} , 
 	{ "name": "PAR_R_RINV_val_0_1_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_1_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_R_RINV_val_0_1_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_1_loc", "role": "read" }} , 
 	{ "name": "PAR_R_RINV_val_0_2_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_2_loc", "role": "dout" }} , 
 	{ "name": "PAR_R_RINV_val_0_2_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_2_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_R_RINV_val_0_2_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_0_2_loc", "role": "read" }} , 
 	{ "name": "PAR_R_RINV_val_1_0_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_0_loc", "role": "dout" }} , 
 	{ "name": "PAR_R_RINV_val_1_0_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_0_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_R_RINV_val_1_0_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_0_loc", "role": "read" }} , 
 	{ "name": "PAR_R_RINV_val_1_1_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_1_loc", "role": "dout" }} , 
 	{ "name": "PAR_R_RINV_val_1_1_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_1_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_R_RINV_val_1_1_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_1_loc", "role": "read" }} , 
 	{ "name": "PAR_R_RINV_val_1_2_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_2_loc", "role": "dout" }} , 
 	{ "name": "PAR_R_RINV_val_1_2_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_2_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_R_RINV_val_1_2_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_1_2_loc", "role": "read" }} , 
 	{ "name": "PAR_R_RINV_val_2_0_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_0_loc", "role": "dout" }} , 
 	{ "name": "PAR_R_RINV_val_2_0_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_0_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_R_RINV_val_2_0_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_0_loc", "role": "read" }} , 
 	{ "name": "PAR_R_RINV_val_2_1_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_1_loc", "role": "dout" }} , 
 	{ "name": "PAR_R_RINV_val_2_1_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_1_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_R_RINV_val_2_1_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_1_loc", "role": "read" }} , 
 	{ "name": "PAR_R_RINV_val_2_2_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_2_loc", "role": "dout" }} , 
 	{ "name": "PAR_R_RINV_val_2_2_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_2_loc", "role": "empty_n" }} , 
 	{ "name": "PAR_R_RINV_val_2_2_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "PAR_R_RINV_val_2_2_loc", "role": "read" }} , 
 	{ "name": "leftImage_in_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "address0" }} , 
 	{ "name": "leftImage_in_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "ce0" }} , 
 	{ "name": "leftImage_in_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "q0" }} , 
 	{ "name": "leftImage_in_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "address1" }} , 
 	{ "name": "leftImage_in_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "ce1" }} , 
 	{ "name": "leftImage_in_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "q1" }} , 
 	{ "name": "rightImage_in_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "address0" }} , 
 	{ "name": "rightImage_in_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "ce0" }} , 
 	{ "name": "rightImage_in_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "q0" }} , 
 	{ "name": "rightImage_in_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "address1" }} , 
 	{ "name": "rightImage_in_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "ce1" }} , 
 	{ "name": "rightImage_in_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73"],
		"CDFG" : "Loop_Loop_Row_proc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "fx1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "fx1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fx2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "fx2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fy1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "fy1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fy2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "fy2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cx1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "cx1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cx2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "cx2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cy1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "cy1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cy2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "cy2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "rows_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "cols_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "dMap_data_stream_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "dMap_data_stream_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_0_0_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_0_0_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_0_1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_0_1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_0_2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_0_2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_1_0_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_1_0_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_1_1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_1_1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_1_2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_1_2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_2_0_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_2_0_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_2_1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_2_1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_2_2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_2_2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_0_0_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_0_0_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_0_1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_0_1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_0_2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_0_2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_1_0_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_1_0_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_1_1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_1_1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_1_2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_1_2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_2_0_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_2_0_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_2_1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_2_1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_2_2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_2_2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "leftImage_in_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "rightImage_in_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "cost_d_temp_right_V_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "pixel_values_right_V", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_floor_fu_2079", "Port" : "mask_table1"}]},
			{"Name" : "exponentials_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.exponentials_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_15_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_14_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_13_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_12_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_11_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_10_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_9_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_8_V_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_7_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_6_V_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_5_V_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_4_V_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_3_V_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_2_V_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_1_V_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_0_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pixel_values_left_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_floor_fu_2079", "Parent" : "0", "Child" : ["20"],
		"CDFG" : "floor",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "None", "Direction" : "I"},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_floor_fu_2079.mask_table1_U", "Parent" : "19"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_faddxdS_U42", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_faddxdS_U43", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_faddxdS_U44", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_faddxdS_U45", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_fmulyd2_U46", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_fmulyd2_U47", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_fmulyd2_U48", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_fmulyd2_U49", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_fdivzec_U50", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_uitoAem_U51", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_sitoBew_U52", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_fpexCeG_U53", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_fcmpDeQ_U54", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_dcmpEe0_U55", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_uitoFfa_U56", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_uitoFfa_U57", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_Gfk_U58", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_Hfu_U59", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mac_IfE_U60", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_Hfu_U61", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mac_IfE_U62", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U63", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U64", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U65", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U66", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U67", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U68", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U69", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U70", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U71", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U72", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U73", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U74", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U75", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U76", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U77", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U78", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U79", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U80", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U81", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U82", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U83", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U84", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U85", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U86", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U87", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U88", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U89", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U90", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U91", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U92", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U93", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_JfO_U94", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	Loop_Loop_Row_proc {
		fx1_loc {Type I LastRead 0 FirstWrite -1}
		fx2_loc {Type I LastRead 0 FirstWrite -1}
		fy1_loc {Type I LastRead 0 FirstWrite -1}
		fy2_loc {Type I LastRead 0 FirstWrite -1}
		cx1_loc {Type I LastRead 0 FirstWrite -1}
		cx2_loc {Type I LastRead 0 FirstWrite -1}
		cy1_loc {Type I LastRead 0 FirstWrite -1}
		cy2_loc {Type I LastRead 0 FirstWrite -1}
		rows_V {Type I LastRead 3 FirstWrite -1}
		cols_V {Type I LastRead 3 FirstWrite -1}
		dMap_data_stream_0_V {Type O LastRead -1 FirstWrite 211}
		PAR_L_RINV_val_0_0_loc {Type I LastRead 0 FirstWrite -1}
		PAR_L_RINV_val_0_1_loc {Type I LastRead 0 FirstWrite -1}
		PAR_L_RINV_val_0_2_loc {Type I LastRead 0 FirstWrite -1}
		PAR_L_RINV_val_1_0_loc {Type I LastRead 0 FirstWrite -1}
		PAR_L_RINV_val_1_1_loc {Type I LastRead 0 FirstWrite -1}
		PAR_L_RINV_val_1_2_loc {Type I LastRead 0 FirstWrite -1}
		PAR_L_RINV_val_2_0_loc {Type I LastRead 0 FirstWrite -1}
		PAR_L_RINV_val_2_1_loc {Type I LastRead 0 FirstWrite -1}
		PAR_L_RINV_val_2_2_loc {Type I LastRead 0 FirstWrite -1}
		PAR_R_RINV_val_0_0_loc {Type I LastRead 0 FirstWrite -1}
		PAR_R_RINV_val_0_1_loc {Type I LastRead 0 FirstWrite -1}
		PAR_R_RINV_val_0_2_loc {Type I LastRead 0 FirstWrite -1}
		PAR_R_RINV_val_1_0_loc {Type I LastRead 0 FirstWrite -1}
		PAR_R_RINV_val_1_1_loc {Type I LastRead 0 FirstWrite -1}
		PAR_R_RINV_val_1_2_loc {Type I LastRead 0 FirstWrite -1}
		PAR_R_RINV_val_2_0_loc {Type I LastRead 0 FirstWrite -1}
		PAR_R_RINV_val_2_1_loc {Type I LastRead 0 FirstWrite -1}
		PAR_R_RINV_val_2_2_loc {Type I LastRead 0 FirstWrite -1}
		leftImage_in_V {Type I LastRead 134 FirstWrite -1}
		rightImage_in_V {Type I LastRead 158 FirstWrite -1}
		cost_d_temp_right_V_15 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_14 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_13 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_12 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_11 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_10 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_9 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_8 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_7 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_6 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_5 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_4 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_3 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_2 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_1 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_s {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_14 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_13 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_12 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_11 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_10 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_9 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_8 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_7 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_6 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_5 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_4 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_3 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_2 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V_1 {Type IO LastRead -1 FirstWrite -1}
		pixel_values_right_V {Type IO LastRead -1 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}
		exponentials_V {Type I LastRead -1 FirstWrite -1}}
	floor {
		x {Type I LastRead 0 FirstWrite -1}
		mask_table1 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	fx1_loc { ap_fifo {  { fx1_loc_dout fifo_data 0 32 }  { fx1_loc_empty_n fifo_status 0 1 }  { fx1_loc_read fifo_update 1 1 } } }
	fx2_loc { ap_fifo {  { fx2_loc_dout fifo_data 0 32 }  { fx2_loc_empty_n fifo_status 0 1 }  { fx2_loc_read fifo_update 1 1 } } }
	fy1_loc { ap_fifo {  { fy1_loc_dout fifo_data 0 32 }  { fy1_loc_empty_n fifo_status 0 1 }  { fy1_loc_read fifo_update 1 1 } } }
	fy2_loc { ap_fifo {  { fy2_loc_dout fifo_data 0 32 }  { fy2_loc_empty_n fifo_status 0 1 }  { fy2_loc_read fifo_update 1 1 } } }
	cx1_loc { ap_fifo {  { cx1_loc_dout fifo_data 0 32 }  { cx1_loc_empty_n fifo_status 0 1 }  { cx1_loc_read fifo_update 1 1 } } }
	cx2_loc { ap_fifo {  { cx2_loc_dout fifo_data 0 32 }  { cx2_loc_empty_n fifo_status 0 1 }  { cx2_loc_read fifo_update 1 1 } } }
	cy1_loc { ap_fifo {  { cy1_loc_dout fifo_data 0 32 }  { cy1_loc_empty_n fifo_status 0 1 }  { cy1_loc_read fifo_update 1 1 } } }
	cy2_loc { ap_fifo {  { cy2_loc_dout fifo_data 0 32 }  { cy2_loc_empty_n fifo_status 0 1 }  { cy2_loc_read fifo_update 1 1 } } }
	rows_V { ap_stable {  { rows_V in_data 0 32 } } }
	cols_V { ap_stable {  { cols_V in_data 0 32 } } }
	dMap_data_stream_0_V { ap_fifo {  { dMap_data_stream_0_V_din fifo_data 1 8 }  { dMap_data_stream_0_V_full_n fifo_status 0 1 }  { dMap_data_stream_0_V_write fifo_update 1 1 } } }
	PAR_L_RINV_val_0_0_loc { ap_fifo {  { PAR_L_RINV_val_0_0_loc_dout fifo_data 0 32 }  { PAR_L_RINV_val_0_0_loc_empty_n fifo_status 0 1 }  { PAR_L_RINV_val_0_0_loc_read fifo_update 1 1 } } }
	PAR_L_RINV_val_0_1_loc { ap_fifo {  { PAR_L_RINV_val_0_1_loc_dout fifo_data 0 32 }  { PAR_L_RINV_val_0_1_loc_empty_n fifo_status 0 1 }  { PAR_L_RINV_val_0_1_loc_read fifo_update 1 1 } } }
	PAR_L_RINV_val_0_2_loc { ap_fifo {  { PAR_L_RINV_val_0_2_loc_dout fifo_data 0 32 }  { PAR_L_RINV_val_0_2_loc_empty_n fifo_status 0 1 }  { PAR_L_RINV_val_0_2_loc_read fifo_update 1 1 } } }
	PAR_L_RINV_val_1_0_loc { ap_fifo {  { PAR_L_RINV_val_1_0_loc_dout fifo_data 0 32 }  { PAR_L_RINV_val_1_0_loc_empty_n fifo_status 0 1 }  { PAR_L_RINV_val_1_0_loc_read fifo_update 1 1 } } }
	PAR_L_RINV_val_1_1_loc { ap_fifo {  { PAR_L_RINV_val_1_1_loc_dout fifo_data 0 32 }  { PAR_L_RINV_val_1_1_loc_empty_n fifo_status 0 1 }  { PAR_L_RINV_val_1_1_loc_read fifo_update 1 1 } } }
	PAR_L_RINV_val_1_2_loc { ap_fifo {  { PAR_L_RINV_val_1_2_loc_dout fifo_data 0 32 }  { PAR_L_RINV_val_1_2_loc_empty_n fifo_status 0 1 }  { PAR_L_RINV_val_1_2_loc_read fifo_update 1 1 } } }
	PAR_L_RINV_val_2_0_loc { ap_fifo {  { PAR_L_RINV_val_2_0_loc_dout fifo_data 0 32 }  { PAR_L_RINV_val_2_0_loc_empty_n fifo_status 0 1 }  { PAR_L_RINV_val_2_0_loc_read fifo_update 1 1 } } }
	PAR_L_RINV_val_2_1_loc { ap_fifo {  { PAR_L_RINV_val_2_1_loc_dout fifo_data 0 32 }  { PAR_L_RINV_val_2_1_loc_empty_n fifo_status 0 1 }  { PAR_L_RINV_val_2_1_loc_read fifo_update 1 1 } } }
	PAR_L_RINV_val_2_2_loc { ap_fifo {  { PAR_L_RINV_val_2_2_loc_dout fifo_data 0 32 }  { PAR_L_RINV_val_2_2_loc_empty_n fifo_status 0 1 }  { PAR_L_RINV_val_2_2_loc_read fifo_update 1 1 } } }
	PAR_R_RINV_val_0_0_loc { ap_fifo {  { PAR_R_RINV_val_0_0_loc_dout fifo_data 0 32 }  { PAR_R_RINV_val_0_0_loc_empty_n fifo_status 0 1 }  { PAR_R_RINV_val_0_0_loc_read fifo_update 1 1 } } }
	PAR_R_RINV_val_0_1_loc { ap_fifo {  { PAR_R_RINV_val_0_1_loc_dout fifo_data 0 32 }  { PAR_R_RINV_val_0_1_loc_empty_n fifo_status 0 1 }  { PAR_R_RINV_val_0_1_loc_read fifo_update 1 1 } } }
	PAR_R_RINV_val_0_2_loc { ap_fifo {  { PAR_R_RINV_val_0_2_loc_dout fifo_data 0 32 }  { PAR_R_RINV_val_0_2_loc_empty_n fifo_status 0 1 }  { PAR_R_RINV_val_0_2_loc_read fifo_update 1 1 } } }
	PAR_R_RINV_val_1_0_loc { ap_fifo {  { PAR_R_RINV_val_1_0_loc_dout fifo_data 0 32 }  { PAR_R_RINV_val_1_0_loc_empty_n fifo_status 0 1 }  { PAR_R_RINV_val_1_0_loc_read fifo_update 1 1 } } }
	PAR_R_RINV_val_1_1_loc { ap_fifo {  { PAR_R_RINV_val_1_1_loc_dout fifo_data 0 32 }  { PAR_R_RINV_val_1_1_loc_empty_n fifo_status 0 1 }  { PAR_R_RINV_val_1_1_loc_read fifo_update 1 1 } } }
	PAR_R_RINV_val_1_2_loc { ap_fifo {  { PAR_R_RINV_val_1_2_loc_dout fifo_data 0 32 }  { PAR_R_RINV_val_1_2_loc_empty_n fifo_status 0 1 }  { PAR_R_RINV_val_1_2_loc_read fifo_update 1 1 } } }
	PAR_R_RINV_val_2_0_loc { ap_fifo {  { PAR_R_RINV_val_2_0_loc_dout fifo_data 0 32 }  { PAR_R_RINV_val_2_0_loc_empty_n fifo_status 0 1 }  { PAR_R_RINV_val_2_0_loc_read fifo_update 1 1 } } }
	PAR_R_RINV_val_2_1_loc { ap_fifo {  { PAR_R_RINV_val_2_1_loc_dout fifo_data 0 32 }  { PAR_R_RINV_val_2_1_loc_empty_n fifo_status 0 1 }  { PAR_R_RINV_val_2_1_loc_read fifo_update 1 1 } } }
	PAR_R_RINV_val_2_2_loc { ap_fifo {  { PAR_R_RINV_val_2_2_loc_dout fifo_data 0 32 }  { PAR_R_RINV_val_2_2_loc_empty_n fifo_status 0 1 }  { PAR_R_RINV_val_2_2_loc_read fifo_update 1 1 } } }
	leftImage_in_V { ap_memory {  { leftImage_in_V_address0 mem_address 1 17 }  { leftImage_in_V_ce0 mem_ce 1 1 }  { leftImage_in_V_q0 mem_dout 0 8 }  { leftImage_in_V_address1 MemPortADDR2 1 17 }  { leftImage_in_V_ce1 MemPortCE2 1 1 }  { leftImage_in_V_q1 MemPortDOUT2 0 8 } } }
	rightImage_in_V { ap_memory {  { rightImage_in_V_address0 mem_address 1 17 }  { rightImage_in_V_ce0 mem_ce 1 1 }  { rightImage_in_V_q0 mem_dout 0 8 }  { rightImage_in_V_address1 MemPortADDR2 1 17 }  { rightImage_in_V_ce1 MemPortCE2 1 1 }  { rightImage_in_V_q1 MemPortDOUT2 0 8 } } }
}
