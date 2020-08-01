// ==============================================================
// File generated on Thu Jul 30 11:06:41 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xdisparitymap.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XDisparitymap_CfgInitialize(XDisparitymap *InstancePtr, XDisparitymap_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_bus_BaseAddress = ConfigPtr->Control_bus_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XDisparitymap_Start(XDisparitymap *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDisparitymap_ReadReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_AP_CTRL) & 0x80;
    XDisparitymap_WriteReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_AP_CTRL, Data | 0x01);
}

u32 XDisparitymap_IsDone(XDisparitymap *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDisparitymap_ReadReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XDisparitymap_IsIdle(XDisparitymap *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDisparitymap_ReadReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XDisparitymap_IsReady(XDisparitymap *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDisparitymap_ReadReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XDisparitymap_EnableAutoRestart(XDisparitymap *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDisparitymap_WriteReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_AP_CTRL, 0x80);
}

void XDisparitymap_DisableAutoRestart(XDisparitymap *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDisparitymap_WriteReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_AP_CTRL, 0);
}

void XDisparitymap_Set_rows_V(XDisparitymap *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDisparitymap_WriteReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_ROWS_V_DATA, Data);
}

u32 XDisparitymap_Get_rows_V(XDisparitymap *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDisparitymap_ReadReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_ROWS_V_DATA);
    return Data;
}

void XDisparitymap_Set_cols_V(XDisparitymap *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDisparitymap_WriteReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_COLS_V_DATA, Data);
}

u32 XDisparitymap_Get_cols_V(XDisparitymap *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDisparitymap_ReadReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_COLS_V_DATA);
    return Data;
}

void XDisparitymap_InterruptGlobalEnable(XDisparitymap *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDisparitymap_WriteReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_GIE, 1);
}

void XDisparitymap_InterruptGlobalDisable(XDisparitymap *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDisparitymap_WriteReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_GIE, 0);
}

void XDisparitymap_InterruptEnable(XDisparitymap *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XDisparitymap_ReadReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_IER);
    XDisparitymap_WriteReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_IER, Register | Mask);
}

void XDisparitymap_InterruptDisable(XDisparitymap *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XDisparitymap_ReadReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_IER);
    XDisparitymap_WriteReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_IER, Register & (~Mask));
}

void XDisparitymap_InterruptClear(XDisparitymap *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDisparitymap_WriteReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_ISR, Mask);
}

u32 XDisparitymap_InterruptGetEnabled(XDisparitymap *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDisparitymap_ReadReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_IER);
}

u32 XDisparitymap_InterruptGetStatus(XDisparitymap *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDisparitymap_ReadReg(InstancePtr->Control_bus_BaseAddress, XDISPARITYMAP_CONTROL_BUS_ADDR_ISR);
}

