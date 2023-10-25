// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3
// (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XFILTER_H
#define XFILTER_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_assert.h"
#include "xil_io.h"
#include "xil_types.h"
#include "xstatus.h"
#else
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#endif
#include "hw/xfilter/xfilter_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
#else
typedef struct
{
  u16 DeviceId;
  u64 Control_BaseAddress;
} XFilter_Config;
#endif

typedef struct
{
  u64 Control_BaseAddress;
  u32 IsReady;
} XFilter;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XFilter_WriteReg(BaseAddress, RegOffset, Data)                         \
  Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XFilter_ReadReg(BaseAddress, RegOffset)                                \
  Xil_In32((BaseAddress) + (RegOffset))
#else
#define XFilter_WriteReg(BaseAddress, RegOffset, Data)                         \
  *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XFilter_ReadReg(BaseAddress, RegOffset)                                \
  *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr) assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS 0
#define XST_DEVICE_NOT_FOUND 2
#define XST_OPEN_DEVICE_FAILED 3
#define XIL_COMPONENT_IS_READY 1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XFilter_Initialize(XFilter* InstancePtr, u16 DeviceId);
XFilter_Config* XFilter_LookupConfig(u16 DeviceId);
int XFilter_CfgInitialize(XFilter* InstancePtr, XFilter_Config* ConfigPtr);
#else
int XFilter_Initialize(XFilter* InstancePtr, const char* InstanceName);
int XFilter_Release(XFilter* InstancePtr);
#endif

void XFilter_Start(XFilter* InstancePtr);
u32 XFilter_IsDone(XFilter* InstancePtr);
u32 XFilter_IsIdle(XFilter* InstancePtr);
u32 XFilter_IsReady(XFilter* InstancePtr);
void XFilter_EnableAutoRestart(XFilter* InstancePtr);
void XFilter_DisableAutoRestart(XFilter* InstancePtr);
u64 XFilter_Get_return(XFilter* InstancePtr);

void XFilter_Set_in_r(XFilter* InstancePtr, u64 Data);
u64 XFilter_Get_in_r(XFilter* InstancePtr);
void XFilter_Set_out_r(XFilter* InstancePtr, u64 Data);
u64 XFilter_Get_out_r(XFilter* InstancePtr);
void XFilter_Set_num(XFilter* InstancePtr, u64 Data);
u64 XFilter_Get_num(XFilter* InstancePtr);
void XFilter_Set_op(XFilter* InstancePtr, u64 Data);
u64 XFilter_Get_op(XFilter* InstancePtr);
void XFilter_Set_comp1(XFilter* InstancePtr, u64 Data);
u64 XFilter_Get_comp1(XFilter* InstancePtr);
void XFilter_Set_comp2(XFilter* InstancePtr, u64 Data);
u64 XFilter_Get_comp2(XFilter* InstancePtr);

void XFilter_InterruptGlobalEnable(XFilter* InstancePtr);
void XFilter_InterruptGlobalDisable(XFilter* InstancePtr);
void XFilter_InterruptEnable(XFilter* InstancePtr, u32 Mask);
void XFilter_InterruptDisable(XFilter* InstancePtr, u32 Mask);
void XFilter_InterruptClear(XFilter* InstancePtr, u32 Mask);
u32 XFilter_InterruptGetEnabled(XFilter* InstancePtr);
u32 XFilter_InterruptGetStatus(XFilter* InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
