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

.equ DMA1_BASE, AHB1PERIPH_BASE + 0x6000

.equ DMA1_LISR,  DMA1_BASE        // DMA low interrupt status register
.equ DMA1_HISR,  DMA1_BASE + 0x04 // DMA high interrupt status register
.equ DMA1_LIFCR, DMA1_BASE + 0x08 // DMA low interrupt flag clear register
.equ DMA1_HIFCR, DMA1_BASE + 0x0C // DMA high interrupt flag clear register

.equ DMA2_BASE, AHB1PERIPH_BASE + 0x6400

.equ DMA2_LISR,  DMA2_BASE        // DMA low interrupt status register
.equ DMA2_HISR,  DMA2_BASE + 0x04 // DMA high interrupt status register
.equ DMA2_LIFCR, DMA2_BASE + 0x08 // DMA low interrupt flag clear register
.equ DMA2_HIFCR, DMA2_BASE + 0x0C // DMA high interrupt flag clear register

.equ DMA1_S0_BASE, DMA1_BASE + 0x010

.equ DMA1_S0_CR,   DMA1_S0_BASE        // DMA stream x configuration register
.equ DMA1_S0_NDTR, DMA1_S0_BASE + 0x04 // DMA stream x number of data register
.equ DMA1_S0_PAR,  DMA1_S0_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA1_S0_M0AR, DMA1_S0_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA1_S0_M1AR, DMA1_S0_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA1_S0_FCR,  DMA1_S0_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA1_S1_BASE, DMA1_BASE + 0x028

.equ DMA1_S1_CR,   DMA1_S1_BASE        // DMA stream x configuration register
.equ DMA1_S1_NDTR, DMA1_S1_BASE + 0x04 // DMA stream x number of data register
.equ DMA1_S1_PAR,  DMA1_S1_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA1_S1_M0AR, DMA1_S1_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA1_S1_M1AR, DMA1_S1_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA1_S1_FCR,  DMA1_S1_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA1_S2_BASE, DMA1_BASE + 0x040

.equ DMA1_S2_CR,   DMA1_S2_BASE        // DMA stream x configuration register
.equ DMA1_S2_NDTR, DMA1_S2_BASE + 0x04 // DMA stream x number of data register
.equ DMA1_S2_PAR,  DMA1_S2_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA1_S2_M0AR, DMA1_S2_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA1_S2_M1AR, DMA1_S2_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA1_S2_FCR,  DMA1_S2_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA1_S3_BASE, DMA1_BASE + 0x058

.equ DMA1_S3_CR,   DMA1_S3_BASE        // DMA stream x configuration register
.equ DMA1_S3_NDTR, DMA1_S3_BASE + 0x04 // DMA stream x number of data register
.equ DMA1_S3_PAR,  DMA1_S3_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA1_S3_M0AR, DMA1_S3_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA1_S3_M1AR, DMA1_S3_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA1_S3_FCR,  DMA1_S3_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA1_S4_BASE, DMA1_BASE + 0x070

.equ DMA1_S4_CR,   DMA1_S4_BASE        // DMA stream x configuration register
.equ DMA1_S4_NDTR, DMA1_S4_BASE + 0x04 // DMA stream x number of data register
.equ DMA1_S4_PAR,  DMA1_S4_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA1_S4_M0AR, DMA1_S4_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA1_S4_M1AR, DMA1_S4_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA1_S4_FCR,  DMA1_S4_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA1_S5_BASE, DMA1_BASE + 0x088

.equ DMA1_S5_CR,   DMA1_S5_BASE        // DMA stream x configuration register
.equ DMA1_S5_NDTR, DMA1_S5_BASE + 0x04 // DMA stream x number of data register
.equ DMA1_S5_PAR,  DMA1_S5_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA1_S5_M0AR, DMA1_S5_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA1_S5_M1AR, DMA1_S5_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA1_S5_FCR,  DMA1_S5_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA1_S6_BASE, DMA1_BASE + 0x0A0

.equ DMA1_S6_CR,   DMA1_S6_BASE        // DMA stream x configuration register
.equ DMA1_S6_NDTR, DMA1_S6_BASE + 0x04 // DMA stream x number of data register
.equ DMA1_S6_PAR,  DMA1_S6_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA1_S6_M0AR, DMA1_S6_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA1_S6_M1AR, DMA1_S6_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA1_S6_FCR,  DMA1_S6_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA1_S7_BASE, DMA1_BASE + 0x0B8

