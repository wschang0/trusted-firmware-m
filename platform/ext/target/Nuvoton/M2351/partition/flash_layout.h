/*
 * Copyright (c) 2017-2018 Arm Limited. All rights reserved.
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

#ifndef __FLASH_LAYOUT_H__
#define __FLASH_LAYOUT_H__

/* Flash layout on MPS2 AN519 with BL2:
 *
 * 0x0000_0000 BL2 - MCUBoot(0.5 MB)
 * 0x0008_0000 Flash_area_image_0(1 MB):
 *    0x0008_0000 Secure     image primary
 *    0x0010_0000 Non-secure image primary
 * 0x0018_0000 Flash_area_image_1(1 MB):
 *    0x0018_0000 Secure     image secondary
 *    0x0020_0000 Non-secure image secondary
 * 0x0028_0000 Scratch area(1 MB)
 * 0x0038_0000 Secure Storage Area(0.02 MB)
 * 0x0038_5000 NV counters area(16 Bytes)
 * 0x0038_5010 Unused(0.491 MB)
 *
 * Flash layout on MPS2 AN519, if BL2 not defined:
 * 0x0000_0000 Secure     image
 * 0x0010_0000 Non-secure image
 */

/* This header file is included from linker scatter file as well, where only a
 * limited C constructs are allowed. Therefore it is not possible to include
 * here the platform_retarget.h to access flash related defines. To resolve this
 * some of the values are redefined here with different names, these are marked
 * with comment.
 */

/* The size of a partition. This should be large enough to contain a S or NS
 * sw binary. Each FLASH_AREA_IMAGE contains two partitions. See Flash layout
 * above.
 */
#define FLASH_PARTITION_SIZE            (0x40000)    /* 256 kB */

/* Sector size of the flash hardware; same as FLASH0_SECTOR_SIZE */
#define FLASH_AREA_IMAGE_SECTOR_SIZE    (0x800)     /* 2 kB */
/* Same as FLASH0_SIZE */
#define FLASH_TOTAL_SIZE                (0x00080000) /* 512KB */

/* Flash layout info for BL2 bootloader */
#define FLASH_BASE_ADDRESS              (0x00000000) /* same as FLASH0_BASE_S */

/* Offset and size definitions of the flash partitions that are handled by the
 * bootloader. The image swapping is done between IMAGE_0 and IMAGE_1, SCRATCH
 * is used as a temporary storage during image swapping.
 */
#define FLASH_AREA_BL2_OFFSET           (0x0)
#define FLASH_AREA_BL2_SIZE             (0x8000)

#define FLASH_AREA_IMAGE_0_OFFSET       (0x008000)
#define FLASH_AREA_IMAGE_0_SIZE         (FLASH_PARTITION_SIZE)

#define FLASH_AREA_IMAGE_1_OFFSET       (0x008000)
#define FLASH_AREA_IMAGE_1_SIZE         (0x008000)

#define FLASH_AREA_IMAGE_SCRATCH_OFFSET (0x100000)
#define FLASH_AREA_IMAGE_SCRATCH_SIZE    0x800

/* Maximum number of status entries supported by the bootloader. */
#define BOOT_STATUS_MAX_ENTRIES         (1)
                                        
/** Maximum number of image sectors supported by the bootloader. */
#define BOOT_MAX_IMG_SECTORS            (32)
                                        

#define FLASH_SST_AREA_OFFSET           (0x2C800+FLASH_AREA_IMAGE_0_OFFSET)
#define FLASH_SST_AREA_SIZE             (0x4000)   /* 16 KB */

/* Internal Trusted Storage (ITS) Service definitions */
#define FLASH_ITS_AREA_OFFSET           (FLASH_SST_AREA_OFFSET + FLASH_SST_AREA_SIZE)
#define FLASH_ITS_AREA_SIZE             (0x4000)   /* 16 KB */


#define FLASH_NV_COUNTERS_AREA_OFFSET   (FLASH_ITS_AREA_OFFSET + FLASH_ITS_AREA_SIZE)
#define FLASH_NV_COUNTERS_AREA_SIZE     (0x10)

