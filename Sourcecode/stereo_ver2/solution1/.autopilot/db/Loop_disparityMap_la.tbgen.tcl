set moduleName Loop_disparityMap_la
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
set C_modelName {Loop_disparityMap_la}
set C_modelType { void 0 }
set C_modelArgList {
	{ rows_V int 32 regular {ap_stable 0} }
	{ in_stream_data_V int 32 regular {axi_s 0 volatile  { in_stream Data } }  }
	{ p_read int 32 regular  }
	{ p_read1 int 63 regular  }
	{ leftImage_in_V int 8 regular {array 97200 { 0 0 } 0 1 }  }
	{ rightImage_in_V int 8 regular {array 97200 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "rows_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_stream_data_V", "interface" : "axis", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_read1", "interface" : "wire", "bitwidth" : 63, "direction" : "READONLY"} , 
 	{ "Name" : "leftImage_in_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "rightImage_in_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 29
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ rows_V sc_in sc_lv 32 signal 0 } 
	{ in_stream_TDATA sc_in sc_lv 32 signal 1 } 
	{ in_stream_TVALID sc_in sc_logic 1 invld 1 } 
	{ in_stream_TREADY sc_out sc_logic 1 inacc 1 } 
	{ p_read sc_in sc_lv 32 signal 2 } 
	{ p_read1 sc_in sc_lv 63 signal 3 } 
	{ leftImage_in_V_address0 sc_out sc_lv 17 signal 4 } 
	{ leftImage_in_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ leftImage_in_V_we0 sc_out sc_logic 1 signal 4 } 
	{ leftImage_in_V_d0 sc_out sc_lv 8 signal 4 } 
	{ leftImage_in_V_address1 sc_out sc_lv 17 signal 4 } 
	{ leftImage_in_V_ce1 sc_out sc_logic 1 signal 4 } 
	{ leftImage_in_V_we1 sc_out sc_logic 1 signal 4 } 
	{ leftImage_in_V_d1 sc_out sc_lv 8 signal 4 } 
	{ rightImage_in_V_address0 sc_out sc_lv 17 signal 5 } 
	{ rightImage_in_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ rightImage_in_V_we0 sc_out sc_logic 1 signal 5 } 
	{ rightImage_in_V_d0 sc_out sc_lv 8 signal 5 } 
	{ rightImage_in_V_address1 sc_out sc_lv 17 signal 5 } 
	{ rightImage_in_V_ce1 sc_out sc_logic 1 signal 5 } 
	{ rightImage_in_V_we1 sc_out sc_logic 1 signal 5 } 
	{ rightImage_in_V_d1 sc_out sc_lv 8 signal 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "rows_V", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rows_V", "role": "default" }} , 
 	{ "name": "in_stream_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_stream_data_V", "role": "default" }} , 
 	{ "name": "in_stream_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "in_stream_data_V", "role": "default" }} , 
 	{ "name": "in_stream_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "in_stream_data_V", "role": "default" }} , 
 	{ "name": "p_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_read", "role": "default" }} , 
 	{ "name": "p_read1", "direction": "in", "datatype": "sc_lv", "bitwidth":63, "type": "signal", "bundle":{"name": "p_read1", "role": "default" }} , 
 	{ "name": "leftImage_in_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "address0" }} , 
 	{ "name": "leftImage_in_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "ce0" }} , 
 	{ "name": "leftImage_in_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "we0" }} , 
 	{ "name": "leftImage_in_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "d0" }} , 
 	{ "name": "leftImage_in_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "address1" }} , 
 	{ "name": "leftImage_in_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "ce1" }} , 
 	{ "name": "leftImage_in_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "we1" }} , 
 	{ "name": "leftImage_in_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "leftImage_in_V", "role": "d1" }} , 
 	{ "name": "rightImage_in_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "address0" }} , 
 	{ "name": "rightImage_in_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "ce0" }} , 
 	{ "name": "rightImage_in_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "we0" }} , 
 	{ "name": "rightImage_in_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "d0" }} , 
 	{ "name": "rightImage_in_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "address1" }} , 
 	{ "name": "rightImage_in_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "ce1" }} , 
 	{ "name": "rightImage_in_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "we1" }} , 
 	{ "name": "rightImage_in_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "rightImage_in_V", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "Loop_disparityMap_la",
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
			{"Name" : "rows_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "in_stream_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in_stream_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p_read", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "leftImage_in_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"},
			{"Name" : "rightImage_in_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "0", "DependentChan" : "0"}]}]}


set ArgLastReadFirstWriteLatency {
	Loop_disparityMap_la {
		rows_V {Type I LastRead 0 FirstWrite -1}
		in_stream_data_V {Type I LastRead 3 FirstWrite -1}
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		leftImage_in_V {Type O LastRead -1 FirstWrite 3}
		rightImage_in_V {Type O LastRead -1 FirstWrite 3}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	rows_V { ap_stable {  { rows_V in_data 0 32 } } }
	in_stream_data_V { axis {  { in_stream_TDATA in_data 0 32 }  { in_stream_TVALID in_vld 0 1 }  { in_stream_TREADY in_acc 1 1 } } }
	p_read { ap_none {  { p_read in_data 0 32 } } }
	p_read1 { ap_none {  { p_read1 in_data 0 63 } } }
	leftImage_in_V { ap_memory {  { leftImage_in_V_address0 mem_address 1 17 }  { leftImage_in_V_ce0 mem_ce 1 1 }  { leftImage_in_V_we0 mem_we 1 1 }  { leftImage_in_V_d0 mem_din 1 8 }  { leftImage_in_V_address1 MemPortADDR2 1 17 }  { leftImage_in_V_ce1 MemPortCE2 1 1 }  { leftImage_in_V_we1 MemPortWE2 1 1 }  { leftImage_in_V_d1 MemPortDIN2 1 8 } } }
	rightImage_in_V { ap_memory {  { rightImage_in_V_address0 mem_address 1 17 }  { rightImage_in_V_ce0 mem_ce 1 1 }  { rightImage_in_V_we0 mem_we 1 1 }  { rightImage_in_V_d0 mem_din 1 8 }  { rightImage_in_V_address1 MemPortADDR2 1 17 }  { rightImage_in_V_ce1 MemPortCE2 1 1 }  { rightImage_in_V_we1 MemPortWE2 1 1 }  { rightImage_in_V_d1 MemPortDIN2 1 8 } } }
}
