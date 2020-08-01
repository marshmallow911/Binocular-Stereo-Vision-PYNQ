set moduleName disparityMap
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
set C_modelName {disparityMap}
set C_modelType { void 0 }
set C_modelArgList {
	{ INPUT_data_V int 32 regular {axi_s 0 volatile  { in_stream Data } }  }
	{ INPUT_user_V int 1 regular {axi_s 0 volatile  { in_stream User } }  }
	{ INPUT_last_V int 1 regular {axi_s 0 volatile  { in_stream Last } }  }
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
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ in_stream_TDATA sc_in sc_lv 32 signal 0 } 
	{ in_stream_TVALID sc_in sc_logic 1 invld 2 } 
	{ in_stream_TREADY sc_out sc_logic 1 inacc 2 } 
	{ in_stream_TUSER sc_in sc_lv 1 signal 1 } 
	{ in_stream_TLAST sc_in sc_lv 1 signal 2 } 
	{ dMapout_TDATA sc_out sc_lv 32 signal 3 } 
	{ dMapout_TVALID sc_out sc_logic 1 outvld 5 } 
	{ dMapout_TREADY sc_in sc_logic 1 outacc 3 } 
	{ dMapout_TUSER sc_out sc_lv 1 signal 4 } 
	{ dMapout_TLAST sc_out sc_lv 1 signal 5 } 
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
	{ interrupt sc_out sc_logic 1 signal -1 } 
	{ AXI_LITE_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n_AXI_LITE_clk sc_in sc_logic 1 reset -1 active_unknown } 
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
 	{ "name": "in_stream_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "INPUT_last_V", "role": "LID" }} , 
 	{ "name": "in_stream_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "INPUT_last_V", "role": "ADY" }} , 
 	{ "name": "in_stream_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_user_V", "role": "ER" }} , 
 	{ "name": "in_stream_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "INPUT_last_V", "role": "ST" }} , 
 	{ "name": "dMapout_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "OUTPUT_data_V", "role": "default" }} , 
 	{ "name": "dMapout_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "OUTPUT_last_V", "role": "" }} , 
 	{ "name": "dMapout_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "OUTPUT_data_V", "role": "" }} , 
 	{ "name": "dMapout_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_user_V", "role": "default" }} , 
 	{ "name": "dMapout_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "OUTPUT_last_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56"],
		"CDFG" : "disparityMap",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "INPUT_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in_stream_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "INPUT_user_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "INPUT_last_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "OUTPUT_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "dMapout_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "OUTPUT_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "OUTPUT_last_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "rows_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "cols_V", "Type" : "Stable", "Direction" : "I"},
			{"Name" : "cost_d_temp_right_V_s", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "cost_d_temp_right_V_15", "Type" : "OVld", "Direction" : "IO"},
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
			{"Name" : "exponentials_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.exponentials_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_CONTROL_BUS_s_axi_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dMap_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.leftImage_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.rightImage_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.pixel_values_left_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_0_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_1_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_2_V_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_3_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_4_V_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_5_V_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_6_V_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_7_V_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_8_V_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_9_V_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_10_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_11_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_12_V_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_13_V_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_14_V_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cost_last_line_15_V_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_vdy_U1", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mac_wdI_U2", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_xdS_U3", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U4", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_xdS_U5", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U6", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U7", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U8", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U9", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U10", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U11", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U12", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U13", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U14", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U15", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U16", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U17", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U18", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U19", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U20", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U21", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U22", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U23", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U24", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U25", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U26", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U27", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U28", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U29", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U30", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U31", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U32", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U33", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.disparityMap_mul_yd2_U34", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	disparityMap {
		INPUT_data_V {Type I LastRead 3 FirstWrite -1}
		INPUT_user_V {Type I LastRead 3 FirstWrite -1}
		INPUT_last_V {Type I LastRead 3 FirstWrite -1}
		OUTPUT_data_V {Type O LastRead -1 FirstWrite 15}
		OUTPUT_user_V {Type O LastRead -1 FirstWrite 15}
		OUTPUT_last_V {Type O LastRead -1 FirstWrite 15}
		rows_V {Type I LastRead 0 FirstWrite -1}
		cols_V {Type I LastRead 0 FirstWrite -1}
		cost_d_temp_right_V_s {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_1 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_2 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_3 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_4 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_5 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_6 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_7 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_8 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_9 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_10 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_11 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_12 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_13 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_14 {Type IO LastRead -1 FirstWrite -1}
		cost_d_temp_right_V_15 {Type IO LastRead -1 FirstWrite -1}
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
		exponentials_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	INPUT_data_V { axis {  { in_stream_TDATA in_data 0 32 } } }
	INPUT_user_V { axis {  { in_stream_TUSER in_data 0 1 } } }
	INPUT_last_V { axis {  { in_stream_TVALID in_vld 0 1 }  { in_stream_TREADY in_acc 1 1 }  { in_stream_TLAST in_data 0 1 } } }
	OUTPUT_data_V { axis {  { dMapout_TDATA out_data 1 32 }  { dMapout_TREADY out_acc 0 1 } } }
	OUTPUT_user_V { axis {  { dMapout_TUSER out_data 1 1 } } }
	OUTPUT_last_V { axis {  { dMapout_TVALID out_vld 1 1 }  { dMapout_TLAST out_data 1 1 } } }
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
