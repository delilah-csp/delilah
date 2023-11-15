// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3
// (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "hw/xfilter/xfilter.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int
XFilter_CfgInitialize(XFilter* InstancePtr, XFilter_Config* ConfigPtr)
{
  Xil_AssertNonvoid(InstancePtr != NULL);
  Xil_AssertNonvoid(ConfigPtr != NULL);

  InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
  InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

  return XST_SUCCESS;
}
#endif

void
XFilter_Start(XFilter* InstancePtr)
{
  u32 Data;

  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  Data = XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                         XFILTER_CONTROL_ADDR_AP_CTRL) &
         0x80;
  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32
XFilter_IsDone(XFilter* InstancePtr)
{
  u32 Data;

  Xil_AssertNonvoid(InstancePtr != NULL);
  Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  Data = XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                         XFILTER_CONTROL_ADDR_AP_CTRL);
  return (Data >> 1) & 0x1;
}

u32
XFilter_IsIdle(XFilter* InstancePtr)
{
  u32 Data;

  Xil_AssertNonvoid(InstancePtr != NULL);
  Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  Data = XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                         XFILTER_CONTROL_ADDR_AP_CTRL);
  return (Data >> 2) & 0x1;
}

u32
XFilter_IsReady(XFilter* InstancePtr)
{
  u32 Data;

  Xil_AssertNonvoid(InstancePtr != NULL);
  Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  Data = XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                         XFILTER_CONTROL_ADDR_AP_CTRL);
  // check ap_start to see if the pcore is ready for next input
  return !(Data & 0x1);
}

void
XFilter_EnableAutoRestart(XFilter* InstancePtr)
{
  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_AP_CTRL, 0x80);
}

void
XFilter_DisableAutoRestart(XFilter* InstancePtr)
{
  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_AP_CTRL, 0);
}

u64
XFilter_Get_return(XFilter* InstancePtr)
{
  u64 Data;

  Xil_AssertNonvoid(InstancePtr != NULL);
  Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  Data = XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                         XFILTER_CONTROL_ADDR_AP_RETURN);
  Data += (u64)XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                               XFILTER_CONTROL_ADDR_AP_RETURN + 4)
          << 32;
  return Data;
}
void
XFilter_Set_in_r(XFilter* InstancePtr, u64 Data)
{
  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_IN_R_DATA, (u32)(Data));
  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_IN_R_DATA + 4, (u32)(Data >> 32));
}

u64
XFilter_Get_in_r(XFilter* InstancePtr)
{
  u64 Data;

  Xil_AssertNonvoid(InstancePtr != NULL);
  Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  Data = XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                         XFILTER_CONTROL_ADDR_IN_R_DATA);
  Data += (u64)XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                               XFILTER_CONTROL_ADDR_IN_R_DATA + 4)
          << 32;
  return Data;
}

void
XFilter_Set_out_r(XFilter* InstancePtr, u64 Data)
{
  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_OUT_R_DATA, (u32)(Data));
  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_OUT_R_DATA + 4, (u32)(Data >> 32));
}

u64
XFilter_Get_out_r(XFilter* InstancePtr)
{
  u64 Data;

  Xil_AssertNonvoid(InstancePtr != NULL);
  Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  Data = XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                         XFILTER_CONTROL_ADDR_OUT_R_DATA);
  Data += (u64)XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                               XFILTER_CONTROL_ADDR_OUT_R_DATA + 4)
          << 32;
  return Data;
}

void
XFilter_Set_num(XFilter* InstancePtr, u64 Data)
{
  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_NUM_DATA, (u32)(Data));
  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_NUM_DATA + 4, (u32)(Data >> 32));
}

u64
XFilter_Get_num(XFilter* InstancePtr)
{
  u64 Data;

  Xil_AssertNonvoid(InstancePtr != NULL);
  Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  Data = XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                         XFILTER_CONTROL_ADDR_NUM_DATA);
  Data += (u64)XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                               XFILTER_CONTROL_ADDR_NUM_DATA + 4)
          << 32;
  return Data;
}

