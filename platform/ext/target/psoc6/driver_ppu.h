/*
 * Copyright (c) 2019, Cypress Semiconductor Corporation. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __DRIVER_PPU_H__
#define __DRIVER_PPU_H__

#include "cy_prot.h"
#include "RTE_Device.h"

typedef struct ppu_resources PPU_Resources;

/* Shared Driver wrapper functions */
cy_en_prot_status_t PPU_Configure(const PPU_Resources *ppu_dev);

/* Per-PPU macros */
#define DECLARE_MS_PPU_PR(N) extern const PPU_Resources N##_PPU_Resources;
#define DECLARE_MS_PPU_FX(N) extern const PPU_Resources N##_PPU_Resources;
#define DECLARE_PPU_PR(N) extern const PPU_Resources N##_PPU_Resources;
#define DECLARE_PPU_GR(N) extern const PPU_Resources N##_PPU_Resources;
#define DECLARE_GR_PPU_SL(N) extern const PPU_Resources N##_PPU_Resources;
#define DECLARE_GR_PPU_RG(N) extern const PPU_Resources N##_PPU_Resources;

#if (RTE_PPU_PR0)
DECLARE_PPU_PR(PR0)
#endif

#if (RTE_PPU_PR1)
DECLARE_PPU_PR(PR1)
#endif

#if (RTE_PPU_PR2)
DECLARE_PPU_PR(PR2)
#endif

#if (RTE_PPU_PR3)
DECLARE_PPU_PR(PR3)
#endif

#if (RTE_PPU_PR4)
DECLARE_PPU_PR(PR4)
#endif

#if (RTE_PPU_PR5)
DECLARE_PPU_PR(PR5)
#endif

#if (RTE_PPU_PR6)
DECLARE_PPU_PR(PR6)
#endif

#if (RTE_PPU_PR7)
DECLARE_PPU_PR(PR7)
#endif

#if (RTE_PPU_PR8)
DECLARE_PPU_PR(PR8)
#endif

#if (RTE_PPU_GR0)
DECLARE_PPU_GR(GR0)
#endif

#if (RTE_PPU_GR1)
DECLARE_PPU_GR(GR1)
#endif

#if (RTE_PPU_GR2)
DECLARE_PPU_GR(GR2)
#endif

#if (RTE_PPU_GR3)
DECLARE_PPU_GR(GR3)
#endif

#if (RTE_PPU_GR4)
DECLARE_PPU_GR(GR4)
#endif

#if (RTE_PPU_GR6)
DECLARE_PPU_GR(GR6)
#endif

#if (RTE_PPU_GR9)
DECLARE_PPU_GR(GR9)
#endif

#if (RTE_PPU_GR10)
DECLARE_PPU_GR(GR10)
#endif

#if (RTE_PPU_GR_MMIO0)
DECLARE_PPU_GR(GR_MMIO0)
#endif

#if (RTE_PPU_GR_MMIO1)
DECLARE_PPU_GR(GR_MMIO1)
#endif

#if (RTE_PPU_GR_MMIO2)
DECLARE_PPU_GR(GR_MMIO2)
#endif

#if (RTE_PPU_GR_MMIO3)
DECLARE_PPU_GR(GR_MMIO3)
#endif

#if (RTE_PPU_GR_MMIO4)
DECLARE_PPU_GR(GR_MMIO4)
#endif

#if (RTE_PPU_GR_MMIO6)
DECLARE_PPU_GR(GR_MMIO6)
#endif

#if (RTE_PPU_GR_MMIO9)
DECLARE_PPU_GR(GR_MMIO9)
#endif

#if (RTE_PPU_GR_MMIO10)
DECLARE_PPU_GR(GR_MMIO10)
#endif

#if (RTE_GR_PPU_SL_PERI_GR1)
DECLARE_GR_PPU_SL(SL_PERI_GR1)
#endif

#if (RTE_GR_PPU_SL_CRYPTO)
DECLARE_GR_PPU_SL(SL_CRYPTO)
#endif

#if (RTE_GR_PPU_SL_PERI_GR2)
DECLARE_GR_PPU_SL(SL_PERI_GR2)
#endif

#if (RTE_GR_PPU_SL_CPUSS)
DECLARE_GR_PPU_SL(SL_CPUSS)
#endif

#if (RTE_GR_PPU_SL_FAULT)
DECLARE_GR_PPU_SL(SL_FAULT)
#endif

#if (RTE_GR_PPU_SL_IPC)
DECLARE_GR_PPU_SL(SL_IPC)
#endif

#if (RTE_GR_PPU_SL_PROT)
DECLARE_GR_PPU_SL(SL_PROT)
#endif

#if (RTE_GR_PPU_SL_FLASHC)
DECLARE_GR_PPU_SL(SL_FLASHC)
#endif

