// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1.3 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xfilter.h"

extern XFilter_Config XFilter_ConfigTable[];

XFilter_Config *XFilter_LookupConfig(u16 DeviceId) {
	XFilter_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XFILTER_NUM_INSTANCES; Index++) {
		if (XFilter_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XFilter_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XFilter_Initialize(XFilter *InstancePtr, u16 DeviceId) {
	XFilter_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XFilter_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XFilter_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

