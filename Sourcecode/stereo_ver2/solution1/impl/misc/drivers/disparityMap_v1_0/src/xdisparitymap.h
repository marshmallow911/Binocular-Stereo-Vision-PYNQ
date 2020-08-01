// ==============================================================
// File generated on Sat Aug 01 16:46:16 +0800 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XDISPARITYMAP_H
#define XDISPARITYMAP_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xdisparitymap_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Control_bus_BaseAddress;
} XDisparitymap_Config;
#endif

typedef struct {
    u32 Control_bus_BaseAddress;
    u32 IsReady;
} XDisparitymap;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XDisparitymap_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XDisparitymap_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XDisparitymap_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XDisparitymap_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XDisparitymap_Initialize(XDisparitymap *InstancePtr, u16 DeviceId);
XDisparitymap_Config* XDisparitymap_LookupConfig(u16 DeviceId);
int XDisparitymap_CfgInitialize(XDisparitymap *InstancePtr, XDisparitymap_Config *ConfigPtr);
#else
int XDisparitymap_Initialize(XDisparitymap *InstancePtr, const char* InstanceName);
int XDisparitymap_Release(XDisparitymap *InstancePtr);
#endif

void XDisparitymap_Start(XDisparitymap *InstancePtr);
u32 XDisparitymap_IsDone(XDisparitymap *InstancePtr);
u32 XDisparitymap_IsIdle(XDisparitymap *InstancePtr);
u32 XDisparitymap_IsReady(XDisparitymap *InstancePtr);
void XDisparitymap_EnableAutoRestart(XDisparitymap *InstancePtr);
void XDisparitymap_DisableAutoRestart(XDisparitymap *InstancePtr);

void XDisparitymap_Set_rows_V(XDisparitymap *InstancePtr, u32 Data);
u32 XDisparitymap_Get_rows_V(XDisparitymap *InstancePtr);
void XDisparitymap_Set_cols_V(XDisparitymap *InstancePtr, u32 Data);
u32 XDisparitymap_Get_cols_V(XDisparitymap *InstancePtr);

void XDisparitymap_InterruptGlobalEnable(XDisparitymap *InstancePtr);
void XDisparitymap_InterruptGlobalDisable(XDisparitymap *InstancePtr);
void XDisparitymap_InterruptEnable(XDisparitymap *InstancePtr, u32 Mask);
void XDisparitymap_InterruptDisable(XDisparitymap *InstancePtr, u32 Mask);
void XDisparitymap_InterruptClear(XDisparitymap *InstancePtr, u32 Mask);
u32 XDisparitymap_InterruptGetEnabled(XDisparitymap *InstancePtr);
u32 XDisparitymap_InterruptGetStatus(XDisparitymap *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
