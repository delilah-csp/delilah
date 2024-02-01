// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3
// (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// control
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of ap_return
//        bit 31~0 - ap_return[31:0] (Read)
// 0x14 : Data signal of ap_return
//        bit 31~0 - ap_return[63:32] (Read)
// 0x1c : Data signal of in_value
//        bit 31~0 - in_value[31:0] (Read/Write)
// 0x20 : Data signal of in_value
//        bit 31~0 - in_value[63:32] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of out_r
//        bit 31~0 - out_r[31:0] (Read/Write)
// 0x2c : Data signal of out_r
//        bit 31~0 - out_r[63:32] (Read/Write)
// 0x30 : reserved
// 0x34 : Data signal of num
//        bit 31~0 - num[31:0] (Read/Write)
// 0x38 : Data signal of num
//        bit 31~0 - num[63:32] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of op
//        bit 31~0 - op[31:0] (Read/Write)
// 0x44 : Data signal of op
//        bit 31~0 - op[63:32] (Read/Write)
// 0x48 : reserved
// 0x4c : Data signal of comp1
//        bit 31~0 - comp1[31:0] (Read/Write)
// 0x50 : Data signal of comp1
//        bit 31~0 - comp1[63:32] (Read/Write)
// 0x54 : reserved
// 0x58 : Data signal of comp2
//        bit 31~0 - comp2[31:0] (Read/Write)
// 0x5c : Data signal of comp2
//        bit 31~0 - comp2[63:32] (Read/Write)
// 0x60 : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on
// Handshake)

#define XFILTER_CONTROL_ADDR_AP_CTRL 0x00
#define XFILTER_CONTROL_ADDR_GIE 0x04
#define XFILTER_CONTROL_ADDR_IER 0x08
#define XFILTER_CONTROL_ADDR_ISR 0x0c
#define XFILTER_CONTROL_ADDR_AP_RETURN 0x10
#define XFILTER_CONTROL_BITS_AP_RETURN 64
#define XFILTER_CONTROL_ADDR_IN_VALUE_DATA 0x1c
#define XFILTER_CONTROL_BITS_IN_VALUE_DATA 64
#define XFILTER_CONTROL_ADDR_OUT_R_DATA 0x28
#define XFILTER_CONTROL_BITS_OUT_R_DATA 64
#define XFILTER_CONTROL_ADDR_NUM_DATA 0x34
#define XFILTER_CONTROL_BITS_NUM_DATA 64
#define XFILTER_CONTROL_ADDR_OP_DATA 0x40
#define XFILTER_CONTROL_BITS_OP_DATA 64
#define XFILTER_CONTROL_ADDR_COMP1_DATA 0x4c
#define XFILTER_CONTROL_BITS_COMP1_DATA 64
#define XFILTER_CONTROL_ADDR_COMP2_DATA 0x58
#define XFILTER_CONTROL_BITS_COMP2_DATA 64