#if (RTE_GR_PPU_SL_SRSS)
DECLARE_GR_PPU_SL(SL_SRSS)
#endif

#if (RTE_GR_PPU_SL_BACKUP)
DECLARE_GR_PPU_SL(SL_BACKUP)
#endif

#if (RTE_GR_PPU_SL_DW0)
DECLARE_GR_PPU_SL(SL_DW0)
#endif

#if (RTE_GR_PPU_SL_DW1)
DECLARE_GR_PPU_SL(SL_DW1)
#endif

#if (RTE_GR_PPU_SL_EFUSE)
DECLARE_GR_PPU_SL(SL_EFUSE)
#endif

#if (RTE_GR_PPU_SL_PROFILE)
DECLARE_GR_PPU_SL(SL_PROFILE)
#endif

#if (RTE_GR_PPU_RG_IPC_STRUCT0)
DECLARE_GR_PPU_RG(RG_IPC_STRUCT0)
#endif

#if (RTE_GR_PPU_RG_IPC_STRUCT1)
DECLARE_GR_PPU_RG(RG_IPC_STRUCT1)
#endif

#if (RTE_GR_PPU_RG_IPC_STRUCT2)
DECLARE_GR_PPU_RG(RG_IPC_STRUCT2)
#endif

#if (RTE_GR_PPU_RG_IPC_STRUCT3)
DECLARE_GR_PPU_RG(RG_IPC_STRUCT3)
#endif

#if (RTE_GR_PPU_RG_IPC_STRUCT4)
DECLARE_GR_PPU_RG(RG_IPC_STRUCT4)
#endif

#if (RTE_GR_PPU_RG_IPC_STRUCT5)
DECLARE_GR_PPU_RG(RG_IPC_STRUCT5)
#endif

#if (RTE_GR_PPU_RG_IPC_STRUCT6)
DECLARE_GR_PPU_RG(RG_IPC_STRUCT6)
#endif

#if (RTE_GR_PPU_RG_IPC_STRUCT7)
DECLARE_GR_PPU_RG(RG_IPC_STRUCT7)
#endif

#if (RTE_GR_PPU_RG_IPC_INTR_STRUCT0)
DECLARE_GR_PPU_RG(RG_IPC_INTR_STRUCT0)
#endif

#if (RTE_GR_PPU_RG_IPC_INTR_STRUCT1)
DECLARE_GR_PPU_RG(RG_IPC_INTR_STRUCT1)
#endif

#if (RTE_GR_PPU_RG_IPC_INTR_STRUCT2)
DECLARE_GR_PPU_RG(RG_IPC_INTR_STRUCT2)
#endif

#if (RTE_GR_PPU_RG_IPC_INTR_STRUCT3)
DECLARE_GR_PPU_RG(RG_IPC_INTR_STRUCT3)
#endif

#if (RTE_GR_PPU_RG_IPC_INTR_STRUCT4)
DECLARE_GR_PPU_RG(RG_IPC_INTR_STRUCT4)
#endif

#if (RTE_GR_PPU_RG_IPC_INTR_STRUCT5)
DECLARE_GR_PPU_RG(RG_IPC_INTR_STRUCT5)
#endif

#if (RTE_GR_PPU_RG_IPC_INTR_STRUCT6)
DECLARE_GR_PPU_RG(RG_IPC_INTR_STRUCT6)
#endif

#if (RTE_GR_PPU_RG_IPC_INTR_STRUCT7)
DECLARE_GR_PPU_RG(RG_IPC_INTR_STRUCT7)
#endif

#if (RTE_GR_PPU_RG_DW0_DW_CH_STRUCT0)
DECLARE_GR_PPU_RG(RG_DW0_DW_CH_STRUCT0)
#endif

#if (RTE_GR_PPU_RG_DW0_DW_CH_STRUCT1)
DECLARE_GR_PPU_RG(RG_DW0_DW_CH_STRUCT1)
#endif

#if (RTE_GR_PPU_RG_DW0_DW_CH_STRUCT2)
DECLARE_GR_PPU_RG(RG_DW0_DW_CH_STRUCT2)
#endif

#if (RTE_GR_PPU_RG_DW0_DW_CH_STRUCT3)
DECLARE_GR_PPU_RG(RG_DW0_DW_CH_STRUCT3)
#endif

#if (RTE_GR_PPU_RG_DW1_DW_CH_STRUCT0)
DECLARE_GR_PPU_RG(RG_DW1_DW_CH_STRUCT0)
#endif

#if (RTE_GR_PPU_RG_DW1_DW_CH_STRUCT1)
DECLARE_GR_PPU_RG(RG_DW1_DW_CH_STRUCT1)
#endif

#if (RTE_GR_PPU_RG_DW1_DW_CH_STRUCT2)
DECLARE_GR_PPU_RG(RG_DW1_DW_CH_STRUCT2)
#endif