/* Offset and size definition in flash area, used by assemble.py */
#define SECURE_IMAGE_OFFSET             0x8000
//#define SECURE_IMAGE_MAX_SIZE           0x2C800
#define SECURE_IMAGE_MAX_SIZE           0x34000

#define NON_SECURE_IMAGE_OFFSET         0x40000
#define NON_SECURE_IMAGE_MAX_SIZE       0x40000

/* Flash device name used by BL2 and SST
 * Name is defined in flash driver file: Driver_Flash.c
 */
#define FLASH_DEV_NAME Driver_FLASH0

/* Secure Storage (SST) Service definitions
 * Note: Further documentation of these definitions can be found in the
 * TF-M SST Integration Guide.
 */
#define SST_FLASH_DEV_NAME Driver_FLASH0

/* In this target the CMSIS driver requires only the offset from the base
 * address instead of the full memory address.
 */
#define SST_FLASH_AREA_ADDR  FLASH_SST_AREA_OFFSET
#define SST_SECTOR_SIZE      (FLASH_AREA_IMAGE_SECTOR_SIZE)
/* The sectors must be in consecutive memory location */
#define SST_NBR_OF_SECTORS  (FLASH_SST_AREA_SIZE / SST_SECTOR_SIZE)
/* Specifies the smallest flash programmable unit in bytes */
#define SST_FLASH_PROGRAM_UNIT  0x4
/* The maximum asset size to be stored in the SST area */
#define SST_MAX_ASSET_SIZE      1024
/* The maximum number of assets to be stored in the SST area */
#define SST_NUM_ASSETS          10

/* Internal Trusted Storage (ITS) Service definitions
 * Note: Further documentation of these definitions can be found in the
 * TF-M ITS Integration Guide. The ITS should be in the internal flash, but is
 * allocated in the external flash just for development platforms that don't
 * have internal flash available.
 */
#define ITS_FLASH_DEV_NAME Driver_FLASH0

/* In this target the CMSIS driver requires only the offset from the base
 * address instead of the full memory address.
 */
#define ITS_FLASH_AREA_ADDR     FLASH_ITS_AREA_OFFSET
#define ITS_SECTOR_SIZE         FLASH_AREA_IMAGE_SECTOR_SIZE
/* The sectors must be in consecutive memory location */
#define ITS_NBR_OF_SECTORS      (FLASH_ITS_AREA_SIZE / ITS_SECTOR_SIZE)
/* Specifies the smallest flash programmable unit in bytes */
#define ITS_FLASH_PROGRAM_UNIT  (0x4)
/* The maximum asset size to be stored in the ITS area */
#define ITS_MAX_ASSET_SIZE      (512)
/* The maximum number of assets to be stored in the ITS area */
#define ITS_NUM_ASSETS          (10)
/* NV Counters definitions */
#define TFM_NV_COUNTERS_AREA_ADDR    FLASH_NV_COUNTERS_AREA_OFFSET
#define TFM_NV_COUNTERS_AREA_SIZE    FLASH_NV_COUNTERS_AREA_SIZE
#define TFM_NV_COUNTERS_SECTOR_ADDR  FLASH_NV_COUNTERS_AREA_OFFSET
#define TFM_NV_COUNTERS_SECTOR_SIZE  FLASH_AREA_IMAGE_SECTOR_SIZE

/* FIXME: Use SRAM2 memory to store RW data */
#define S_RAM_ALIAS_BASE  (0x20000000)
#define NS_RAM_ALIAS_BASE (0x30000000)

#define OTP_ROTPK_HASH_BASE (0)     /* 0x310000 + 0x00 * 8 */
#define OTP_HUK_HASH_BASE   (16)    /* 0x310000 + 0x10 * 8 */
#define OTP_IAK_HASH_BASE   (20)    /* 0x310000 + 0x14 * 8 */
#define OTP_IID_HASH_BASE   (24)    /* 0x310000 + 0x18 * 8 */
#define OTP_NV_COUNTER_BASE (32)    /* 0x310000 + 0x20 * 8 */

#endif /* __FLASH_LAYOUT_H__ */
