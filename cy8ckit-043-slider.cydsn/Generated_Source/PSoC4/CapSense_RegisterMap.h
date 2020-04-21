/***************************************************************************//**
* \file CapSense_RegisterMap.h
* \version 7.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense v7.0 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2019), Cypress Semiconductor Corporation.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_REGISTER_MAP_H)
#define CY_SENSE_CapSense_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_Configuration.h"
#include "CapSense_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_CONFIG_ID_VALUE                            (CapSense_dsRam.configId)
#define CapSense_CONFIG_ID_OFFSET                           (0u)
#define CapSense_CONFIG_ID_SIZE                             (2u)
#define CapSense_CONFIG_ID_PARAM_ID                         (0x87000000u)

#define CapSense_DEVICE_ID_VALUE                            (CapSense_dsRam.deviceId)
#define CapSense_DEVICE_ID_OFFSET                           (2u)
#define CapSense_DEVICE_ID_SIZE                             (2u)
#define CapSense_DEVICE_ID_PARAM_ID                         (0x8B000002u)

#define CapSense_HW_CLOCK_VALUE                             (CapSense_dsRam.hwClock)
#define CapSense_HW_CLOCK_OFFSET                            (4u)
#define CapSense_HW_CLOCK_SIZE                              (2u)
#define CapSense_HW_CLOCK_PARAM_ID                          (0x86000004u)

#define CapSense_TUNER_CMD_VALUE                            (CapSense_dsRam.tunerCmd)
#define CapSense_TUNER_CMD_OFFSET                           (6u)
#define CapSense_TUNER_CMD_SIZE                             (2u)
#define CapSense_TUNER_CMD_PARAM_ID                         (0xA1000006u)

#define CapSense_SCAN_COUNTER_VALUE                         (CapSense_dsRam.scanCounter)
#define CapSense_SCAN_COUNTER_OFFSET                        (8u)
#define CapSense_SCAN_COUNTER_SIZE                          (2u)
#define CapSense_SCAN_COUNTER_PARAM_ID                      (0x85000008u)

#define CapSense_STATUS_VALUE                               (CapSense_dsRam.status)
#define CapSense_STATUS_OFFSET                              (12u)
#define CapSense_STATUS_SIZE                                (4u)
#define CapSense_STATUS_PARAM_ID                            (0xCB00000Cu)

#define CapSense_WDGT_ENABLE0_VALUE                         (CapSense_dsRam.wdgtEnable[0u])
#define CapSense_WDGT_ENABLE0_OFFSET                        (16u)
#define CapSense_WDGT_ENABLE0_SIZE                          (4u)
#define CapSense_WDGT_ENABLE0_PARAM_ID                      (0xE6000010u)

#define CapSense_WDGT_STATUS0_VALUE                         (CapSense_dsRam.wdgtStatus[0u])
#define CapSense_WDGT_STATUS0_OFFSET                        (20u)
#define CapSense_WDGT_STATUS0_SIZE                          (4u)
#define CapSense_WDGT_STATUS0_PARAM_ID                      (0xCC000014u)

#define CapSense_SNS_STATUS0_VALUE                          (CapSense_dsRam.snsStatus[0u])
#define CapSense_SNS_STATUS0_OFFSET                         (24u)
#define CapSense_SNS_STATUS0_SIZE                           (4u)
#define CapSense_SNS_STATUS0_PARAM_ID                       (0xCF000018u)

#define CapSense_CSD0_CONFIG_VALUE                          (CapSense_dsRam.csd0Config)
#define CapSense_CSD0_CONFIG_OFFSET                         (28u)
#define CapSense_CSD0_CONFIG_SIZE                           (2u)
#define CapSense_CSD0_CONFIG_PARAM_ID                       (0xA780001Cu)

#define CapSense_MOD_CSD_CLK_VALUE                          (CapSense_dsRam.modCsdClk)
#define CapSense_MOD_CSD_CLK_OFFSET                         (30u)
#define CapSense_MOD_CSD_CLK_SIZE                           (1u)
#define CapSense_MOD_CSD_CLK_PARAM_ID                       (0x6380001Eu)

#define CapSense_SLIDER_RESOLUTION_VALUE                    (CapSense_dsRam.wdgtList.slider.resolution)
#define CapSense_SLIDER_RESOLUTION_OFFSET                   (32u)
#define CapSense_SLIDER_RESOLUTION_SIZE                     (2u)
#define CapSense_SLIDER_RESOLUTION_PARAM_ID                 (0x80800020u)

#define CapSense_SLIDER_FINGER_TH_VALUE                     (CapSense_dsRam.wdgtList.slider.fingerTh)
#define CapSense_SLIDER_FINGER_TH_OFFSET                    (34u)
#define CapSense_SLIDER_FINGER_TH_SIZE                      (2u)
#define CapSense_SLIDER_FINGER_TH_PARAM_ID                  (0x8C800022u)

#define CapSense_SLIDER_NOISE_TH_VALUE                      (CapSense_dsRam.wdgtList.slider.noiseTh)
#define CapSense_SLIDER_NOISE_TH_OFFSET                     (36u)
#define CapSense_SLIDER_NOISE_TH_SIZE                       (1u)
#define CapSense_SLIDER_NOISE_TH_PARAM_ID                   (0x49800024u)

#define CapSense_SLIDER_NNOISE_TH_VALUE                     (CapSense_dsRam.wdgtList.slider.nNoiseTh)
#define CapSense_SLIDER_NNOISE_TH_OFFSET                    (37u)
#define CapSense_SLIDER_NNOISE_TH_SIZE                      (1u)
#define CapSense_SLIDER_NNOISE_TH_PARAM_ID                  (0x4F800025u)

#define CapSense_SLIDER_HYSTERESIS_VALUE                    (CapSense_dsRam.wdgtList.slider.hysteresis)
#define CapSense_SLIDER_HYSTERESIS_OFFSET                   (38u)
#define CapSense_SLIDER_HYSTERESIS_SIZE                     (1u)
#define CapSense_SLIDER_HYSTERESIS_PARAM_ID                 (0x45800026u)

#define CapSense_SLIDER_ON_DEBOUNCE_VALUE                   (CapSense_dsRam.wdgtList.slider.onDebounce)
#define CapSense_SLIDER_ON_DEBOUNCE_OFFSET                  (39u)
#define CapSense_SLIDER_ON_DEBOUNCE_SIZE                    (1u)
#define CapSense_SLIDER_ON_DEBOUNCE_PARAM_ID                (0x43800027u)

#define CapSense_SLIDER_LOW_BSLN_RST_VALUE                  (CapSense_dsRam.wdgtList.slider.lowBslnRst)
#define CapSense_SLIDER_LOW_BSLN_RST_OFFSET                 (40u)
#define CapSense_SLIDER_LOW_BSLN_RST_SIZE                   (1u)
#define CapSense_SLIDER_LOW_BSLN_RST_PARAM_ID               (0x4A800028u)

#define CapSense_SLIDER_IDAC_MOD0_VALUE                     (CapSense_dsRam.wdgtList.slider.idacMod[0u])
#define CapSense_SLIDER_IDAC_MOD0_OFFSET                    (41u)
#define CapSense_SLIDER_IDAC_MOD0_SIZE                      (1u)
#define CapSense_SLIDER_IDAC_MOD0_PARAM_ID                  (0x41000029u)

#define CapSense_SLIDER_IDAC_GAIN_INDEX_VALUE               (CapSense_dsRam.wdgtList.slider.idacGainIndex)
#define CapSense_SLIDER_IDAC_GAIN_INDEX_OFFSET              (42u)
#define CapSense_SLIDER_IDAC_GAIN_INDEX_SIZE                (1u)
#define CapSense_SLIDER_IDAC_GAIN_INDEX_PARAM_ID            (0x4680002Au)

#define CapSense_SLIDER_SNS_CLK_VALUE                       (CapSense_dsRam.wdgtList.slider.snsClk)
#define CapSense_SLIDER_SNS_CLK_OFFSET                      (44u)
#define CapSense_SLIDER_SNS_CLK_SIZE                        (2u)
#define CapSense_SLIDER_SNS_CLK_PARAM_ID                    (0x8380002Cu)

#define CapSense_SLIDER_SNS_CLK_SOURCE_VALUE                (CapSense_dsRam.wdgtList.slider.snsClkSource)
#define CapSense_SLIDER_SNS_CLK_SOURCE_OFFSET               (46u)
#define CapSense_SLIDER_SNS_CLK_SOURCE_SIZE                 (1u)
#define CapSense_SLIDER_SNS_CLK_SOURCE_PARAM_ID             (0x4780002Eu)

#define CapSense_SLIDER_FINGER_CAP_VALUE                    (CapSense_dsRam.wdgtList.slider.fingerCap)
#define CapSense_SLIDER_FINGER_CAP_OFFSET                   (48u)
#define CapSense_SLIDER_FINGER_CAP_SIZE                     (2u)
#define CapSense_SLIDER_FINGER_CAP_PARAM_ID                 (0xA3000030u)

#define CapSense_SLIDER_SIGPFC_VALUE                        (CapSense_dsRam.wdgtList.slider.sigPFC)
#define CapSense_SLIDER_SIGPFC_OFFSET                       (50u)
#define CapSense_SLIDER_SIGPFC_SIZE                         (2u)
#define CapSense_SLIDER_SIGPFC_PARAM_ID                     (0xAF000032u)

#define CapSense_SLIDER_SNS0_RAW0_VALUE                     (CapSense_dsRam.snsList.slider[0u].raw[0u])
#define CapSense_SLIDER_SNS0_RAW0_OFFSET                    (52u)
#define CapSense_SLIDER_SNS0_RAW0_SIZE                      (2u)
#define CapSense_SLIDER_SNS0_RAW0_PARAM_ID                  (0x89000034u)

#define CapSense_SLIDER_SNS0_BSLN0_VALUE                    (CapSense_dsRam.snsList.slider[0u].bsln[0u])
#define CapSense_SLIDER_SNS0_BSLN0_OFFSET                   (54u)
#define CapSense_SLIDER_SNS0_BSLN0_SIZE                     (2u)
#define CapSense_SLIDER_SNS0_BSLN0_PARAM_ID                 (0x85000036u)

#define CapSense_SLIDER_SNS0_BSLN_EXT0_VALUE                (CapSense_dsRam.snsList.slider[0u].bslnExt[0u])
#define CapSense_SLIDER_SNS0_BSLN_EXT0_OFFSET               (56u)
#define CapSense_SLIDER_SNS0_BSLN_EXT0_SIZE                 (1u)
#define CapSense_SLIDER_SNS0_BSLN_EXT0_PARAM_ID             (0x42000038u)

#define CapSense_SLIDER_SNS0_DIFF_VALUE                     (CapSense_dsRam.snsList.slider[0u].diff)
#define CapSense_SLIDER_SNS0_DIFF_OFFSET                    (58u)
#define CapSense_SLIDER_SNS0_DIFF_SIZE                      (2u)
#define CapSense_SLIDER_SNS0_DIFF_PARAM_ID                  (0x8600003Au)

#define CapSense_SLIDER_SNS0_NEG_BSLN_RST_CNT0_VALUE        (CapSense_dsRam.snsList.slider[0u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS0_NEG_BSLN_RST_CNT0_OFFSET       (60u)
#define CapSense_SLIDER_SNS0_NEG_BSLN_RST_CNT0_SIZE         (1u)
#define CapSense_SLIDER_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID     (0x4300003Cu)

#define CapSense_SLIDER_SNS0_IDAC_COMP0_VALUE               (CapSense_dsRam.snsList.slider[0u].idacComp[0u])
#define CapSense_SLIDER_SNS0_IDAC_COMP0_OFFSET              (61u)
#define CapSense_SLIDER_SNS0_IDAC_COMP0_SIZE                (1u)
#define CapSense_SLIDER_SNS0_IDAC_COMP0_PARAM_ID            (0x4500003Du)

#define CapSense_SLIDER_SNS1_RAW0_VALUE                     (CapSense_dsRam.snsList.slider[1u].raw[0u])
#define CapSense_SLIDER_SNS1_RAW0_OFFSET                    (62u)
#define CapSense_SLIDER_SNS1_RAW0_SIZE                      (2u)
#define CapSense_SLIDER_SNS1_RAW0_PARAM_ID                  (0x8700003Eu)

#define CapSense_SLIDER_SNS1_BSLN0_VALUE                    (CapSense_dsRam.snsList.slider[1u].bsln[0u])
#define CapSense_SLIDER_SNS1_BSLN0_OFFSET                   (64u)
#define CapSense_SLIDER_SNS1_BSLN0_SIZE                     (2u)
#define CapSense_SLIDER_SNS1_BSLN0_PARAM_ID                 (0x8A000040u)

#define CapSense_SLIDER_SNS1_BSLN_EXT0_VALUE                (CapSense_dsRam.snsList.slider[1u].bslnExt[0u])
#define CapSense_SLIDER_SNS1_BSLN_EXT0_OFFSET               (66u)
#define CapSense_SLIDER_SNS1_BSLN_EXT0_SIZE                 (1u)
#define CapSense_SLIDER_SNS1_BSLN_EXT0_PARAM_ID             (0x4E000042u)

#define CapSense_SLIDER_SNS1_DIFF_VALUE                     (CapSense_dsRam.snsList.slider[1u].diff)
#define CapSense_SLIDER_SNS1_DIFF_OFFSET                    (68u)
#define CapSense_SLIDER_SNS1_DIFF_SIZE                      (2u)
#define CapSense_SLIDER_SNS1_DIFF_PARAM_ID                  (0x8B000044u)

#define CapSense_SLIDER_SNS1_NEG_BSLN_RST_CNT0_VALUE        (CapSense_dsRam.snsList.slider[1u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS1_NEG_BSLN_RST_CNT0_OFFSET       (70u)
#define CapSense_SLIDER_SNS1_NEG_BSLN_RST_CNT0_SIZE         (1u)
#define CapSense_SLIDER_SNS1_NEG_BSLN_RST_CNT0_PARAM_ID     (0x4F000046u)

#define CapSense_SLIDER_SNS1_IDAC_COMP0_VALUE               (CapSense_dsRam.snsList.slider[1u].idacComp[0u])
#define CapSense_SLIDER_SNS1_IDAC_COMP0_OFFSET              (71u)
#define CapSense_SLIDER_SNS1_IDAC_COMP0_SIZE                (1u)
#define CapSense_SLIDER_SNS1_IDAC_COMP0_PARAM_ID            (0x49000047u)

#define CapSense_SLIDER_SNS2_RAW0_VALUE                     (CapSense_dsRam.snsList.slider[2u].raw[0u])
#define CapSense_SLIDER_SNS2_RAW0_OFFSET                    (72u)
#define CapSense_SLIDER_SNS2_RAW0_SIZE                      (2u)
#define CapSense_SLIDER_SNS2_RAW0_PARAM_ID                  (0x88000048u)

#define CapSense_SLIDER_SNS2_BSLN0_VALUE                    (CapSense_dsRam.snsList.slider[2u].bsln[0u])
#define CapSense_SLIDER_SNS2_BSLN0_OFFSET                   (74u)
#define CapSense_SLIDER_SNS2_BSLN0_SIZE                     (2u)
#define CapSense_SLIDER_SNS2_BSLN0_PARAM_ID                 (0x8400004Au)

#define CapSense_SLIDER_SNS2_BSLN_EXT0_VALUE                (CapSense_dsRam.snsList.slider[2u].bslnExt[0u])
#define CapSense_SLIDER_SNS2_BSLN_EXT0_OFFSET               (76u)
#define CapSense_SLIDER_SNS2_BSLN_EXT0_SIZE                 (1u)
#define CapSense_SLIDER_SNS2_BSLN_EXT0_PARAM_ID             (0x4100004Cu)

#define CapSense_SLIDER_SNS2_DIFF_VALUE                     (CapSense_dsRam.snsList.slider[2u].diff)
#define CapSense_SLIDER_SNS2_DIFF_OFFSET                    (78u)
#define CapSense_SLIDER_SNS2_DIFF_SIZE                      (2u)
#define CapSense_SLIDER_SNS2_DIFF_PARAM_ID                  (0x8500004Eu)

#define CapSense_SLIDER_SNS2_NEG_BSLN_RST_CNT0_VALUE        (CapSense_dsRam.snsList.slider[2u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS2_NEG_BSLN_RST_CNT0_OFFSET       (80u)
#define CapSense_SLIDER_SNS2_NEG_BSLN_RST_CNT0_SIZE         (1u)
#define CapSense_SLIDER_SNS2_NEG_BSLN_RST_CNT0_PARAM_ID     (0x47000050u)

#define CapSense_SLIDER_SNS2_IDAC_COMP0_VALUE               (CapSense_dsRam.snsList.slider[2u].idacComp[0u])
#define CapSense_SLIDER_SNS2_IDAC_COMP0_OFFSET              (81u)
#define CapSense_SLIDER_SNS2_IDAC_COMP0_SIZE                (1u)
#define CapSense_SLIDER_SNS2_IDAC_COMP0_PARAM_ID            (0x41000051u)

#define CapSense_SLIDER_SNS3_RAW0_VALUE                     (CapSense_dsRam.snsList.slider[3u].raw[0u])
#define CapSense_SLIDER_SNS3_RAW0_OFFSET                    (82u)
#define CapSense_SLIDER_SNS3_RAW0_SIZE                      (2u)
#define CapSense_SLIDER_SNS3_RAW0_PARAM_ID                  (0x83000052u)

#define CapSense_SLIDER_SNS3_BSLN0_VALUE                    (CapSense_dsRam.snsList.slider[3u].bsln[0u])
#define CapSense_SLIDER_SNS3_BSLN0_OFFSET                   (84u)
#define CapSense_SLIDER_SNS3_BSLN0_SIZE                     (2u)
#define CapSense_SLIDER_SNS3_BSLN0_PARAM_ID                 (0x8E000054u)

#define CapSense_SLIDER_SNS3_BSLN_EXT0_VALUE                (CapSense_dsRam.snsList.slider[3u].bslnExt[0u])
#define CapSense_SLIDER_SNS3_BSLN_EXT0_OFFSET               (86u)
#define CapSense_SLIDER_SNS3_BSLN_EXT0_SIZE                 (1u)
#define CapSense_SLIDER_SNS3_BSLN_EXT0_PARAM_ID             (0x4A000056u)

#define CapSense_SLIDER_SNS3_DIFF_VALUE                     (CapSense_dsRam.snsList.slider[3u].diff)
#define CapSense_SLIDER_SNS3_DIFF_OFFSET                    (88u)
#define CapSense_SLIDER_SNS3_DIFF_SIZE                      (2u)
#define CapSense_SLIDER_SNS3_DIFF_PARAM_ID                  (0x8D000058u)

#define CapSense_SLIDER_SNS3_NEG_BSLN_RST_CNT0_VALUE        (CapSense_dsRam.snsList.slider[3u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS3_NEG_BSLN_RST_CNT0_OFFSET       (90u)
#define CapSense_SLIDER_SNS3_NEG_BSLN_RST_CNT0_SIZE         (1u)
#define CapSense_SLIDER_SNS3_NEG_BSLN_RST_CNT0_PARAM_ID     (0x4900005Au)

#define CapSense_SLIDER_SNS3_IDAC_COMP0_VALUE               (CapSense_dsRam.snsList.slider[3u].idacComp[0u])
#define CapSense_SLIDER_SNS3_IDAC_COMP0_OFFSET              (91u)
#define CapSense_SLIDER_SNS3_IDAC_COMP0_SIZE                (1u)
#define CapSense_SLIDER_SNS3_IDAC_COMP0_PARAM_ID            (0x4F00005Bu)

#define CapSense_SLIDER_SNS4_RAW0_VALUE                     (CapSense_dsRam.snsList.slider[4u].raw[0u])
#define CapSense_SLIDER_SNS4_RAW0_OFFSET                    (92u)
#define CapSense_SLIDER_SNS4_RAW0_SIZE                      (2u)
#define CapSense_SLIDER_SNS4_RAW0_PARAM_ID                  (0x8C00005Cu)

#define CapSense_SLIDER_SNS4_BSLN0_VALUE                    (CapSense_dsRam.snsList.slider[4u].bsln[0u])
#define CapSense_SLIDER_SNS4_BSLN0_OFFSET                   (94u)
#define CapSense_SLIDER_SNS4_BSLN0_SIZE                     (2u)
#define CapSense_SLIDER_SNS4_BSLN0_PARAM_ID                 (0x8000005Eu)

#define CapSense_SLIDER_SNS4_BSLN_EXT0_VALUE                (CapSense_dsRam.snsList.slider[4u].bslnExt[0u])
#define CapSense_SLIDER_SNS4_BSLN_EXT0_OFFSET               (96u)
#define CapSense_SLIDER_SNS4_BSLN_EXT0_SIZE                 (1u)
#define CapSense_SLIDER_SNS4_BSLN_EXT0_PARAM_ID             (0x48000060u)

#define CapSense_SLIDER_SNS4_DIFF_VALUE                     (CapSense_dsRam.snsList.slider[4u].diff)
#define CapSense_SLIDER_SNS4_DIFF_OFFSET                    (98u)
#define CapSense_SLIDER_SNS4_DIFF_SIZE                      (2u)
#define CapSense_SLIDER_SNS4_DIFF_PARAM_ID                  (0x8C000062u)

#define CapSense_SLIDER_SNS4_NEG_BSLN_RST_CNT0_VALUE        (CapSense_dsRam.snsList.slider[4u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS4_NEG_BSLN_RST_CNT0_OFFSET       (100u)
#define CapSense_SLIDER_SNS4_NEG_BSLN_RST_CNT0_SIZE         (1u)
#define CapSense_SLIDER_SNS4_NEG_BSLN_RST_CNT0_PARAM_ID     (0x49000064u)

#define CapSense_SLIDER_SNS4_IDAC_COMP0_VALUE               (CapSense_dsRam.snsList.slider[4u].idacComp[0u])
#define CapSense_SLIDER_SNS4_IDAC_COMP0_OFFSET              (101u)
#define CapSense_SLIDER_SNS4_IDAC_COMP0_SIZE                (1u)
#define CapSense_SLIDER_SNS4_IDAC_COMP0_PARAM_ID            (0x4F000065u)

#define CapSense_SLIDER_SNS5_RAW0_VALUE                     (CapSense_dsRam.snsList.slider[5u].raw[0u])
#define CapSense_SLIDER_SNS5_RAW0_OFFSET                    (102u)
#define CapSense_SLIDER_SNS5_RAW0_SIZE                      (2u)
#define CapSense_SLIDER_SNS5_RAW0_PARAM_ID                  (0x8D000066u)

#define CapSense_SLIDER_SNS5_BSLN0_VALUE                    (CapSense_dsRam.snsList.slider[5u].bsln[0u])
#define CapSense_SLIDER_SNS5_BSLN0_OFFSET                   (104u)
#define CapSense_SLIDER_SNS5_BSLN0_SIZE                     (2u)
#define CapSense_SLIDER_SNS5_BSLN0_PARAM_ID                 (0x82000068u)

#define CapSense_SLIDER_SNS5_BSLN_EXT0_VALUE                (CapSense_dsRam.snsList.slider[5u].bslnExt[0u])
#define CapSense_SLIDER_SNS5_BSLN_EXT0_OFFSET               (106u)
#define CapSense_SLIDER_SNS5_BSLN_EXT0_SIZE                 (1u)
#define CapSense_SLIDER_SNS5_BSLN_EXT0_PARAM_ID             (0x4600006Au)

#define CapSense_SLIDER_SNS5_DIFF_VALUE                     (CapSense_dsRam.snsList.slider[5u].diff)
#define CapSense_SLIDER_SNS5_DIFF_OFFSET                    (108u)
#define CapSense_SLIDER_SNS5_DIFF_SIZE                      (2u)
#define CapSense_SLIDER_SNS5_DIFF_PARAM_ID                  (0x8300006Cu)

#define CapSense_SLIDER_SNS5_NEG_BSLN_RST_CNT0_VALUE        (CapSense_dsRam.snsList.slider[5u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS5_NEG_BSLN_RST_CNT0_OFFSET       (110u)
#define CapSense_SLIDER_SNS5_NEG_BSLN_RST_CNT0_SIZE         (1u)
#define CapSense_SLIDER_SNS5_NEG_BSLN_RST_CNT0_PARAM_ID     (0x4700006Eu)

#define CapSense_SLIDER_SNS5_IDAC_COMP0_VALUE               (CapSense_dsRam.snsList.slider[5u].idacComp[0u])
#define CapSense_SLIDER_SNS5_IDAC_COMP0_OFFSET              (111u)
#define CapSense_SLIDER_SNS5_IDAC_COMP0_SIZE                (1u)
#define CapSense_SLIDER_SNS5_IDAC_COMP0_PARAM_ID            (0x4100006Fu)

#define CapSense_SLIDER_SNS6_RAW0_VALUE                     (CapSense_dsRam.snsList.slider[6u].raw[0u])
#define CapSense_SLIDER_SNS6_RAW0_OFFSET                    (112u)
#define CapSense_SLIDER_SNS6_RAW0_SIZE                      (2u)
#define CapSense_SLIDER_SNS6_RAW0_PARAM_ID                  (0x85000070u)

#define CapSense_SLIDER_SNS6_BSLN0_VALUE                    (CapSense_dsRam.snsList.slider[6u].bsln[0u])
#define CapSense_SLIDER_SNS6_BSLN0_OFFSET                   (114u)
#define CapSense_SLIDER_SNS6_BSLN0_SIZE                     (2u)
#define CapSense_SLIDER_SNS6_BSLN0_PARAM_ID                 (0x89000072u)

#define CapSense_SLIDER_SNS6_BSLN_EXT0_VALUE                (CapSense_dsRam.snsList.slider[6u].bslnExt[0u])
#define CapSense_SLIDER_SNS6_BSLN_EXT0_OFFSET               (116u)
#define CapSense_SLIDER_SNS6_BSLN_EXT0_SIZE                 (1u)
#define CapSense_SLIDER_SNS6_BSLN_EXT0_PARAM_ID             (0x4C000074u)

#define CapSense_SLIDER_SNS6_DIFF_VALUE                     (CapSense_dsRam.snsList.slider[6u].diff)
#define CapSense_SLIDER_SNS6_DIFF_OFFSET                    (118u)
#define CapSense_SLIDER_SNS6_DIFF_SIZE                      (2u)
#define CapSense_SLIDER_SNS6_DIFF_PARAM_ID                  (0x88000076u)

#define CapSense_SLIDER_SNS6_NEG_BSLN_RST_CNT0_VALUE        (CapSense_dsRam.snsList.slider[6u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS6_NEG_BSLN_RST_CNT0_OFFSET       (120u)
#define CapSense_SLIDER_SNS6_NEG_BSLN_RST_CNT0_SIZE         (1u)
#define CapSense_SLIDER_SNS6_NEG_BSLN_RST_CNT0_PARAM_ID     (0x4F000078u)

#define CapSense_SLIDER_SNS6_IDAC_COMP0_VALUE               (CapSense_dsRam.snsList.slider[6u].idacComp[0u])
#define CapSense_SLIDER_SNS6_IDAC_COMP0_OFFSET              (121u)
#define CapSense_SLIDER_SNS6_IDAC_COMP0_SIZE                (1u)
#define CapSense_SLIDER_SNS6_IDAC_COMP0_PARAM_ID            (0x49000079u)

#define CapSense_SLIDER_SNS7_RAW0_VALUE                     (CapSense_dsRam.snsList.slider[7u].raw[0u])
#define CapSense_SLIDER_SNS7_RAW0_OFFSET                    (122u)
#define CapSense_SLIDER_SNS7_RAW0_SIZE                      (2u)
#define CapSense_SLIDER_SNS7_RAW0_PARAM_ID                  (0x8B00007Au)

#define CapSense_SLIDER_SNS7_BSLN0_VALUE                    (CapSense_dsRam.snsList.slider[7u].bsln[0u])
#define CapSense_SLIDER_SNS7_BSLN0_OFFSET                   (124u)
#define CapSense_SLIDER_SNS7_BSLN0_SIZE                     (2u)
#define CapSense_SLIDER_SNS7_BSLN0_PARAM_ID                 (0x8600007Cu)

#define CapSense_SLIDER_SNS7_BSLN_EXT0_VALUE                (CapSense_dsRam.snsList.slider[7u].bslnExt[0u])
#define CapSense_SLIDER_SNS7_BSLN_EXT0_OFFSET               (126u)
#define CapSense_SLIDER_SNS7_BSLN_EXT0_SIZE                 (1u)
#define CapSense_SLIDER_SNS7_BSLN_EXT0_PARAM_ID             (0x4200007Eu)

#define CapSense_SLIDER_SNS7_DIFF_VALUE                     (CapSense_dsRam.snsList.slider[7u].diff)
#define CapSense_SLIDER_SNS7_DIFF_OFFSET                    (128u)
#define CapSense_SLIDER_SNS7_DIFF_SIZE                      (2u)
#define CapSense_SLIDER_SNS7_DIFF_PARAM_ID                  (0x84000080u)

#define CapSense_SLIDER_SNS7_NEG_BSLN_RST_CNT0_VALUE        (CapSense_dsRam.snsList.slider[7u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS7_NEG_BSLN_RST_CNT0_OFFSET       (130u)
#define CapSense_SLIDER_SNS7_NEG_BSLN_RST_CNT0_SIZE         (1u)
#define CapSense_SLIDER_SNS7_NEG_BSLN_RST_CNT0_PARAM_ID     (0x40000082u)

#define CapSense_SLIDER_SNS7_IDAC_COMP0_VALUE               (CapSense_dsRam.snsList.slider[7u].idacComp[0u])
#define CapSense_SLIDER_SNS7_IDAC_COMP0_OFFSET              (131u)
#define CapSense_SLIDER_SNS7_IDAC_COMP0_SIZE                (1u)
#define CapSense_SLIDER_SNS7_IDAC_COMP0_PARAM_ID            (0x46000083u)

#define CapSense_SLIDER_SNS8_RAW0_VALUE                     (CapSense_dsRam.snsList.slider[8u].raw[0u])
#define CapSense_SLIDER_SNS8_RAW0_OFFSET                    (132u)
#define CapSense_SLIDER_SNS8_RAW0_SIZE                      (2u)
#define CapSense_SLIDER_SNS8_RAW0_PARAM_ID                  (0x85000084u)

#define CapSense_SLIDER_SNS8_BSLN0_VALUE                    (CapSense_dsRam.snsList.slider[8u].bsln[0u])
#define CapSense_SLIDER_SNS8_BSLN0_OFFSET                   (134u)
#define CapSense_SLIDER_SNS8_BSLN0_SIZE                     (2u)
#define CapSense_SLIDER_SNS8_BSLN0_PARAM_ID                 (0x89000086u)

#define CapSense_SLIDER_SNS8_BSLN_EXT0_VALUE                (CapSense_dsRam.snsList.slider[8u].bslnExt[0u])
#define CapSense_SLIDER_SNS8_BSLN_EXT0_OFFSET               (136u)
#define CapSense_SLIDER_SNS8_BSLN_EXT0_SIZE                 (1u)
#define CapSense_SLIDER_SNS8_BSLN_EXT0_PARAM_ID             (0x4E000088u)

#define CapSense_SLIDER_SNS8_DIFF_VALUE                     (CapSense_dsRam.snsList.slider[8u].diff)
#define CapSense_SLIDER_SNS8_DIFF_OFFSET                    (138u)
#define CapSense_SLIDER_SNS8_DIFF_SIZE                      (2u)
#define CapSense_SLIDER_SNS8_DIFF_PARAM_ID                  (0x8A00008Au)

#define CapSense_SLIDER_SNS8_NEG_BSLN_RST_CNT0_VALUE        (CapSense_dsRam.snsList.slider[8u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS8_NEG_BSLN_RST_CNT0_OFFSET       (140u)
#define CapSense_SLIDER_SNS8_NEG_BSLN_RST_CNT0_SIZE         (1u)
#define CapSense_SLIDER_SNS8_NEG_BSLN_RST_CNT0_PARAM_ID     (0x4F00008Cu)

#define CapSense_SLIDER_SNS8_IDAC_COMP0_VALUE               (CapSense_dsRam.snsList.slider[8u].idacComp[0u])
#define CapSense_SLIDER_SNS8_IDAC_COMP0_OFFSET              (141u)
#define CapSense_SLIDER_SNS8_IDAC_COMP0_SIZE                (1u)
#define CapSense_SLIDER_SNS8_IDAC_COMP0_PARAM_ID            (0x4900008Du)

#define CapSense_SLIDER_SNS9_RAW0_VALUE                     (CapSense_dsRam.snsList.slider[9u].raw[0u])
#define CapSense_SLIDER_SNS9_RAW0_OFFSET                    (142u)
#define CapSense_SLIDER_SNS9_RAW0_SIZE                      (2u)
#define CapSense_SLIDER_SNS9_RAW0_PARAM_ID                  (0x8B00008Eu)

#define CapSense_SLIDER_SNS9_BSLN0_VALUE                    (CapSense_dsRam.snsList.slider[9u].bsln[0u])
#define CapSense_SLIDER_SNS9_BSLN0_OFFSET                   (144u)
#define CapSense_SLIDER_SNS9_BSLN0_SIZE                     (2u)
#define CapSense_SLIDER_SNS9_BSLN0_PARAM_ID                 (0x81000090u)

#define CapSense_SLIDER_SNS9_BSLN_EXT0_VALUE                (CapSense_dsRam.snsList.slider[9u].bslnExt[0u])
#define CapSense_SLIDER_SNS9_BSLN_EXT0_OFFSET               (146u)
#define CapSense_SLIDER_SNS9_BSLN_EXT0_SIZE                 (1u)
#define CapSense_SLIDER_SNS9_BSLN_EXT0_PARAM_ID             (0x45000092u)

#define CapSense_SLIDER_SNS9_DIFF_VALUE                     (CapSense_dsRam.snsList.slider[9u].diff)
#define CapSense_SLIDER_SNS9_DIFF_OFFSET                    (148u)
#define CapSense_SLIDER_SNS9_DIFF_SIZE                      (2u)
#define CapSense_SLIDER_SNS9_DIFF_PARAM_ID                  (0x80000094u)

#define CapSense_SLIDER_SNS9_NEG_BSLN_RST_CNT0_VALUE        (CapSense_dsRam.snsList.slider[9u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS9_NEG_BSLN_RST_CNT0_OFFSET       (150u)
#define CapSense_SLIDER_SNS9_NEG_BSLN_RST_CNT0_SIZE         (1u)
#define CapSense_SLIDER_SNS9_NEG_BSLN_RST_CNT0_PARAM_ID     (0x44000096u)

#define CapSense_SLIDER_SNS9_IDAC_COMP0_VALUE               (CapSense_dsRam.snsList.slider[9u].idacComp[0u])
#define CapSense_SLIDER_SNS9_IDAC_COMP0_OFFSET              (151u)
#define CapSense_SLIDER_SNS9_IDAC_COMP0_SIZE                (1u)
#define CapSense_SLIDER_SNS9_IDAC_COMP0_PARAM_ID            (0x42000097u)

#define CapSense_SLIDER_SNS10_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[10u].raw[0u])
#define CapSense_SLIDER_SNS10_RAW0_OFFSET                   (152u)
#define CapSense_SLIDER_SNS10_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS10_RAW0_PARAM_ID                 (0x83000098u)

#define CapSense_SLIDER_SNS10_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[10u].bsln[0u])
#define CapSense_SLIDER_SNS10_BSLN0_OFFSET                  (154u)
#define CapSense_SLIDER_SNS10_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS10_BSLN0_PARAM_ID                (0x8F00009Au)

#define CapSense_SLIDER_SNS10_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[10u].bslnExt[0u])
#define CapSense_SLIDER_SNS10_BSLN_EXT0_OFFSET              (156u)
#define CapSense_SLIDER_SNS10_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS10_BSLN_EXT0_PARAM_ID            (0x4A00009Cu)

#define CapSense_SLIDER_SNS10_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[10u].diff)
#define CapSense_SLIDER_SNS10_DIFF_OFFSET                   (158u)
#define CapSense_SLIDER_SNS10_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS10_DIFF_PARAM_ID                 (0x8E00009Eu)

#define CapSense_SLIDER_SNS10_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[10u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS10_NEG_BSLN_RST_CNT0_OFFSET      (160u)
#define CapSense_SLIDER_SNS10_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS10_NEG_BSLN_RST_CNT0_PARAM_ID    (0x460000A0u)

#define CapSense_SLIDER_SNS10_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[10u].idacComp[0u])
#define CapSense_SLIDER_SNS10_IDAC_COMP0_OFFSET             (161u)
#define CapSense_SLIDER_SNS10_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS10_IDAC_COMP0_PARAM_ID           (0x400000A1u)

#define CapSense_SLIDER_SNS11_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[11u].raw[0u])
#define CapSense_SLIDER_SNS11_RAW0_OFFSET                   (162u)
#define CapSense_SLIDER_SNS11_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS11_RAW0_PARAM_ID                 (0x820000A2u)

#define CapSense_SLIDER_SNS11_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[11u].bsln[0u])
#define CapSense_SLIDER_SNS11_BSLN0_OFFSET                  (164u)
#define CapSense_SLIDER_SNS11_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS11_BSLN0_PARAM_ID                (0x8F0000A4u)

#define CapSense_SLIDER_SNS11_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[11u].bslnExt[0u])
#define CapSense_SLIDER_SNS11_BSLN_EXT0_OFFSET              (166u)
#define CapSense_SLIDER_SNS11_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS11_BSLN_EXT0_PARAM_ID            (0x4B0000A6u)

#define CapSense_SLIDER_SNS11_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[11u].diff)
#define CapSense_SLIDER_SNS11_DIFF_OFFSET                   (168u)
#define CapSense_SLIDER_SNS11_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS11_DIFF_PARAM_ID                 (0x8C0000A8u)

#define CapSense_SLIDER_SNS11_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[11u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS11_NEG_BSLN_RST_CNT0_OFFSET      (170u)
#define CapSense_SLIDER_SNS11_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS11_NEG_BSLN_RST_CNT0_PARAM_ID    (0x480000AAu)

#define CapSense_SLIDER_SNS11_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[11u].idacComp[0u])
#define CapSense_SLIDER_SNS11_IDAC_COMP0_OFFSET             (171u)
#define CapSense_SLIDER_SNS11_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS11_IDAC_COMP0_PARAM_ID           (0x4E0000ABu)

#define CapSense_SLIDER_SNS12_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[12u].raw[0u])
#define CapSense_SLIDER_SNS12_RAW0_OFFSET                   (172u)
#define CapSense_SLIDER_SNS12_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS12_RAW0_PARAM_ID                 (0x8D0000ACu)

#define CapSense_SLIDER_SNS12_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[12u].bsln[0u])
#define CapSense_SLIDER_SNS12_BSLN0_OFFSET                  (174u)
#define CapSense_SLIDER_SNS12_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS12_BSLN0_PARAM_ID                (0x810000AEu)

#define CapSense_SLIDER_SNS12_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[12u].bslnExt[0u])
#define CapSense_SLIDER_SNS12_BSLN_EXT0_OFFSET              (176u)
#define CapSense_SLIDER_SNS12_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS12_BSLN_EXT0_PARAM_ID            (0x430000B0u)

#define CapSense_SLIDER_SNS12_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[12u].diff)
#define CapSense_SLIDER_SNS12_DIFF_OFFSET                   (178u)
#define CapSense_SLIDER_SNS12_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS12_DIFF_PARAM_ID                 (0x870000B2u)

#define CapSense_SLIDER_SNS12_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[12u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS12_NEG_BSLN_RST_CNT0_OFFSET      (180u)
#define CapSense_SLIDER_SNS12_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS12_NEG_BSLN_RST_CNT0_PARAM_ID    (0x420000B4u)

#define CapSense_SLIDER_SNS12_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[12u].idacComp[0u])
#define CapSense_SLIDER_SNS12_IDAC_COMP0_OFFSET             (181u)
#define CapSense_SLIDER_SNS12_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS12_IDAC_COMP0_PARAM_ID           (0x440000B5u)

#define CapSense_SLIDER_SNS13_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[13u].raw[0u])
#define CapSense_SLIDER_SNS13_RAW0_OFFSET                   (182u)
#define CapSense_SLIDER_SNS13_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS13_RAW0_PARAM_ID                 (0x860000B6u)

#define CapSense_SLIDER_SNS13_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[13u].bsln[0u])
#define CapSense_SLIDER_SNS13_BSLN0_OFFSET                  (184u)
#define CapSense_SLIDER_SNS13_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS13_BSLN0_PARAM_ID                (0x890000B8u)

#define CapSense_SLIDER_SNS13_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[13u].bslnExt[0u])
#define CapSense_SLIDER_SNS13_BSLN_EXT0_OFFSET              (186u)
#define CapSense_SLIDER_SNS13_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS13_BSLN_EXT0_PARAM_ID            (0x4D0000BAu)

#define CapSense_SLIDER_SNS13_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[13u].diff)
#define CapSense_SLIDER_SNS13_DIFF_OFFSET                   (188u)
#define CapSense_SLIDER_SNS13_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS13_DIFF_PARAM_ID                 (0x880000BCu)

#define CapSense_SLIDER_SNS13_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[13u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS13_NEG_BSLN_RST_CNT0_OFFSET      (190u)
#define CapSense_SLIDER_SNS13_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS13_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4C0000BEu)

#define CapSense_SLIDER_SNS13_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[13u].idacComp[0u])
#define CapSense_SLIDER_SNS13_IDAC_COMP0_OFFSET             (191u)
#define CapSense_SLIDER_SNS13_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS13_IDAC_COMP0_PARAM_ID           (0x4A0000BFu)

#define CapSense_SLIDER_SNS14_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[14u].raw[0u])
#define CapSense_SLIDER_SNS14_RAW0_OFFSET                   (192u)
#define CapSense_SLIDER_SNS14_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS14_RAW0_PARAM_ID                 (0x890000C0u)

#define CapSense_SLIDER_SNS14_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[14u].bsln[0u])
#define CapSense_SLIDER_SNS14_BSLN0_OFFSET                  (194u)
#define CapSense_SLIDER_SNS14_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS14_BSLN0_PARAM_ID                (0x850000C2u)

#define CapSense_SLIDER_SNS14_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[14u].bslnExt[0u])
#define CapSense_SLIDER_SNS14_BSLN_EXT0_OFFSET              (196u)
#define CapSense_SLIDER_SNS14_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS14_BSLN_EXT0_PARAM_ID            (0x400000C4u)

#define CapSense_SLIDER_SNS14_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[14u].diff)
#define CapSense_SLIDER_SNS14_DIFF_OFFSET                   (198u)
#define CapSense_SLIDER_SNS14_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS14_DIFF_PARAM_ID                 (0x840000C6u)

#define CapSense_SLIDER_SNS14_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[14u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS14_NEG_BSLN_RST_CNT0_OFFSET      (200u)
#define CapSense_SLIDER_SNS14_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS14_NEG_BSLN_RST_CNT0_PARAM_ID    (0x430000C8u)

#define CapSense_SLIDER_SNS14_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[14u].idacComp[0u])
#define CapSense_SLIDER_SNS14_IDAC_COMP0_OFFSET             (201u)
#define CapSense_SLIDER_SNS14_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS14_IDAC_COMP0_PARAM_ID           (0x450000C9u)

#define CapSense_SLIDER_SNS15_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[15u].raw[0u])
#define CapSense_SLIDER_SNS15_RAW0_OFFSET                   (202u)
#define CapSense_SLIDER_SNS15_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS15_RAW0_PARAM_ID                 (0x870000CAu)

#define CapSense_SLIDER_SNS15_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[15u].bsln[0u])
#define CapSense_SLIDER_SNS15_BSLN0_OFFSET                  (204u)
#define CapSense_SLIDER_SNS15_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS15_BSLN0_PARAM_ID                (0x8A0000CCu)

#define CapSense_SLIDER_SNS15_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[15u].bslnExt[0u])
#define CapSense_SLIDER_SNS15_BSLN_EXT0_OFFSET              (206u)
#define CapSense_SLIDER_SNS15_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS15_BSLN_EXT0_PARAM_ID            (0x4E0000CEu)

#define CapSense_SLIDER_SNS15_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[15u].diff)
#define CapSense_SLIDER_SNS15_DIFF_OFFSET                   (208u)
#define CapSense_SLIDER_SNS15_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS15_DIFF_PARAM_ID                 (0x8C0000D0u)

#define CapSense_SLIDER_SNS15_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[15u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS15_NEG_BSLN_RST_CNT0_OFFSET      (210u)
#define CapSense_SLIDER_SNS15_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS15_NEG_BSLN_RST_CNT0_PARAM_ID    (0x480000D2u)

#define CapSense_SLIDER_SNS15_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[15u].idacComp[0u])
#define CapSense_SLIDER_SNS15_IDAC_COMP0_OFFSET             (211u)
#define CapSense_SLIDER_SNS15_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS15_IDAC_COMP0_PARAM_ID           (0x4E0000D3u)

#define CapSense_SLIDER_SNS16_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[16u].raw[0u])
#define CapSense_SLIDER_SNS16_RAW0_OFFSET                   (212u)
#define CapSense_SLIDER_SNS16_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS16_RAW0_PARAM_ID                 (0x8D0000D4u)

#define CapSense_SLIDER_SNS16_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[16u].bsln[0u])
#define CapSense_SLIDER_SNS16_BSLN0_OFFSET                  (214u)
#define CapSense_SLIDER_SNS16_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS16_BSLN0_PARAM_ID                (0x810000D6u)

#define CapSense_SLIDER_SNS16_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[16u].bslnExt[0u])
#define CapSense_SLIDER_SNS16_BSLN_EXT0_OFFSET              (216u)
#define CapSense_SLIDER_SNS16_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS16_BSLN_EXT0_PARAM_ID            (0x460000D8u)

#define CapSense_SLIDER_SNS16_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[16u].diff)
#define CapSense_SLIDER_SNS16_DIFF_OFFSET                   (218u)
#define CapSense_SLIDER_SNS16_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS16_DIFF_PARAM_ID                 (0x820000DAu)

#define CapSense_SLIDER_SNS16_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[16u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS16_NEG_BSLN_RST_CNT0_OFFSET      (220u)
#define CapSense_SLIDER_SNS16_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS16_NEG_BSLN_RST_CNT0_PARAM_ID    (0x470000DCu)

#define CapSense_SLIDER_SNS16_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[16u].idacComp[0u])
#define CapSense_SLIDER_SNS16_IDAC_COMP0_OFFSET             (221u)
#define CapSense_SLIDER_SNS16_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS16_IDAC_COMP0_PARAM_ID           (0x410000DDu)

#define CapSense_SLIDER_SNS17_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[17u].raw[0u])
#define CapSense_SLIDER_SNS17_RAW0_OFFSET                   (222u)
#define CapSense_SLIDER_SNS17_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS17_RAW0_PARAM_ID                 (0x830000DEu)

#define CapSense_SLIDER_SNS17_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[17u].bsln[0u])
#define CapSense_SLIDER_SNS17_BSLN0_OFFSET                  (224u)
#define CapSense_SLIDER_SNS17_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS17_BSLN0_PARAM_ID                (0x830000E0u)

#define CapSense_SLIDER_SNS17_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[17u].bslnExt[0u])
#define CapSense_SLIDER_SNS17_BSLN_EXT0_OFFSET              (226u)
#define CapSense_SLIDER_SNS17_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS17_BSLN_EXT0_PARAM_ID            (0x470000E2u)

#define CapSense_SLIDER_SNS17_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[17u].diff)
#define CapSense_SLIDER_SNS17_DIFF_OFFSET                   (228u)
#define CapSense_SLIDER_SNS17_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS17_DIFF_PARAM_ID                 (0x820000E4u)

#define CapSense_SLIDER_SNS17_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[17u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS17_NEG_BSLN_RST_CNT0_OFFSET      (230u)
#define CapSense_SLIDER_SNS17_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS17_NEG_BSLN_RST_CNT0_PARAM_ID    (0x460000E6u)

#define CapSense_SLIDER_SNS17_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[17u].idacComp[0u])
#define CapSense_SLIDER_SNS17_IDAC_COMP0_OFFSET             (231u)
#define CapSense_SLIDER_SNS17_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS17_IDAC_COMP0_PARAM_ID           (0x400000E7u)

#define CapSense_SLIDER_SNS18_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[18u].raw[0u])
#define CapSense_SLIDER_SNS18_RAW0_OFFSET                   (232u)
#define CapSense_SLIDER_SNS18_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS18_RAW0_PARAM_ID                 (0x810000E8u)

#define CapSense_SLIDER_SNS18_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[18u].bsln[0u])
#define CapSense_SLIDER_SNS18_BSLN0_OFFSET                  (234u)
#define CapSense_SLIDER_SNS18_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS18_BSLN0_PARAM_ID                (0x8D0000EAu)

#define CapSense_SLIDER_SNS18_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[18u].bslnExt[0u])
#define CapSense_SLIDER_SNS18_BSLN_EXT0_OFFSET              (236u)
#define CapSense_SLIDER_SNS18_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS18_BSLN_EXT0_PARAM_ID            (0x480000ECu)

#define CapSense_SLIDER_SNS18_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[18u].diff)
#define CapSense_SLIDER_SNS18_DIFF_OFFSET                   (238u)
#define CapSense_SLIDER_SNS18_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS18_DIFF_PARAM_ID                 (0x8C0000EEu)

#define CapSense_SLIDER_SNS18_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[18u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS18_NEG_BSLN_RST_CNT0_OFFSET      (240u)
#define CapSense_SLIDER_SNS18_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS18_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4E0000F0u)

#define CapSense_SLIDER_SNS18_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[18u].idacComp[0u])
#define CapSense_SLIDER_SNS18_IDAC_COMP0_OFFSET             (241u)
#define CapSense_SLIDER_SNS18_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS18_IDAC_COMP0_PARAM_ID           (0x480000F1u)

#define CapSense_SLIDER_SNS19_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[19u].raw[0u])
#define CapSense_SLIDER_SNS19_RAW0_OFFSET                   (242u)
#define CapSense_SLIDER_SNS19_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS19_RAW0_PARAM_ID                 (0x8A0000F2u)

#define CapSense_SLIDER_SNS19_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[19u].bsln[0u])
#define CapSense_SLIDER_SNS19_BSLN0_OFFSET                  (244u)
#define CapSense_SLIDER_SNS19_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS19_BSLN0_PARAM_ID                (0x870000F4u)

#define CapSense_SLIDER_SNS19_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[19u].bslnExt[0u])
#define CapSense_SLIDER_SNS19_BSLN_EXT0_OFFSET              (246u)
#define CapSense_SLIDER_SNS19_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS19_BSLN_EXT0_PARAM_ID            (0x430000F6u)

#define CapSense_SLIDER_SNS19_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[19u].diff)
#define CapSense_SLIDER_SNS19_DIFF_OFFSET                   (248u)
#define CapSense_SLIDER_SNS19_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS19_DIFF_PARAM_ID                 (0x840000F8u)

#define CapSense_SLIDER_SNS19_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[19u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS19_NEG_BSLN_RST_CNT0_OFFSET      (250u)
#define CapSense_SLIDER_SNS19_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS19_NEG_BSLN_RST_CNT0_PARAM_ID    (0x400000FAu)

#define CapSense_SLIDER_SNS19_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[19u].idacComp[0u])
#define CapSense_SLIDER_SNS19_IDAC_COMP0_OFFSET             (251u)
#define CapSense_SLIDER_SNS19_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS19_IDAC_COMP0_PARAM_ID           (0x460000FBu)

#define CapSense_SLIDER_SNS20_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[20u].raw[0u])
#define CapSense_SLIDER_SNS20_RAW0_OFFSET                   (252u)
#define CapSense_SLIDER_SNS20_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS20_RAW0_PARAM_ID                 (0x850000FCu)

#define CapSense_SLIDER_SNS20_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[20u].bsln[0u])
#define CapSense_SLIDER_SNS20_BSLN0_OFFSET                  (254u)
#define CapSense_SLIDER_SNS20_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS20_BSLN0_PARAM_ID                (0x890000FEu)

#define CapSense_SLIDER_SNS20_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[20u].bslnExt[0u])
#define CapSense_SLIDER_SNS20_BSLN_EXT0_OFFSET              (256u)
#define CapSense_SLIDER_SNS20_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS20_BSLN_EXT0_PARAM_ID            (0x44000100u)

#define CapSense_SLIDER_SNS20_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[20u].diff)
#define CapSense_SLIDER_SNS20_DIFF_OFFSET                   (258u)
#define CapSense_SLIDER_SNS20_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS20_DIFF_PARAM_ID                 (0x80000102u)

#define CapSense_SLIDER_SNS20_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[20u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS20_NEG_BSLN_RST_CNT0_OFFSET      (260u)
#define CapSense_SLIDER_SNS20_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS20_NEG_BSLN_RST_CNT0_PARAM_ID    (0x45000104u)

#define CapSense_SLIDER_SNS20_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[20u].idacComp[0u])
#define CapSense_SLIDER_SNS20_IDAC_COMP0_OFFSET             (261u)
#define CapSense_SLIDER_SNS20_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS20_IDAC_COMP0_PARAM_ID           (0x43000105u)

#define CapSense_SLIDER_SNS21_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[21u].raw[0u])
#define CapSense_SLIDER_SNS21_RAW0_OFFSET                   (262u)
#define CapSense_SLIDER_SNS21_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS21_RAW0_PARAM_ID                 (0x81000106u)

#define CapSense_SLIDER_SNS21_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[21u].bsln[0u])
#define CapSense_SLIDER_SNS21_BSLN0_OFFSET                  (264u)
#define CapSense_SLIDER_SNS21_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS21_BSLN0_PARAM_ID                (0x8E000108u)

#define CapSense_SLIDER_SNS21_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[21u].bslnExt[0u])
#define CapSense_SLIDER_SNS21_BSLN_EXT0_OFFSET              (266u)
#define CapSense_SLIDER_SNS21_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS21_BSLN_EXT0_PARAM_ID            (0x4A00010Au)

#define CapSense_SLIDER_SNS21_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[21u].diff)
#define CapSense_SLIDER_SNS21_DIFF_OFFSET                   (268u)
#define CapSense_SLIDER_SNS21_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS21_DIFF_PARAM_ID                 (0x8F00010Cu)

#define CapSense_SLIDER_SNS21_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[21u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS21_NEG_BSLN_RST_CNT0_OFFSET      (270u)
#define CapSense_SLIDER_SNS21_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS21_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4B00010Eu)

#define CapSense_SLIDER_SNS21_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[21u].idacComp[0u])
#define CapSense_SLIDER_SNS21_IDAC_COMP0_OFFSET             (271u)
#define CapSense_SLIDER_SNS21_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS21_IDAC_COMP0_PARAM_ID           (0x4D00010Fu)

#define CapSense_SLIDER_SNS22_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[22u].raw[0u])
#define CapSense_SLIDER_SNS22_RAW0_OFFSET                   (272u)
#define CapSense_SLIDER_SNS22_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS22_RAW0_PARAM_ID                 (0x89000110u)

#define CapSense_SLIDER_SNS22_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[22u].bsln[0u])
#define CapSense_SLIDER_SNS22_BSLN0_OFFSET                  (274u)
#define CapSense_SLIDER_SNS22_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS22_BSLN0_PARAM_ID                (0x85000112u)

#define CapSense_SLIDER_SNS22_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[22u].bslnExt[0u])
#define CapSense_SLIDER_SNS22_BSLN_EXT0_OFFSET              (276u)
#define CapSense_SLIDER_SNS22_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS22_BSLN_EXT0_PARAM_ID            (0x40000114u)

#define CapSense_SLIDER_SNS22_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[22u].diff)
#define CapSense_SLIDER_SNS22_DIFF_OFFSET                   (278u)
#define CapSense_SLIDER_SNS22_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS22_DIFF_PARAM_ID                 (0x84000116u)

#define CapSense_SLIDER_SNS22_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[22u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS22_NEG_BSLN_RST_CNT0_OFFSET      (280u)
#define CapSense_SLIDER_SNS22_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS22_NEG_BSLN_RST_CNT0_PARAM_ID    (0x43000118u)

#define CapSense_SLIDER_SNS22_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[22u].idacComp[0u])
#define CapSense_SLIDER_SNS22_IDAC_COMP0_OFFSET             (281u)
#define CapSense_SLIDER_SNS22_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS22_IDAC_COMP0_PARAM_ID           (0x45000119u)

#define CapSense_SLIDER_SNS23_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[23u].raw[0u])
#define CapSense_SLIDER_SNS23_RAW0_OFFSET                   (282u)
#define CapSense_SLIDER_SNS23_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS23_RAW0_PARAM_ID                 (0x8700011Au)

#define CapSense_SLIDER_SNS23_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[23u].bsln[0u])
#define CapSense_SLIDER_SNS23_BSLN0_OFFSET                  (284u)
#define CapSense_SLIDER_SNS23_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS23_BSLN0_PARAM_ID                (0x8A00011Cu)

#define CapSense_SLIDER_SNS23_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[23u].bslnExt[0u])
#define CapSense_SLIDER_SNS23_BSLN_EXT0_OFFSET              (286u)
#define CapSense_SLIDER_SNS23_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS23_BSLN_EXT0_PARAM_ID            (0x4E00011Eu)

#define CapSense_SLIDER_SNS23_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[23u].diff)
#define CapSense_SLIDER_SNS23_DIFF_OFFSET                   (288u)
#define CapSense_SLIDER_SNS23_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS23_DIFF_PARAM_ID                 (0x86000120u)

#define CapSense_SLIDER_SNS23_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[23u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS23_NEG_BSLN_RST_CNT0_OFFSET      (290u)
#define CapSense_SLIDER_SNS23_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS23_NEG_BSLN_RST_CNT0_PARAM_ID    (0x42000122u)

#define CapSense_SLIDER_SNS23_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[23u].idacComp[0u])
#define CapSense_SLIDER_SNS23_IDAC_COMP0_OFFSET             (291u)
#define CapSense_SLIDER_SNS23_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS23_IDAC_COMP0_PARAM_ID           (0x44000123u)

#define CapSense_SLIDER_SNS24_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[24u].raw[0u])
#define CapSense_SLIDER_SNS24_RAW0_OFFSET                   (292u)
#define CapSense_SLIDER_SNS24_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS24_RAW0_PARAM_ID                 (0x87000124u)

#define CapSense_SLIDER_SNS24_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[24u].bsln[0u])
#define CapSense_SLIDER_SNS24_BSLN0_OFFSET                  (294u)
#define CapSense_SLIDER_SNS24_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS24_BSLN0_PARAM_ID                (0x8B000126u)

#define CapSense_SLIDER_SNS24_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[24u].bslnExt[0u])
#define CapSense_SLIDER_SNS24_BSLN_EXT0_OFFSET              (296u)
#define CapSense_SLIDER_SNS24_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS24_BSLN_EXT0_PARAM_ID            (0x4C000128u)

#define CapSense_SLIDER_SNS24_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[24u].diff)
#define CapSense_SLIDER_SNS24_DIFF_OFFSET                   (298u)
#define CapSense_SLIDER_SNS24_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS24_DIFF_PARAM_ID                 (0x8800012Au)

#define CapSense_SLIDER_SNS24_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[24u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS24_NEG_BSLN_RST_CNT0_OFFSET      (300u)
#define CapSense_SLIDER_SNS24_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS24_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4D00012Cu)

#define CapSense_SLIDER_SNS24_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[24u].idacComp[0u])
#define CapSense_SLIDER_SNS24_IDAC_COMP0_OFFSET             (301u)
#define CapSense_SLIDER_SNS24_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS24_IDAC_COMP0_PARAM_ID           (0x4B00012Du)

#define CapSense_SLIDER_SNS25_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[25u].raw[0u])
#define CapSense_SLIDER_SNS25_RAW0_OFFSET                   (302u)
#define CapSense_SLIDER_SNS25_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS25_RAW0_PARAM_ID                 (0x8900012Eu)

#define CapSense_SLIDER_SNS25_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[25u].bsln[0u])
#define CapSense_SLIDER_SNS25_BSLN0_OFFSET                  (304u)
#define CapSense_SLIDER_SNS25_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS25_BSLN0_PARAM_ID                (0x83000130u)

#define CapSense_SLIDER_SNS25_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[25u].bslnExt[0u])
#define CapSense_SLIDER_SNS25_BSLN_EXT0_OFFSET              (306u)
#define CapSense_SLIDER_SNS25_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS25_BSLN_EXT0_PARAM_ID            (0x47000132u)

#define CapSense_SLIDER_SNS25_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[25u].diff)
#define CapSense_SLIDER_SNS25_DIFF_OFFSET                   (308u)
#define CapSense_SLIDER_SNS25_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS25_DIFF_PARAM_ID                 (0x82000134u)

#define CapSense_SLIDER_SNS25_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[25u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS25_NEG_BSLN_RST_CNT0_OFFSET      (310u)
#define CapSense_SLIDER_SNS25_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS25_NEG_BSLN_RST_CNT0_PARAM_ID    (0x46000136u)

#define CapSense_SLIDER_SNS25_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[25u].idacComp[0u])
#define CapSense_SLIDER_SNS25_IDAC_COMP0_OFFSET             (311u)
#define CapSense_SLIDER_SNS25_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS25_IDAC_COMP0_PARAM_ID           (0x40000137u)

#define CapSense_SLIDER_SNS26_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[26u].raw[0u])
#define CapSense_SLIDER_SNS26_RAW0_OFFSET                   (312u)
#define CapSense_SLIDER_SNS26_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS26_RAW0_PARAM_ID                 (0x81000138u)

#define CapSense_SLIDER_SNS26_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[26u].bsln[0u])
#define CapSense_SLIDER_SNS26_BSLN0_OFFSET                  (314u)
#define CapSense_SLIDER_SNS26_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS26_BSLN0_PARAM_ID                (0x8D00013Au)

#define CapSense_SLIDER_SNS26_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[26u].bslnExt[0u])
#define CapSense_SLIDER_SNS26_BSLN_EXT0_OFFSET              (316u)
#define CapSense_SLIDER_SNS26_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS26_BSLN_EXT0_PARAM_ID            (0x4800013Cu)

#define CapSense_SLIDER_SNS26_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[26u].diff)
#define CapSense_SLIDER_SNS26_DIFF_OFFSET                   (318u)
#define CapSense_SLIDER_SNS26_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS26_DIFF_PARAM_ID                 (0x8C00013Eu)

#define CapSense_SLIDER_SNS26_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[26u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS26_NEG_BSLN_RST_CNT0_OFFSET      (320u)
#define CapSense_SLIDER_SNS26_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS26_NEG_BSLN_RST_CNT0_PARAM_ID    (0x49000140u)

#define CapSense_SLIDER_SNS26_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[26u].idacComp[0u])
#define CapSense_SLIDER_SNS26_IDAC_COMP0_OFFSET             (321u)
#define CapSense_SLIDER_SNS26_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS26_IDAC_COMP0_PARAM_ID           (0x4F000141u)

#define CapSense_SLIDER_SNS27_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[27u].raw[0u])
#define CapSense_SLIDER_SNS27_RAW0_OFFSET                   (322u)
#define CapSense_SLIDER_SNS27_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS27_RAW0_PARAM_ID                 (0x8D000142u)

#define CapSense_SLIDER_SNS27_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[27u].bsln[0u])
#define CapSense_SLIDER_SNS27_BSLN0_OFFSET                  (324u)
#define CapSense_SLIDER_SNS27_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS27_BSLN0_PARAM_ID                (0x80000144u)

#define CapSense_SLIDER_SNS27_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[27u].bslnExt[0u])
#define CapSense_SLIDER_SNS27_BSLN_EXT0_OFFSET              (326u)
#define CapSense_SLIDER_SNS27_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS27_BSLN_EXT0_PARAM_ID            (0x44000146u)

#define CapSense_SLIDER_SNS27_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[27u].diff)
#define CapSense_SLIDER_SNS27_DIFF_OFFSET                   (328u)
#define CapSense_SLIDER_SNS27_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS27_DIFF_PARAM_ID                 (0x83000148u)

#define CapSense_SLIDER_SNS27_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[27u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS27_NEG_BSLN_RST_CNT0_OFFSET      (330u)
#define CapSense_SLIDER_SNS27_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS27_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4700014Au)

#define CapSense_SLIDER_SNS27_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[27u].idacComp[0u])
#define CapSense_SLIDER_SNS27_IDAC_COMP0_OFFSET             (331u)
#define CapSense_SLIDER_SNS27_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS27_IDAC_COMP0_PARAM_ID           (0x4100014Bu)

#define CapSense_SLIDER_SNS28_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[28u].raw[0u])
#define CapSense_SLIDER_SNS28_RAW0_OFFSET                   (332u)
#define CapSense_SLIDER_SNS28_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS28_RAW0_PARAM_ID                 (0x8200014Cu)

#define CapSense_SLIDER_SNS28_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[28u].bsln[0u])
#define CapSense_SLIDER_SNS28_BSLN0_OFFSET                  (334u)
#define CapSense_SLIDER_SNS28_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS28_BSLN0_PARAM_ID                (0x8E00014Eu)

#define CapSense_SLIDER_SNS28_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[28u].bslnExt[0u])
#define CapSense_SLIDER_SNS28_BSLN_EXT0_OFFSET              (336u)
#define CapSense_SLIDER_SNS28_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS28_BSLN_EXT0_PARAM_ID            (0x4C000150u)

#define CapSense_SLIDER_SNS28_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[28u].diff)
#define CapSense_SLIDER_SNS28_DIFF_OFFSET                   (338u)
#define CapSense_SLIDER_SNS28_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS28_DIFF_PARAM_ID                 (0x88000152u)

#define CapSense_SLIDER_SNS28_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[28u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS28_NEG_BSLN_RST_CNT0_OFFSET      (340u)
#define CapSense_SLIDER_SNS28_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS28_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4D000154u)

#define CapSense_SLIDER_SNS28_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[28u].idacComp[0u])
#define CapSense_SLIDER_SNS28_IDAC_COMP0_OFFSET             (341u)
#define CapSense_SLIDER_SNS28_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS28_IDAC_COMP0_PARAM_ID           (0x4B000155u)

#define CapSense_SLIDER_SNS29_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[29u].raw[0u])
#define CapSense_SLIDER_SNS29_RAW0_OFFSET                   (342u)
#define CapSense_SLIDER_SNS29_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS29_RAW0_PARAM_ID                 (0x89000156u)

#define CapSense_SLIDER_SNS29_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[29u].bsln[0u])
#define CapSense_SLIDER_SNS29_BSLN0_OFFSET                  (344u)
#define CapSense_SLIDER_SNS29_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS29_BSLN0_PARAM_ID                (0x86000158u)

#define CapSense_SLIDER_SNS29_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[29u].bslnExt[0u])
#define CapSense_SLIDER_SNS29_BSLN_EXT0_OFFSET              (346u)
#define CapSense_SLIDER_SNS29_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS29_BSLN_EXT0_PARAM_ID            (0x4200015Au)

#define CapSense_SLIDER_SNS29_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[29u].diff)
#define CapSense_SLIDER_SNS29_DIFF_OFFSET                   (348u)
#define CapSense_SLIDER_SNS29_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS29_DIFF_PARAM_ID                 (0x8700015Cu)

#define CapSense_SLIDER_SNS29_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[29u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS29_NEG_BSLN_RST_CNT0_OFFSET      (350u)
#define CapSense_SLIDER_SNS29_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS29_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4300015Eu)

#define CapSense_SLIDER_SNS29_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[29u].idacComp[0u])
#define CapSense_SLIDER_SNS29_IDAC_COMP0_OFFSET             (351u)
#define CapSense_SLIDER_SNS29_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS29_IDAC_COMP0_PARAM_ID           (0x4500015Fu)

#define CapSense_SLIDER_SNS30_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[30u].raw[0u])
#define CapSense_SLIDER_SNS30_RAW0_OFFSET                   (352u)
#define CapSense_SLIDER_SNS30_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS30_RAW0_PARAM_ID                 (0x8B000160u)

#define CapSense_SLIDER_SNS30_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[30u].bsln[0u])
#define CapSense_SLIDER_SNS30_BSLN0_OFFSET                  (354u)
#define CapSense_SLIDER_SNS30_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS30_BSLN0_PARAM_ID                (0x87000162u)

#define CapSense_SLIDER_SNS30_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[30u].bslnExt[0u])
#define CapSense_SLIDER_SNS30_BSLN_EXT0_OFFSET              (356u)
#define CapSense_SLIDER_SNS30_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS30_BSLN_EXT0_PARAM_ID            (0x42000164u)

#define CapSense_SLIDER_SNS30_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[30u].diff)
#define CapSense_SLIDER_SNS30_DIFF_OFFSET                   (358u)
#define CapSense_SLIDER_SNS30_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS30_DIFF_PARAM_ID                 (0x86000166u)

#define CapSense_SLIDER_SNS30_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[30u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS30_NEG_BSLN_RST_CNT0_OFFSET      (360u)
#define CapSense_SLIDER_SNS30_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS30_NEG_BSLN_RST_CNT0_PARAM_ID    (0x41000168u)

#define CapSense_SLIDER_SNS30_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[30u].idacComp[0u])
#define CapSense_SLIDER_SNS30_IDAC_COMP0_OFFSET             (361u)
#define CapSense_SLIDER_SNS30_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS30_IDAC_COMP0_PARAM_ID           (0x47000169u)

#define CapSense_SLIDER_SNS31_RAW0_VALUE                    (CapSense_dsRam.snsList.slider[31u].raw[0u])
#define CapSense_SLIDER_SNS31_RAW0_OFFSET                   (362u)
#define CapSense_SLIDER_SNS31_RAW0_SIZE                     (2u)
#define CapSense_SLIDER_SNS31_RAW0_PARAM_ID                 (0x8500016Au)

#define CapSense_SLIDER_SNS31_BSLN0_VALUE                   (CapSense_dsRam.snsList.slider[31u].bsln[0u])
#define CapSense_SLIDER_SNS31_BSLN0_OFFSET                  (364u)
#define CapSense_SLIDER_SNS31_BSLN0_SIZE                    (2u)
#define CapSense_SLIDER_SNS31_BSLN0_PARAM_ID                (0x8800016Cu)

#define CapSense_SLIDER_SNS31_BSLN_EXT0_VALUE               (CapSense_dsRam.snsList.slider[31u].bslnExt[0u])
#define CapSense_SLIDER_SNS31_BSLN_EXT0_OFFSET              (366u)
#define CapSense_SLIDER_SNS31_BSLN_EXT0_SIZE                (1u)
#define CapSense_SLIDER_SNS31_BSLN_EXT0_PARAM_ID            (0x4C00016Eu)

#define CapSense_SLIDER_SNS31_DIFF_VALUE                    (CapSense_dsRam.snsList.slider[31u].diff)
#define CapSense_SLIDER_SNS31_DIFF_OFFSET                   (368u)
#define CapSense_SLIDER_SNS31_DIFF_SIZE                     (2u)
#define CapSense_SLIDER_SNS31_DIFF_PARAM_ID                 (0x8E000170u)

#define CapSense_SLIDER_SNS31_NEG_BSLN_RST_CNT0_VALUE       (CapSense_dsRam.snsList.slider[31u].negBslnRstCnt[0u])
#define CapSense_SLIDER_SNS31_NEG_BSLN_RST_CNT0_OFFSET      (370u)
#define CapSense_SLIDER_SNS31_NEG_BSLN_RST_CNT0_SIZE        (1u)
#define CapSense_SLIDER_SNS31_NEG_BSLN_RST_CNT0_PARAM_ID    (0x4A000172u)

#define CapSense_SLIDER_SNS31_IDAC_COMP0_VALUE              (CapSense_dsRam.snsList.slider[31u].idacComp[0u])
#define CapSense_SLIDER_SNS31_IDAC_COMP0_OFFSET             (371u)
#define CapSense_SLIDER_SNS31_IDAC_COMP0_SIZE               (1u)
#define CapSense_SLIDER_SNS31_IDAC_COMP0_PARAM_ID           (0x4C000173u)

#define CapSense_SNR_TEST_WIDGET_ID_VALUE                   (CapSense_dsRam.snrTestWidgetId)
#define CapSense_SNR_TEST_WIDGET_ID_OFFSET                  (372u)
#define CapSense_SNR_TEST_WIDGET_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_WIDGET_ID_PARAM_ID                (0x6C000174u)

#define CapSense_SNR_TEST_SENSOR_ID_VALUE                   (CapSense_dsRam.snrTestSensorId)
#define CapSense_SNR_TEST_SENSOR_ID_OFFSET                  (373u)
#define CapSense_SNR_TEST_SENSOR_ID_SIZE                    (1u)
#define CapSense_SNR_TEST_SENSOR_ID_PARAM_ID                (0x6A000175u)

#define CapSense_SNR_TEST_SCAN_COUNTER_VALUE                (CapSense_dsRam.snrTestScanCounter)
#define CapSense_SNR_TEST_SCAN_COUNTER_OFFSET               (374u)
#define CapSense_SNR_TEST_SCAN_COUNTER_SIZE                 (2u)
#define CapSense_SNR_TEST_SCAN_COUNTER_PARAM_ID             (0x83000176u)

#define CapSense_SNR_TEST_RAW_COUNT0_VALUE                  (CapSense_dsRam.snrTestRawCount[0u])
#define CapSense_SNR_TEST_RAW_COUNT0_OFFSET                 (376u)
#define CapSense_SNR_TEST_RAW_COUNT0_SIZE                   (2u)
#define CapSense_SNR_TEST_RAW_COUNT0_PARAM_ID               (0x8C000178u)

#define CapSense_SCAN_CSD_ISC_VALUE                         (CapSense_dsRam.scanCsdISC)
#define CapSense_SCAN_CSD_ISC_OFFSET                        (378u)
#define CapSense_SCAN_CSD_ISC_SIZE                          (1u)
#define CapSense_SCAN_CSD_ISC_PARAM_ID                      (0x4800017Au)

#define CapSense_SCAN_CURRENT_ISC_VALUE                     (CapSense_dsRam.scanCurrentISC)
#define CapSense_SCAN_CURRENT_ISC_OFFSET                    (379u)
#define CapSense_SCAN_CURRENT_ISC_SIZE                      (1u)
#define CapSense_SCAN_CURRENT_ISC_PARAM_ID                  (0x4E00017Bu)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_SLIDER_PTR2SNS_FLASH_VALUE                 (CapSense_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_SLIDER_PTR2SNS_FLASH_OFFSET                (0u)
#define CapSense_SLIDER_PTR2SNS_FLASH_SIZE                  (4u)
#define CapSense_SLIDER_PTR2SNS_FLASH_PARAM_ID              (0xD1000000u)

#define CapSense_SLIDER_PTR2WD_RAM_VALUE                    (CapSense_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_SLIDER_PTR2WD_RAM_OFFSET                   (4u)
#define CapSense_SLIDER_PTR2WD_RAM_SIZE                     (4u)
#define CapSense_SLIDER_PTR2WD_RAM_PARAM_ID                 (0xD0000004u)

#define CapSense_SLIDER_PTR2SNS_RAM_VALUE                   (CapSense_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_SLIDER_PTR2SNS_RAM_OFFSET                  (8u)
#define CapSense_SLIDER_PTR2SNS_RAM_SIZE                    (4u)
#define CapSense_SLIDER_PTR2SNS_RAM_PARAM_ID                (0xD3000008u)

#define CapSense_SLIDER_PTR2FLTR_HISTORY_VALUE              (CapSense_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_SLIDER_PTR2FLTR_HISTORY_OFFSET             (12u)
#define CapSense_SLIDER_PTR2FLTR_HISTORY_SIZE               (4u)
#define CapSense_SLIDER_PTR2FLTR_HISTORY_PARAM_ID           (0xD200000Cu)

#define CapSense_SLIDER_PTR2DEBOUNCE_VALUE                  (CapSense_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_SLIDER_PTR2DEBOUNCE_OFFSET                 (16u)
#define CapSense_SLIDER_PTR2DEBOUNCE_SIZE                   (4u)
#define CapSense_SLIDER_PTR2DEBOUNCE_PARAM_ID               (0xD4000010u)

#define CapSense_SLIDER_STATIC_CONFIG_VALUE                 (CapSense_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_SLIDER_STATIC_CONFIG_OFFSET                (20u)
#define CapSense_SLIDER_STATIC_CONFIG_SIZE                  (4u)
#define CapSense_SLIDER_STATIC_CONFIG_PARAM_ID              (0xD5000014u)

#define CapSense_SLIDER_TOTAL_NUM_SNS_VALUE                 (CapSense_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_SLIDER_TOTAL_NUM_SNS_OFFSET                (24u)
#define CapSense_SLIDER_TOTAL_NUM_SNS_SIZE                  (2u)
#define CapSense_SLIDER_TOTAL_NUM_SNS_PARAM_ID              (0x99000018u)

#define CapSense_SLIDER_TYPE_VALUE                          (CapSense_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_SLIDER_TYPE_OFFSET                         (26u)
#define CapSense_SLIDER_TYPE_SIZE                           (1u)
#define CapSense_SLIDER_TYPE_PARAM_ID                       (0x5D00001Au)

#define CapSense_SLIDER_NUM_COLS_VALUE                      (CapSense_dsFlash.wdgtArray[0].numCols)
#define CapSense_SLIDER_NUM_COLS_OFFSET                     (27u)
#define CapSense_SLIDER_NUM_COLS_SIZE                       (1u)
#define CapSense_SLIDER_NUM_COLS_PARAM_ID                   (0x5B00001Bu)

#define CapSense_SLIDER_PTR2NOISE_ENVLP_VALUE               (CapSense_dsFlash.wdgtArray[0].ptr2NoiseEnvlp)
#define CapSense_SLIDER_PTR2NOISE_ENVLP_OFFSET              (28u)
#define CapSense_SLIDER_PTR2NOISE_ENVLP_SIZE                (4u)
#define CapSense_SLIDER_PTR2NOISE_ENVLP_PARAM_ID            (0xD700001Cu)


#endif /* End CY_SENSE_CapSense_REGISTER_MAP_H */


/* [] END OF FILE */