void
XFilter_Set_op(XFilter* InstancePtr, u64 Data)
{
  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_OP_DATA, (u32)(Data));
  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_OP_DATA + 4, (u32)(Data >> 32));
}

u64
XFilter_Get_op(XFilter* InstancePtr)
{
  u64 Data;

  Xil_AssertNonvoid(InstancePtr != NULL);
  Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  Data = XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                         XFILTER_CONTROL_ADDR_OP_DATA);
  Data += (u64)XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                               XFILTER_CONTROL_ADDR_OP_DATA + 4)
          << 32;
  return Data;
}

void
XFilter_Set_comp1(XFilter* InstancePtr, u64 Data)
{
  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_COMP1_DATA, (u32)(Data));
  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_COMP1_DATA + 4, (u32)(Data >> 32));
}

u64
XFilter_Get_comp1(XFilter* InstancePtr)
{
  u64 Data;

  Xil_AssertNonvoid(InstancePtr != NULL);
  Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  Data = XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                         XFILTER_CONTROL_ADDR_COMP1_DATA);
  Data += (u64)XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                               XFILTER_CONTROL_ADDR_COMP1_DATA + 4)
          << 32;
  return Data;
}

void
XFilter_Set_comp2(XFilter* InstancePtr, u64 Data)
{
  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_COMP2_DATA, (u32)(Data));
  XFilter_WriteReg(InstancePtr->Control_BaseAddress,
                   XFILTER_CONTROL_ADDR_COMP2_DATA + 4, (u32)(Data >> 32));
}

u64
XFilter_Get_comp2(XFilter* InstancePtr)
{
  u64 Data;

  Xil_AssertNonvoid(InstancePtr != NULL);
  Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  Data = XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                         XFILTER_CONTROL_ADDR_COMP2_DATA);
  Data += (u64)XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                               XFILTER_CONTROL_ADDR_COMP2_DATA + 4)
          << 32;
  return Data;
}

void
XFilter_InterruptGlobalEnable(XFilter* InstancePtr)
{
  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  XFilter_WriteReg(InstancePtr->Control_BaseAddress, XFILTER_CONTROL_ADDR_GIE,
                   1);
}

void
XFilter_InterruptGlobalDisable(XFilter* InstancePtr)
{
  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  XFilter_WriteReg(InstancePtr->Control_BaseAddress, XFILTER_CONTROL_ADDR_GIE,
                   0);
}

void
XFilter_InterruptEnable(XFilter* InstancePtr, u32 Mask)
{
  u32 Register;

  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  Register =
    XFilter_ReadReg(InstancePtr->Control_BaseAddress, XFILTER_CONTROL_ADDR_IER);
  XFilter_WriteReg(InstancePtr->Control_BaseAddress, XFILTER_CONTROL_ADDR_IER,
                   Register | Mask);
}

void
XFilter_InterruptDisable(XFilter* InstancePtr, u32 Mask)
{
  u32 Register;

  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  Register =
    XFilter_ReadReg(InstancePtr->Control_BaseAddress, XFILTER_CONTROL_ADDR_IER);
  XFilter_WriteReg(InstancePtr->Control_BaseAddress, XFILTER_CONTROL_ADDR_IER,
                   Register & (~Mask));
}

void
XFilter_InterruptClear(XFilter* InstancePtr, u32 Mask)
{
  Xil_AssertVoid(InstancePtr != NULL);
  Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  XFilter_WriteReg(InstancePtr->Control_BaseAddress, XFILTER_CONTROL_ADDR_ISR,
                   Mask);
}

u32
XFilter_InterruptGetEnabled(XFilter* InstancePtr)
{
  Xil_AssertNonvoid(InstancePtr != NULL);
  Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  return XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                         XFILTER_CONTROL_ADDR_IER);
}

u32
XFilter_InterruptGetStatus(XFilter* InstancePtr)
{
  Xil_AssertNonvoid(InstancePtr != NULL);
  Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

  return XFilter_ReadReg(InstancePtr->Control_BaseAddress,
                         XFILTER_CONTROL_ADDR_ISR);
}
