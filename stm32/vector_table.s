/* Based on C header file by STMicroelectronics
 *
 *******************************************************************************
 *
 * <h2><center>&copy; COPYRIGHT 2013 STMicroelectronics</center></h2>
 *
 * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *        http://www.st.com/software_license_agreement_liberty_v2
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *******************************************************************************
 */

    .include "inc/preamble.inc"
    .section .text, "ax"
    .org 0

    // weak aliases will be overridden by any function with the same name

    .thumb_set reserved,  Default_handler
    .global Default_handler

vector_table:
    .word _estack                                                        // 0000

    .global Reset_handler
    .word Reset_handler                                                  // 0004

    .word NMI_handler                                                // -14 0008
    .weak NMI_handler
    .thumb_set NMI_handler,  Default_handler

    .word HardFault_handler                                          // -13 000C
    .weak HardFault_handler
    .thumb_set HardFault_handler,  Default_handler

    .word MemManage_handler                                          // -12 0010
    .weak MemManage_handler
    .thumb_set MemManage_handler,  Default_handler

    .word BusFault_handler                                           // -11 0014
    .weak BusFault_handler
    .thumb_set BusFault_handler,  Default_handler

    .word UsageFault_handler                                         // -10 0018
    .weak UsageFault_handler
    .thumb_set UsageFault_handler,  Default_handler

    .word reserved                                                    // -9 001C

    .word reserved                                                    // -8 0020

    .word reserved                                                    // -7 0024

    .word reserved                                                    // -6 0028

    .word SVCall_handler                                              // -5 002C
    .weak SVCall_handler
    .thumb_set SVCall_handler,  Default_handler

    .word Debug_Monitor_handler                                       // -4 0030
    .weak Debug_Monitor_handler
    .thumb_set Debug_Monitor_handler,  Default_handler

    .word reserved                                                    // -3 0034

    .word PendSV_handler                                              // -2 0038
    .weak PendSV_handler
    .thumb_set PendSV_handler,  Default_handler

    .word Systick_handler                                             // -1 003C
    .weak Systick_handler
    .thumb_set Systick_handler,  Default_handler

    .word WWDG_handler                                                 // 0 0040
    .weak WWDG_handler
    .thumb_set WWDG_handler,  Default_handler

    .word EXTI16_PVD_handler                                           // 1 0044
    .weak EXTI16_PVD_handler
    .thumb_set EXTI16_PVD_handler,  Default_handler

    .word EXTI21_TAMP_STAMP_handler                                    // 2 0048
    .weak EXTI21_TAMP_STAMP_handler
    .thumb_set EXTI21_TAMP_STAMP_handler,  Default_handler

    .word EXTI22_RTC_WKUP_handler                                      // 3 004C
    .weak EXTI22_RTC_WKUP_handler
    .thumb_set EXTI22_RTC_WKUP_handler,  Default_handler

    .word FLASH_handler                                                // 4 0050
    .weak FLASH_handler
    .thumb_set FLASH_handler,  Default_handler

    .word RCC_handler                                                  // 5 0054
    .weak RCC_handler
    .thumb_set RCC_handler,  Default_handler

    .word EXTI0_handler                                                // 6 0058
    .weak EXTI0_handler
    .thumb_set EXTI0_handler,  Default_handler

    .word EXTI1_handler                                                // 7 005C
    .weak EXTI1_handler
    .thumb_set EXTI1_handler,  Default_handler

    .word EXTI2_handler                                                // 8 0060
    .weak EXTI2_handler
    .thumb_set EXTI2_handler,  Default_handler

    .word EXTI3_handler                                                // 9 0064
    .weak EXTI3_handler
    .thumb_set EXTI3_handler,  Default_handler

    .word EXTI4_handler                                               // 10 0068
    .weak EXTI4_handler
    .thumb_set EXTI4_handler,  Default_handler

    .word DMA1_Stream0_handler                                        // 11 006C
    .weak DMA1_Stream0_handler
    .thumb_set DMA1_Stream0_handler,  Default_handler

    .word DMA1_Stream1_handler                                        // 12 0070
    .weak DMA1_Stream1_handler
    .thumb_set DMA1_Stream1_handler,  Default_handler

    .word DMA1_Stream2_handler                                        // 13 0074
    .weak DMA1_Stream2_handler
    .thumb_set DMA1_Stream2_handler,  Default_handler

    .word DMA1_Stream3_handler                                        // 14 0078
    .weak DMA1_Stream3_handler
    .thumb_set DMA1_Stream3_handler,  Default_handler

    .word DMA1_Stream4_handler                                        // 15 007C
    .weak DMA1_Stream4_handler
    .thumb_set DMA1_Stream4_handler,  Default_handler

    .word DMA1_Stream5_handler                                        // 16 0080
    .weak DMA1_Stream5_handler
    .thumb_set DMA1_Stream5_handler,  Default_handler

    .word DMA1_Stream6_handler                                        // 17 0084
    .weak DMA1_Stream6_handler
    .thumb_set DMA1_Stream6_handler,  Default_handler

    .word ADC_handler                                                 // 18 0088
    .weak ADC_handler
    .thumb_set ADC_handler,  Default_handler

    .word CAN1_TX_handler                                             // 19 008c
    .weak CAN1_TX_handler
    .thumb_set CAN1_TX_handler,  Default_handler

    .word CAN1_RX0_handler                                            // 20 0090
    .weak CAN1_RX0_handler
    .thumb_set CAN1_RX0_handler,  Default_handler

    .word CAN1_RX1_handler                                            // 21 0094
    .weak CAN1_RX1_handler
    .thumb_set CAN1_RX1_handler,  Default_handler

    .word CAN1_SCE_handler                                            // 22 0098
    .weak CAN1_SCE_handler
    .thumb_set CAN1_SCE_handler,  Default_handler

    .word EXTI9_5_handler                                             // 23 009C
    .weak EXTI9_5_handler
    .thumb_set EXTI9_5_handler,  Default_handler

    .word TIM1_BRK_TIM9_handler                                       // 24 00A0
    .weak TIM1_BRK_TIM9_handler
    .thumb_set TIM1_BRK_TIM9_handler,  Default_handler

    .word TIM1_UP_TIM10_handler                                       // 25 00A4
    .weak TIM1_UP_TIM10_handler
    .thumb_set TIM1_UP_TIM10_handler,  Default_handler

    .word TIM1_TRG_COM_TIM11_handler                                  // 26 00A8
    .weak TIM1_TRG_COM_TIM11_handler
    .thumb_set TIM1_TRG_COM_TIM11_handler,  Default_handler

    .word TIM1_CC_handler                                             // 27 00AC
    .weak TIM1_CC_handler
    .thumb_set TIM1_CC_handler,  Default_handler

    .word TIM2_handler                                                // 28 00B0
    .weak TIM2_handler
    .thumb_set TIM2_handler,  Default_handler

    .word TIM3_handler                                                // 29 00B4
    .weak TIM3_handler
    .thumb_set TIM3_handler,  Default_handler

    .word TIM4_handler                                                // 30 00B8
    .weak TIM4_handler
    .thumb_set TIM4_handler,  Default_handler

    .word I2C1_EV_handler                                             // 31 00BC
    .weak I2C1_EV_handler
    .thumb_set I2C1_EV_handler,  Default_handler

    .word I2C1_ER_handler                                             // 32 00C0
    .weak I2C1_ER_handler
    .thumb_set I2C1_ER_handler,  Default_handler

    .word I2C2_EV_handler                                             // 33 00C4
    .weak I2C2_EV_handler
    .thumb_set I2C2_EV_handler,  Default_handler

    .word I2C2_ER_handler                                             // 34 00C8
    .weak I2C2_ER_handler
    .thumb_set I2C2_ER_handler,  Default_handler

    .word SPI1_handler                                                // 35 00CC
    .weak SPI1_handler
    .thumb_set SPI1_handler,  Default_handler

    .word SPI2_handler                                                // 36 00D0
    .weak SPI2_handler
    .thumb_set SPI2_handler,  Default_handler

    .word USART1_handler                                              // 37 00D4
    .weak USART1_handler
    .thumb_set USART1_handler,  Default_handler

    .word USART2_handler                                              // 38 00D8
    .weak USART2_handler
    .thumb_set USART2_handler,  Default_handler

    .word USART3_handler                                              // 39 00DC
    .weak USART3_handler
    .thumb_set USART3_handler,  Default_handler

    .word EXTI15_10_handler                                           // 40 00E0
    .weak EXTI15_10_handler
    .thumb_set EXTI15_10_handler,  Default_handler

    .word EXTI17_RTC_Alarm_handler                                    // 41 00E4
    .weak EXTI17_RTC_Alarm_handler
    .thumb_set EXTI17_RTC_Alarm_handler,  Default_handler

    .word EXTI18_OTG_FS_WKUP_handler                                  // 42 00E8
    .weak EXTI18_OTG_FS_WKUP_handler
    .thumb_set EXTI18_OTG_FS_WKUP_handler,  Default_handler

    .word TIM8_BRK_TIM12_handler                                      // 43 00EC
    .weak TIM8_BRK_TIM12_handler
    .thumb_set TIM8_BRK_TIM12_handler,  Default_handler

    .word TIM8_UP_TIM13_handler                                       // 44 00F0
    .weak TIM8_UP_TIM13_handler
    .thumb_set TIM8_UP_TIM13_handler,  Default_handler

    .word TIM8_TRG_COM_TIM14_handler                                  // 45 00F4
    .weak TIM8_TRG_COM_TIM14_handler
    .thumb_set TIM8_TRG_COM_TIM14_handler,  Default_handler

    .word TIM8_CC_handler                                             // 46 00F8
    .weak TIM8_CC_handler
    .thumb_set TIM8_CC_handler,  Default_handler

    .word DMA1_Stream7_handler                                        // 47 00FC
    .weak DMA1_Stream7_handler
    .thumb_set DMA1_Stream7_handler,  Default_handler

    .word FSMC_handler                                                // 48 0100
    .weak FSMC_handler
    .thumb_set FSMC_handler,  Default_handler

    .word SDIO_handler                                                // 49 0104
    .weak SDIO_handler
    .thumb_set SDIO_handler,  Default_handler

    .word TIM5_handler                                                // 50 0108
    .weak TIM5_handler
    .thumb_set TIM5_handler,  Default_handler

    .word SPI3_handler                                                // 51 010C
    .weak SPI3_handler
    .thumb_set SPI3_handler,  Default_handler

    .word UART4_handler                                               // 52 0110
    .weak UART4_handler
    .thumb_set UART4_handler,  Default_handler

    .word UART5_handler                                               // 53 0114
    .weak UART5_handler
    .thumb_set UART5_handler,  Default_handler

    .word TIM6_DAC_handler                                            // 54 0118
    .weak TIM6_DAC_handler
    .thumb_set TIM6_DAC_handler,  Default_handler

    .word TIM7_handler                                                // 55 011C
    .weak TIM7_handler
    .thumb_set TIM7_handler,  Default_handler

    .word DMA2_Stream0_handler                                        // 56 0120
    .weak DMA2_Stream0_handler
    .thumb_set DMA2_Stream0_handler,  Default_handler

    .word DMA2_Stream1_handler                                        // 57 0124
    .weak DMA2_Stream1_handler
    .thumb_set DMA2_Stream1_handler,  Default_handler

    .word DMA2_Stream2_handler                                        // 58 0128
    .weak DMA2_Stream2_handler
    .thumb_set DMA2_Stream2_handler,  Default_handler

    .word DMA2_Stream3_handler                                        // 59 012C
    .weak DMA2_Stream3_handler
    .thumb_set DMA2_Stream3_handler,  Default_handler

    .word DMA2_Stream4_handler                                        // 60 0130
    .weak DMA2_Stream4_handler
    .thumb_set DMA2_Stream4_handler,  Default_handler

    .word ETH_handler                                                 // 61 0134
    .weak ETH_handler
    .thumb_set ETH_handler,  Default_handler

    .word ETH_WKUP_handler                                            // 62 0138
    .weak ETH_WKUP_handler
    .thumb_set ETH_WKUP_handler,  Default_handler

    .word CAN2_TX_handler                                             // 63 013C
    .weak CAN2_TX_handler
    .thumb_set CAN2_TX_handler,  Default_handler

    .word CAN2_RX0_handler                                            // 64 0140
    .weak CAN2_RX0_handler
    .thumb_set CAN2_RX0_handler,  Default_handler

    .word CAN2_RX1_handler                                            // 65 0144
    .weak CAN2_RX1_handler
    .thumb_set CAN2_RX1_handler,  Default_handler

    .word CAN2_SCE_handler                                            // 66 0148
    .weak CAN2_SCE_handler
    .thumb_set CAN2_SCE_handler,  Default_handler

    .word OTG_FS_handler                                              // 67 014C
    .weak OTG_FS_handler
    .thumb_set OTG_FS_handler,  Default_handler

    .word DMA2_Stream5_handler                                        // 68 0150
    .weak DMA2_Stream5_handler
    .thumb_set DMA2_Stream5_handler,  Default_handler

    .word DMA2_Stream6_handler                                        // 69 0154
    .weak DMA2_Stream6_handler
    .thumb_set DMA2_Stream6_handler,  Default_handler

    .word DMA2_Stream7_handler                                        // 70 0158
    .weak DMA2_Stream7_handler
    .thumb_set DMA2_Stream7_handler,  Default_handler

    .word USART6_handler                                              // 71 015C
    .weak USART6_handler
    .thumb_set USART6_handler,  Default_handler

    .word I2C3_EV_handler                                             // 72 0160
    .weak I2C3_EV_handler
    .thumb_set I2C3_EV_handler,  Default_handler

    .word I2C3_ER_handler                                             // 73 0164
    .weak I2C3_ER_handler
    .thumb_set I2C3_ER_handler,  Default_handler

    .word OTG_HS_EP1_OUT_handler                                      // 74 0168
    .weak OTG_HS_EP1_OUT_handler
    .thumb_set OTG_HS_EP1_OUT_handler,  Default_handler

    .word OTG_HS_EP1_IN_handler                                       // 75 016C
    .weak OTG_HS_EP1_IN_handler
    .thumb_set OTG_HS_EP1_IN_handler,  Default_handler

    .word OTG_HS_WKUP_handler                                         // 76 0170
    .weak OTG_HS_WKUP_handler
    .thumb_set OTG_HS_WKUP_handler,  Default_handler

    .word OTG_HS_handler                                              // 77 1740
    .weak OTG_HS_handler
    .thumb_set OTG_HS_handler,  Default_handler

    .word DCMI_handler                                                // 78 0178
    .weak DCMI_handler
    .thumb_set DCMI_handler,  Default_handler

    .word CRYP_handler                                                // 79 017C
    .weak CRYP_handler
    .thumb_set CRYP_handler,  Default_handler

    .word HASH_RNG_handler                                            // 80 0180
    .weak HASH_RNG_handler
    .thumb_set HASH_RNG_handler,  Default_handler

    .word FPU_handler                                                 // 81 0184
    .weak FPU_handler
    .thumb_set FPU_handler,  Default_handler

    .word  Default_handler // unknown                                  // 82 0188

    .word  Default_handler // unknown                                  // 83 018C

    .word SPI4_handler                                                // 84 0190
    .weak SPI4_handler
    .thumb_set SPI4_handler,  Default_handler

    .size vector_table, . - vector_table

Default_handler:
    b Default_handler