#if (RTE_GR_PPU_RG_DW1_DW_CH_STRUCT3)
DECLARE_GR_PPU_RG(RG_DW1_DW_CH_STRUCT3)
#endif

#if (RTE_GR_PPU_RG_SMPU)
DECLARE_GR_PPU_RG(RG_SMPU)
#endif

#if (RTE_GR_PPU_RG_MPU_CM0P)
DECLARE_GR_PPU_RG(RG_MPU_CM0P)
#endif

#if (RTE_GR_PPU_RG_MPU_CRYPTO)
DECLARE_GR_PPU_RG(RG_MPU_CRYPTO)
#endif

#if (RTE_GR_PPU_RG_MPU_CM4)
DECLARE_GR_PPU_RG(RG_MPU_CM4)
#endif

#if (RTE_GR_PPU_RG_MPU_TC)
DECLARE_GR_PPU_RG(RG_MPU_TC)
#endif

#if (RTE_GR_PPU_SL_PERI_GR3)
DECLARE_GR_PPU_SL(SL_PERI_GR3)
#endif

#if (RTE_GR_PPU_SL_HSIOM)
DECLARE_GR_PPU_SL(SL_HSIOM)
#endif

#if (RTE_GR_PPU_SL_GPIO)
DECLARE_GR_PPU_SL(SL_GPIO)
#endif

#if (RTE_GR_PPU_SL_SMARTIO)
DECLARE_GR_PPU_SL(SL_SMARTIO)
#endif

#if (RTE_GR_PPU_SL_UDB)
DECLARE_GR_PPU_SL(SL_UDB)
#endif

#if (RTE_GR_PPU_SL_LPCOMP)
DECLARE_GR_PPU_SL(SL_LPCOMP)
#endif

#if (RTE_GR_PPU_SL_CSD)
DECLARE_GR_PPU_SL(SL_CSD)
#endif

#if (RTE_GR_PPU_SL_TCPWM0)
DECLARE_GR_PPU_SL(SL_TCPWM0)
#endif

#if (RTE_GR_PPU_SL_TCPWM1)
DECLARE_GR_PPU_SL(SL_TCPWM1)
#endif

#if (RTE_GR_PPU_SL_LCD)
DECLARE_GR_PPU_SL(SL_LCD)
#endif

#if (RTE_GR_PPU_SL_BLE)
DECLARE_GR_PPU_SL(SL_BLE)
#endif

#if (RTE_GR_PPU_SL_USBFS)
DECLARE_GR_PPU_SL(SL_USBFS)
#endif

#if (RTE_GR_PPU_SL_PERI_GR4)
DECLARE_GR_PPU_SL(SL_PERI_GR4)
#endif

#if (RTE_GR_PPU_SL_SMIF)
DECLARE_GR_PPU_SL(SL_SMIF)
#endif

#if (RTE_GR_PPU_SL_PERI_GR6)
DECLARE_GR_PPU_SL(SL_PERI_GR6)
#endif

#if (RTE_GR_PPU_SL_SCB0)
DECLARE_GR_PPU_SL(SL_SCB0)
#endif

#if (RTE_GR_PPU_SL_SCB1)
DECLARE_GR_PPU_SL(SL_SCB1)
#endif

#if (RTE_GR_PPU_SL_SCB2)
DECLARE_GR_PPU_SL(SL_SCB2)
#endif

#if (RTE_GR_PPU_SL_SCB3)
DECLARE_GR_PPU_SL(SL_SCB3)
#endif

#if (RTE_GR_PPU_SL_SCB4)
DECLARE_GR_PPU_SL(SL_SCB4)
#endif

#if (RTE_GR_PPU_SL_SCB5)
DECLARE_GR_PPU_SL(SL_SCB5)
#endif

#if (RTE_GR_PPU_SL_SCB6)
DECLARE_GR_PPU_SL(SL_SCB6)
#endif

#if (RTE_GR_PPU_SL_SCB7)
DECLARE_GR_PPU_SL(SL_SCB7)
#endif

#if (RTE_GR_PPU_SL_SCB8)
DECLARE_GR_PPU_SL(SL_SCB8)
#endif

#if (RTE_GR_PPU_SL_PERI_GR9)
DECLARE_GR_PPU_SL(SL_PERI_GR9)
#endif

#if (RTE_GR_PPU_SL_PASS)
DECLARE_GR_PPU_SL(SL_PASS)
#endif

#if (RTE_GR_PPU_SL_PERI_GR10)
DECLARE_GR_PPU_SL(SL_PERI_GR10)
#endif

#if (RTE_GR_PPU_SL_I2S)
DECLARE_GR_PPU_SL(SL_I2S)
#endif

#if (RTE_GR_PPU_SL_PDM)
DECLARE_GR_PPU_SL(SL_PDM)
#endif

#endif /* __DRIVER_PPU_H__ */