.equ DMA1_S7_CR,   DMA1_S7_BASE        // DMA stream x configuration register
.equ DMA1_S7_NDTR, DMA1_S7_BASE + 0x04 // DMA stream x number of data register
.equ DMA1_S7_PAR,  DMA1_S7_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA1_S7_M0AR, DMA1_S7_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA1_S7_M1AR, DMA1_S7_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA1_S7_FCR,  DMA1_S7_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA2_S0_BASE, DMA2_BASE + 0x010

.equ DMA2_S0_CR,   DMA2_S0_BASE        // DMA stream x configuration register
.equ DMA2_S0_NDTR, DMA2_S0_BASE + 0x04 // DMA stream x number of data register
.equ DMA2_S0_PAR,  DMA2_S0_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA2_S0_M0AR, DMA2_S0_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA2_S0_M1AR, DMA2_S0_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA2_S0_FCR,  DMA2_S0_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA2_S1_BASE, DMA2_BASE + 0x028

.equ DMA2_S1_CR,   DMA2_S1_BASE        // DMA stream x configuration register
.equ DMA2_S1_NDTR, DMA2_S1_BASE + 0x04 // DMA stream x number of data register
.equ DMA2_S1_PAR,  DMA2_S1_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA2_S1_M0AR, DMA2_S1_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA2_S1_M1AR, DMA2_S1_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA2_S1_FCR,  DMA2_S1_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA2_S2_BASE, DMA2_BASE + 0x040

.equ DMA2_S2_CR,   DMA2_S2_BASE        // DMA stream x configuration register
.equ DMA2_S2_NDTR, DMA2_S2_BASE + 0x04 // DMA stream x number of data register
.equ DMA2_S2_PAR,  DMA2_S2_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA2_S2_M0AR, DMA2_S2_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA2_S2_M1AR, DMA2_S2_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA2_S2_FCR,  DMA2_S2_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA2_S3_BASE, DMA2_BASE + 0x058

.equ DMA2_S3_CR,   DMA2_S3_BASE        // DMA stream x configuration register
.equ DMA2_S3_NDTR, DMA2_S3_BASE + 0x04 // DMA stream x number of data register
.equ DMA2_S3_PAR,  DMA2_S3_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA2_S3_M0AR, DMA2_S3_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA2_S3_M1AR, DMA2_S3_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA2_S3_FCR,  DMA2_S3_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA2_S4_BASE, DMA2_BASE + 0x070

.equ DMA2_S4_CR,   DMA2_S4_BASE        // DMA stream x configuration register
.equ DMA2_S4_NDTR, DMA2_S4_BASE + 0x04 // DMA stream x number of data register
.equ DMA2_S4_PAR,  DMA2_S4_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA2_S4_M0AR, DMA2_S4_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA2_S4_M1AR, DMA2_S4_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA2_S4_FCR,  DMA2_S4_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA2_S5_BASE, DMA2_BASE + 0x088

.equ DMA2_S5_CR,   DMA2_S5_BASE        // DMA stream x configuration register
.equ DMA2_S5_NDTR, DMA2_S5_BASE + 0x04 // DMA stream x number of data register
.equ DMA2_S5_PAR,  DMA2_S5_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA2_S5_M0AR, DMA2_S5_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA2_S5_M1AR, DMA2_S5_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA2_S5_FCR,  DMA2_S5_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA2_S6_BASE, DMA2_BASE + 0x0A0

.equ DMA2_S6_CR,   DMA2_S6_BASE        // DMA stream x configuration register
.equ DMA2_S6_NDTR, DMA2_S6_BASE + 0x04 // DMA stream x number of data register
.equ DMA2_S6_PAR,  DMA2_S6_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA2_S6_M0AR, DMA2_S6_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA2_S6_M1AR, DMA2_S6_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA2_S6_FCR,  DMA2_S6_BASE + 0x14 // DMA stream x FIFO control register

.equ DMA2_S7_BASE, DMA2_BASE + 0x0B8

.equ DMA2_S7_CR,   DMA2_S7_BASE        // DMA stream x configuration register
.equ DMA2_S7_NDTR, DMA2_S7_BASE + 0x04 // DMA stream x number of data register
.equ DMA2_S7_PAR,  DMA2_S7_BASE + 0x08 // DMA stream x peripheral address register
.equ DMA2_S7_M0AR, DMA2_S7_BASE + 0x0C // DMA stream x memory 0 address register
.equ DMA2_S7_M1AR, DMA2_S7_BASE + 0x10 // DMA stream x memory 1 address register
.equ DMA2_S7_FCR,  DMA2_S7_BASE + 0x14 // DMA stream x FIFO control register
