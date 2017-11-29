/*
 * Copyright (c) 2016-2017 ARM Limited
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

#ifndef __MPS2_SSE_200_H__
#define __MPS2_SSE_200_H__

#include "platform_irq.h"         /* Platform IRQ numbers */

/* --------  Configuration of the Cortex-M33 Processor and Core Peripherals  ------ */
#define __CM33_REV                0x0000U   /* Core revision r0p1 */
#define __MPU_PRESENT             1U        /* MPU present */
#define __SAUREGION_PRESENT       1U        /* SAU regions present */
#define __VTOR_PRESENT            1U        /* VTOR present */
#define __NVIC_PRIO_BITS          3U        /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig    0U        /* Set to 1 if different SysTick Config is used */
#define __FPU_PRESENT             0U        /* no FPU present */
#define __DSP_PRESENT             0U        /* no DSP extension present */

#include <core_cm33.h>                 /* Processor and core peripherals */
#include "system_cmsdk_mps2_sse_200.h" /* System Header */

#include "platform_regs.h"        /* Platform registers */
#include "platform_retarget.h"    /* Peripherals base addresses */

#endif /* __MPS2_SSE_200_H__ */
