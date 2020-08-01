set moduleName disparityMap
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type dataflow
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {disparityMap}
set C_modelType { void 0 }
set C_modelArgList {
	{ INPUT_data_V int 32 regular {axi_s 0 volatile  { in_stream Data } }  }
	{ INPUT_user_V int 1 unused {axi_s 0 ""  { in_stream User } }  }
	{ INPUT_last_V int 1 unused {axi_s 0 ""  { in_stream Last } }  }
	{ OUTPUT_data_V int 32 regular {axi_s 1 volatile  { dMapout Data } }  }
	{ OUTPUT_user_V int 1 regular {axi_s 1 volatile  { dMapout User } }  }
	{ OUTPUT_last_V int 1 regular {axi_s 1 volatile  { dMapout Last } }  }
	{ rows_V int 32 regular {axi_slave 0}  }
	{ cols_V int 32 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "INPUT_data_V", "interface" : "axis", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in_stream.data.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "INPUT_user_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "in_stream.user.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "INPUT_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "in_stream.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "OUTPUT_data_V", "interface" : "axis", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dMapout.data.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "OUTPUT_user_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "dMapout.user.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "OUTPUT_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "dMapout.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "rows_V", "interface" : "axi_slave", "bundle":"CONTROL_BUS","type":"ap_stable","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "rows.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":20}, "offset_end" : {"in":27}} , 
 	{ "Name" : "cols_V", "interface" : "axi_slave", "bundle":"CONTROL_BUS","type":"ap_stable","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "cols.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":28}, "offset_end" : {"in":35}} ]}
# RTL Port declarations: 
set portNum 32
set portList { 
	{ s_axi_CONTROL_BUS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_AWADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_CONTROL_BUS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_CONTROL_BUS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_CONTROL_BUS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_ARADDR sc_in sc_lv 6 signal -1 } 
	{ s_axi_CONTROL_BUS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_CONTROL_BUS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_CONTROL_BUS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CONTROL_BUS_BRESP sc_out sc_lv 2 signal -1 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
	{ AXI_LITE_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n_AXI_LITE_clk sc_in sc_logic 1 reset -1 active_unknown } 
	{ in_stream_TDATA sc_in sc_lv 32 signal 0 } 
	{ in_stream_TUSER sc_in sc_lv 1 signal 1 } 
	{ in_stream_TLAST sc_in sc_lv 1 signal 2 } 
	{ dMapout_TDATA sc_out sc_lv 32 signal 3 } 
	{ dMapout_TUSER sc_out sc_lv 1 signal 4 } 
	{ dMapout_TLAST sc_out sc_lv 1 signal 5 } 
	{ in_stream_TVALID sc_in sc_logic 1 invld 0 } 
	{ in_stream_TREADY sc_out sc_logic 1 inacc 0 } 
	{ dMapout_TVALID sc_out sc_logic 1 outvld 5 } 
	{ dMapout_TREADY sc_in sc_logic 1 outacc 5 } 
}
set NewPortList {[ 
	{ "name": "s_axi_CONTROL_BUS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "AWADDR" },"address":[{"name":"disparityMap","role":"start","value":"0","valid_bit":"0"},{"name":"disparityMap","role":"continue","value":"0","valid_bit":"4"},{"name":"disparityMap","role":"auto_start","value":"0","valid_bit":"7"},{"name":"rows_V","role":"data","value":"20"},{"name":"cols_V","role":"data","value":"28"}] },
	{ "name": "s_axi_CONTROL_BUS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "AWVALID" } },
	{ "name": "s_axi_CONTROL_BUS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "AWREADY" } },
	{ "name": "s_axi_CONTROL_BUS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "WVALID" } },
	{ "name": "s_axi_CONTROL_BUS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "WREADY" } },
	{ "name": "s_axi_CONTROL_BUS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "WDATA" } },
	{ "name": "s_axi_CONTROL_BUS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "WSTRB" } },
	{ "name": "s_axi_CONTROL_BUS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "ARADDR" },"address":[{"name":"disparityMap","role":"start","value":"0","valid_bit":"0"},{"name":"disparityMap","role":"done","value":"0","valid_bit":"1"},{"name":"disparityMap","role":"idle","value":"0","valid_bit":"2"},{"name":"disparityMap","role":"ready","value":"0","valid_bit":"3"},{"name":"disparityMap","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_CONTROL_BUS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "ARVALID" } },
	{ "name": "s_axi_CONTROL_BUS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "ARREADY" } },
	{ "name": "s_axi_CONTROL_BUS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "RVALID" } },
	{ "name": "s_axi_CONTROL_BUS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "RREADY" } },
	{ "name": "s_axi_CONTROL_BUS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "RDATA" } },
	{ "name": "s_axi_CONTROL_BUS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "RRESP" } },
	{ "name": "s_axi_CONTROL_BUS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "BVALID" } },
	{ "name": "s_axi_CONTROL_BUS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "BREADY" } },
	{ "name": "s_axi_CONTROL_BUS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "BRESP" } },
	{ "name": "AXI_LITE_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "CONTROL_BUS", "role": "axilite_clk" } },
	{ "name": "ap_rst_n_AXI_LITE_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "CONTROL_BUS", "role": "axilite_rst" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CONTROL_BUS", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "in_stream_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "INPUT_data_V", "role": "TA" }} , 
 	{ "name": "in_stream_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_user_V", "role": "ER" }} , 
 	{ "name": "in_stream_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_last_V", "role": "ST" }} , 
 	{ "name": "dMapout_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUTPUT_data_V", "role": "default" }} , 
 	{ "name": "dMapout_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_user_V", "role": "default" }} , 
 	{ "name": "dMapout_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_last_V", "role": "default" }} , 
 	{ "name": "in_stream_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "INPUT_data_V", "role": "LID" }} , 
 	{ "name": "in_stream_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "INPUT_data_V", "role": "ADY" }} , 
 	{ "name": "dMapout_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "OUTPUT_last_V", "role": "" }} , 
 	{ "name": "dMapout_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "OUTPUT_last_V", "role": "" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "11", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116"],
		"CDFG" : "disparityMap",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "4", "Name" : "Block_arrayctor_loop_U0", "ReadyCount" : "Block_arrayctor_loop_U0_ap_ready_count"},
			{"ID" : "5", "Name" : "Loop_disparityMap_la_U0", "ReadyCount" : "Loop_disparityMap_la_U0_ap_ready_count"},
			{"ID" : "6", "Name" : "Loop_2_proc_U0", "ReadyCount" : "Loop_2_proc_U0_ap_ready_count"}],
		"OutputProcess" : [
			{"ID" : "85", "Name" : "Loop_4_proc_U0"}],
		"Port" : [
			{"Name" : "INPUT_data_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "Loop_disparityMap_la_U0", "Port" : "in_stream_data_V"}]},
			{"Name" : "INPUT_user_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "INPUT_last_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "OUTPUT_data_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "85", "SubInstance" : "Loop_4_proc_U0", "Port" : "dMapout_data_V"}]},
			{"Name" : "OUTPUT_user_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "85", "SubInstance" : "Loop_4_proc_U0", "Port" : "dMapout_user_V"}]},
			{"Name" : "OUTPUT_last_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "85", "SubInstance" : "Loop_4_proc_U0", "Port" : "dMapout_last_V"}]},
			{"Name" : "rows_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "cols_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "PAR_R_RM_INV", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "Loop_2_proc_U0", "Port" : "PAR_R_RM_INV"}]},
			{"Name" : "PAR_L_RM_INV", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "Loop_2_proc_U0", "Port" : "PAR_L_RM_INV"}]},
			{"Name" : "PAR_R_CAMM_RAW", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "Loop_2_proc_U0", "Port" : "PAR_R_CAMM_RAW"}]},
			{"Name" : "PAR_L_CAMM_RAW", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "Loop_2_proc_U0", "Port" : "PAR_L_CAMM_RAW"}]},
			{"Name" : "cost_d_temp_right_V_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_15"}]},
			{"Name" : "cost_d_temp_right_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_14"}]},
			{"Name" : "cost_d_temp_right_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_13"}]},
			{"Name" : "cost_d_temp_right_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_12"}]},
			{"Name" : "cost_d_temp_right_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_11"}]},
			{"Name" : "cost_d_temp_right_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_10"}]},
			{"Name" : "cost_d_temp_right_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_9"}]},
			{"Name" : "cost_d_temp_right_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_8"}]},
			{"Name" : "cost_d_temp_right_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_7"}]},
			{"Name" : "cost_d_temp_right_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_6"}]},
			{"Name" : "cost_d_temp_right_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_5"}]},
			{"Name" : "cost_d_temp_right_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_4"}]},
			{"Name" : "cost_d_temp_right_V_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_3"}]},
			{"Name" : "cost_d_temp_right_V_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_2"}]},
			{"Name" : "cost_d_temp_right_V_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_1"}]},
			{"Name" : "cost_d_temp_right_V_s", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "cost_d_temp_right_V_s"}]},
			{"Name" : "pixel_values_right_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_14"}]},
			{"Name" : "pixel_values_right_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_13"}]},
			{"Name" : "pixel_values_right_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_12"}]},
			{"Name" : "pixel_values_right_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_11"}]},
			{"Name" : "pixel_values_right_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_10"}]},
			{"Name" : "pixel_values_right_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_9"}]},
			{"Name" : "pixel_values_right_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_8"}]},
			{"Name" : "pixel_values_right_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_7"}]},
			{"Name" : "pixel_values_right_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_6"}]},
			{"Name" : "pixel_values_right_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_5"}]},
			{"Name" : "pixel_values_right_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_4"}]},
			{"Name" : "pixel_values_right_V_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_3"}]},
			{"Name" : "pixel_values_right_V_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_2"}]},
			{"Name" : "pixel_values_right_V_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V_1"}]},
			{"Name" : "pixel_values_right_V", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "pixel_values_right_V"}]},
			{"Name" : "mask_table1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "mask_table1"}]},
			{"Name" : "exponentials_V", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "Loop_Loop_Row_proc_U0", "Port" : "exponentials_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_CONTROL_BUS_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.leftImage_in_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rightImage_in_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Block_arrayctor_loop_U0", "Parent" : "0",
		"CDFG" : "Block_arrayctor_loop",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "cols_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "rows_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "packets_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "85", "DependentChan" : "86",
				"BlockSignal" : [
					{"Name" : "packets_out_out_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Loop_disparityMap_la_U0", "Parent" : "0",
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
			{"Name" : "p_read", "Type" : "None", "Direction" : "I", "DependentProc" : "4", "DependentChan" : "87"},
			{"Name" : "p_read1", "Type" : "None", "Direction" : "I", "DependentProc" : "4", "DependentChan" : "88"},
			{"Name" : "leftImage_in_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "2"},
			{"Name" : "rightImage_in_V", "Type" : "Memory", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "3"}]},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Loop_2_proc_U0", "Parent" : "0", "Child" : ["7", "8", "9", "10"],
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
			{"Name" : "PAR_R_RINV_val_2_2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "89",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_2_2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_2_1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "90",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_2_1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_2_0_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "91",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_2_0_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_1_2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "92",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_1_2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_1_1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "93",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_1_1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_1_0_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "94",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_1_0_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_0_2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "95",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_0_2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_0_1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "96",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_0_1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_0_0_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "97",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_0_0_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_2_2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "98",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_2_2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_2_1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "99",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_2_1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_2_0_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "100",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_2_0_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_1_2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "101",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_1_2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_1_1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "102",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_1_1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_1_0_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "103",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_1_0_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_0_2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "104",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_0_2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_0_1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "105",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_0_1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_0_0_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "106",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_0_0_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cy2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "107",
				"BlockSignal" : [
					{"Name" : "cy2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fy2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "108",
				"BlockSignal" : [
					{"Name" : "fy2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cx2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "109",
				"BlockSignal" : [
					{"Name" : "cx2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fx2_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "110",
				"BlockSignal" : [
					{"Name" : "fx2_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cy1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "111",
				"BlockSignal" : [
					{"Name" : "cy1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fy1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "112",
				"BlockSignal" : [
					{"Name" : "fy1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cx1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "113",
				"BlockSignal" : [
					{"Name" : "cx1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fx1_out_out", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "11", "DependentChan" : "114",
				"BlockSignal" : [
					{"Name" : "fx1_out_out_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RM_INV", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "PAR_L_RM_INV", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "PAR_R_CAMM_RAW", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "PAR_L_CAMM_RAW", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_2_proc_U0.PAR_R_RM_INV_U", "Parent" : "6"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_2_proc_U0.PAR_L_RM_INV_U", "Parent" : "6"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_2_proc_U0.PAR_R_CAMM_RAW_U", "Parent" : "6"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_2_proc_U0.PAR_L_CAMM_RAW_U", "Parent" : "6"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0", "Parent" : "0", "Child" : ["12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84"],
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
			{"Name" : "fx1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "114",
				"BlockSignal" : [
					{"Name" : "fx1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fx2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "110",
				"BlockSignal" : [
					{"Name" : "fx2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fy1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "112",
				"BlockSignal" : [
					{"Name" : "fy1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "fy2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "108",
				"BlockSignal" : [
					{"Name" : "fy2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cx1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "113",
				"BlockSignal" : [
					{"Name" : "cx1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cx2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "109",
				"BlockSignal" : [
					{"Name" : "cx2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cy1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "111",
				"BlockSignal" : [
					{"Name" : "cy1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cy2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "107",
				"BlockSignal" : [
					{"Name" : "cy2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "rows_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "cols_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "dMap_data_stream_0_V", "Type" : "Fifo", "Direction" : "O", "DependentProc" : "85", "DependentChan" : "115",
				"BlockSignal" : [
					{"Name" : "dMap_data_stream_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_0_0_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "106",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_0_0_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_0_1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "105",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_0_1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_0_2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "104",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_0_2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_1_0_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "103",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_1_0_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_1_1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "102",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_1_1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_1_2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "101",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_1_2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_2_0_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "100",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_2_0_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_2_1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "99",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_2_1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_L_RINV_val_2_2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "98",
				"BlockSignal" : [
					{"Name" : "PAR_L_RINV_val_2_2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_0_0_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "97",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_0_0_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_0_1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "96",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_0_1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_0_2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "95",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_0_2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_1_0_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "94",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_1_0_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_1_1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "93",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_1_1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_1_2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "92",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_1_2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_2_0_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "91",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_2_0_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_2_1_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "90",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_2_1_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "PAR_R_RINV_val_2_2_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "6", "DependentChan" : "89",
				"BlockSignal" : [
					{"Name" : "PAR_R_RINV_val_2_2_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "leftImage_in_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "2"},
			{"Name" : "rightImage_in_V", "Type" : "Memory", "Direction" : "I", "DependentProc" : "5", "DependentChan" : "3"},
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
					{"ID" : "30", "SubInstance" : "grp_floor_fu_2079", "Port" : "mask_table1"}]},
			{"Name" : "exponentials_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.exponentials_V_U", "Parent" : "11"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_15_V_U", "Parent" : "11"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_14_V_U", "Parent" : "11"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_13_V_U", "Parent" : "11"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_12_V_U", "Parent" : "11"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_11_V_U", "Parent" : "11"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_10_V_U", "Parent" : "11"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_9_V_U", "Parent" : "11"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_8_V_U", "Parent" : "11"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_7_V_U", "Parent" : "11"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_6_V_U", "Parent" : "11"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_5_V_U", "Parent" : "11"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_4_V_U", "Parent" : "11"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_3_V_U", "Parent" : "11"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_2_V_U", "Parent" : "11"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_1_V_U", "Parent" : "11"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.cost_last_line_0_V_U", "Parent" : "11"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.pixel_values_left_V_U", "Parent" : "11"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.grp_floor_fu_2079", "Parent" : "11", "Child" : ["31"],
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
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.grp_floor_fu_2079.mask_table1_U", "Parent" : "30"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_faddxdS_U42", "Parent" : "11"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_faddxdS_U43", "Parent" : "11"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_faddxdS_U44", "Parent" : "11"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_faddxdS_U45", "Parent" : "11"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_fmulyd2_U46", "Parent" : "11"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_fmulyd2_U47", "Parent" : "11"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_fmulyd2_U48", "Parent" : "11"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_fmulyd2_U49", "Parent" : "11"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_fdivzec_U50", "Parent" : "11"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_uitoAem_U51", "Parent" : "11"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_sitoBew_U52", "Parent" : "11"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_fpexCeG_U53", "Parent" : "11"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_fcmpDeQ_U54", "Parent" : "11"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_dcmpEe0_U55", "Parent" : "11"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_uitoFfa_U56", "Parent" : "11"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_uitoFfa_U57", "Parent" : "11"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_Gfk_U58", "Parent" : "11"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_Hfu_U59", "Parent" : "11"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mac_IfE_U60", "Parent" : "11"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_Hfu_U61", "Parent" : "11"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mac_IfE_U62", "Parent" : "11"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U63", "Parent" : "11"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U64", "Parent" : "11"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U65", "Parent" : "11"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U66", "Parent" : "11"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U67", "Parent" : "11"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U68", "Parent" : "11"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U69", "Parent" : "11"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U70", "Parent" : "11"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U71", "Parent" : "11"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U72", "Parent" : "11"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U73", "Parent" : "11"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U74", "Parent" : "11"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U75", "Parent" : "11"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U76", "Parent" : "11"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U77", "Parent" : "11"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U78", "Parent" : "11"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U79", "Parent" : "11"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U80", "Parent" : "11"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U81", "Parent" : "11"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U82", "Parent" : "11"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U83", "Parent" : "11"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U84", "Parent" : "11"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U85", "Parent" : "11"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U86", "Parent" : "11"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U87", "Parent" : "11"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U88", "Parent" : "11"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U89", "Parent" : "11"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U90", "Parent" : "11"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U91", "Parent" : "11"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U92", "Parent" : "11"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U93", "Parent" : "11"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Loop_Row_proc_U0.disparityMap_mul_JfO_U94", "Parent" : "11"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Loop_4_proc_U0", "Parent" : "0",
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
		"StartSource" : "4",
		"StartFifo" : "start_for_Loop_4_Mgi_U",
		"Port" : [
			{"Name" : "packets_loc", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "4", "DependentChan" : "86",
				"BlockSignal" : [
					{"Name" : "packets_loc_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "cols_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "rows_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "dMapout_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "dMapout_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "dMap_data_stream_0_V", "Type" : "Fifo", "Direction" : "I", "DependentProc" : "11", "DependentChan" : "115",
				"BlockSignal" : [
					{"Name" : "dMap_data_stream_0_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "dMapout_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "dMapout_last_V", "Type" : "Axis", "Direction" : "O"}]},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.packets_loc_c_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.col_packets_loc_chan_U", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tmp_cast_loc_channel_U", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_R_RINV_val_2_2_s_U", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_R_RINV_val_2_1_s_U", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_R_RINV_val_2_0_s_U", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_R_RINV_val_1_2_s_U", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_R_RINV_val_1_1_s_U", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_R_RINV_val_1_0_s_U", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_R_RINV_val_0_2_s_U", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_R_RINV_val_0_1_s_U", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_R_RINV_val_0_0_s_U", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_L_RINV_val_2_2_s_U", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_L_RINV_val_2_1_s_U", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_L_RINV_val_2_0_s_U", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_L_RINV_val_1_2_s_U", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_L_RINV_val_1_1_s_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_L_RINV_val_1_0_s_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_L_RINV_val_0_2_s_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_L_RINV_val_0_1_s_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.PAR_L_RINV_val_0_0_s_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cy2_loc_c_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fy2_loc_c_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cx2_loc_c_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fx2_loc_c_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cy1_loc_c_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fy1_loc_c_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cx1_loc_c_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fx1_loc_c_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dMap_data_stream_0_s_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.start_for_Loop_4_Mgi_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	disparityMap {
		INPUT_data_V {Type I LastRead 3 FirstWrite -1}
		INPUT_user_V {Type I LastRead -1 FirstWrite -1}
		INPUT_last_V {Type I LastRead -1 FirstWrite -1}
		OUTPUT_data_V {Type O LastRead -1 FirstWrite 6}
		OUTPUT_user_V {Type O LastRead -1 FirstWrite 6}
		OUTPUT_last_V {Type O LastRead -1 FirstWrite 6}
		rows_V {Type I LastRead 0 FirstWrite -1}
		cols_V {Type I LastRead 0 FirstWrite -1}
		PAR_R_RM_INV {Type I LastRead -1 FirstWrite -1}
		PAR_L_RM_INV {Type I LastRead -1 FirstWrite -1}
		PAR_R_CAMM_RAW {Type I LastRead -1 FirstWrite -1}
		PAR_L_CAMM_RAW {Type I LastRead -1 FirstWrite -1}
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
	Block_arrayctor_loop {
		cols_V {Type I LastRead 0 FirstWrite -1}
		rows_V {Type I LastRead 0 FirstWrite -1}
		packets_out_out {Type O LastRead -1 FirstWrite 1}}
	Loop_disparityMap_la {
		rows_V {Type I LastRead 0 FirstWrite -1}
		in_stream_data_V {Type I LastRead 3 FirstWrite -1}
		p_read {Type I LastRead 0 FirstWrite -1}
		p_read1 {Type I LastRead 0 FirstWrite -1}
		leftImage_in_V {Type O LastRead -1 FirstWrite 3}
		rightImage_in_V {Type O LastRead -1 FirstWrite 3}}
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
		PAR_L_CAMM_RAW {Type I LastRead -1 FirstWrite -1}}
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
		mask_table1 {Type I LastRead -1 FirstWrite -1}}
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
]}

set Spec2ImplPortList { 
	INPUT_data_V { axis {  { in_stream_TDATA in_data 0 32 }  { in_stream_TVALID in_vld 0 1 }  { in_stream_TREADY in_acc 1 1 } } }
	INPUT_user_V { axis {  { in_stream_TUSER in_data 0 1 } } }
	INPUT_last_V { axis {  { in_stream_TLAST in_data 0 1 } } }
	OUTPUT_data_V { axis {  { dMapout_TDATA out_data 1 32 } } }
	OUTPUT_user_V { axis {  { dMapout_TUSER out_data 1 1 } } }
	OUTPUT_last_V { axis {  { dMapout_TLAST out_data 1 1 }  { dMapout_TVALID out_vld 1 1 }  { dMapout_TREADY out_acc 0 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
