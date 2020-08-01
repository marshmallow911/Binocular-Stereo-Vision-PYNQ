# ==============================================================
# File generated on Sat Aug 01 16:46:18 +0800 2020
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../disparity_map_test.cpp -cflags { -Wno-unknown-pragmas}
add_files stereo_2020/disparity_map.cpp
set_part xc7z020clg400-1
create_clock -name default -period 10
config_export -format=ip_catalog
config_export -rtl=verilog
set_directive_pipeline scaleGray/scale_gray 
set_directive_pipeline scaleGray/scaleGray_label0 
set_directive_pipeline graytorgb/Gray_to_color 
set_directive_pipeline graytorgb/graytorgb_label1 
set_directive_pipeline disparityMap/mat_matrix 
set_directive_pipeline disparityMap/disparityMap_label2 
set_directive_pipeline disparityMap/disparityMap_label0 
set_directive_pipeline disparityMap/disparityMap_label1 
set_directive_pipeline disparityMap/Loop_d 
