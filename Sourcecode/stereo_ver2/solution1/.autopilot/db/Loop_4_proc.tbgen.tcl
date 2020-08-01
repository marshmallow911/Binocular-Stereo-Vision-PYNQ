set moduleName Loop_4_proc
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
set C_modelName {Loop_4_proc}
set C_modelType { void 0 }
set C_modelArgList {
	{ packets_loc int 32 regular {fifo 0}  }
	{ cols_V int 32 regular {ap_stable 0} }
	{ rows_V int 32 regular {ap_stable 0} }
	{ dMapout_data_V int 32 regular {axi_s 1 volatile  { dMapout Data } }  }
	{ dMap_data_stream_0_V int 8 regular {fifo 0 volatile }  }
	{ dMapout_user_V int 1 regular {axi_s 1 volatile  { dMapout User } }  }
	{ dMapout_last_V int 1 regular {axi_s 1 volatile  { dMapout Last } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "packets_loc", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "cols_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "rows_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "dMapout_data_V", "interface" : "axis", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dMap_data_stream_0_V", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "dMapout_user_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "dMapout_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ packets_loc_dout sc_in sc_lv 32 signal 0 } 
	{ packets_loc_empty_n sc_in sc_logic 1 signal 0 } 
	{ packets_loc_read sc_out sc_logic 1 signal 0 } 
	{ cols_V sc_in sc_lv 32 signal 1 } 
	{ rows_V sc_in sc_lv 32 signal 2 } 
	{ dMapout_TDATA sc_out sc_lv 32 signal 3 } 
	{ dMapout_TVALID sc_out sc_logic 1 outvld 3 } 
	{ dMapout_TREADY sc_in sc_logic 1 outacc 6 } 
	{ dMap_data_stream_0_V_dout sc_in sc_lv 8 signal 4 } 
	{ dMap_data_stream_0_V_empty_n sc_in sc_logic 1 signal 4 } 
	{ dMap_data_stream_0_V_read sc_out sc_logic 1 signal 4 } 
	{ dMapout_TUSER sc_out sc_lv 1 signal 5 } 
	{ dMapout_TLAST sc_out sc_lv 1 signal 6 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "packets_loc_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "packets_loc", "role": "dout" }} , 
 	{ "name": "packets_loc_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "packets_loc", "role": "empty_n" }} , 
 	{ "name": "packets_loc_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "packets_loc", "role": "read" }} , 
 	{ "name": "cols_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "cols_V", "role": "default" }} , 
 	{ "name": "rows_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rows_V", "role": "default" }} , 
 	{ "name": "dMapout_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dMapout_data_V", "role": "default" }} , 
 	{ "name": "dMapout_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "dMapout_data_V", "role": "default" }} , 
 	{ "name": "dMapout_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "dMapout_last_V", "role": "default" }} , 
 	{ "name": "dMap_data_stream_0_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "dMap_data_stream_0_V", "role": "dout" }} , 
 	{ "name": "dMap_data_stream_0_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dMap_data_stream_0_V", "role": "empty_n" }} , 
 	{ "name": "dMap_data_stream_0_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dMap_data_stream_0_V", "role": "read" }} , 
 	{ "name": "dMapout_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dMapout_user_V", "role": "default" }} , 
 	{ "name": "dMapout_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dMapout_last_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "Loop_4_proc",
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
			{"Name" : "packets_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "packets_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cols_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "rows_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "dMapout_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "dMapout_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "dMap_data_stream_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0",
				"BlockSignal" : [
					{"Name" : "dMap_data_stream_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "dMapout_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "dMapout_last_V", "Type" : "Axis", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	Loop_4_proc {
		packets_loc {Type I LastRead 0 FirstWrite -1}
		cols_V {Type I LastRead 1 FirstWrite -1}
		rows_V {Type I LastRead 1 FirstWrite -1}
		dMapout_data_V {Type O LastRead -1 FirstWrite 6}
		dMap_data_stream_0_V {Type I LastRead 6 FirstWrite -1}
		dMapout_user_V {Type O LastRead -1 FirstWrite 6}
		dMapout_last_V {Type O LastRead -1 FirstWrite 6}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	packets_loc { ap_fifo {  { packets_loc_dout fifo_data 0 32 }  { packets_loc_empty_n fifo_status 0 1 }  { packets_loc_read fifo_update 1 1 } } }
	cols_V { ap_stable {  { cols_V in_data 0 32 } } }
	rows_V { ap_stable {  { rows_V in_data 0 32 } } }
	dMapout_data_V { axis {  { dMapout_TDATA out_data 1 32 }  { dMapout_TVALID out_vld 1 1 } } }
	dMap_data_stream_0_V { ap_fifo {  { dMap_data_stream_0_V_dout fifo_data 0 8 }  { dMap_data_stream_0_V_empty_n fifo_status 0 1 }  { dMap_data_stream_0_V_read fifo_update 1 1 } } }
	dMapout_user_V { axis {  { dMapout_TUSER out_data 1 1 } } }
	dMapout_last_V { axis {  { dMapout_TREADY out_acc 0 1 }  { dMapout_TLAST out_data 1 1 } } }
}
