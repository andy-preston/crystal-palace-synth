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

.equ RCC_BASE, AHB1PERIPH_BASE + 0x3800

.equ RCC_CR,         RCC_BASE        // clock control register
.equ RCC_PLLCFGR,    RCC_BASE + 0x04 // PLL configuration register
.equ RCC_CFGR,       RCC_BASE + 0x08 // clock configuration register
.equ RCC_CIR,        RCC_BASE + 0x0C // clock interrupt register
.equ RCC_AHB1RSTR,   RCC_BASE + 0x10 // AHB1 peripheral reset register
.equ RCC_AHB2RSTR,   RCC_BASE + 0x14 // AHB2 peripheral reset register
.equ RCC_AHB3RSTR,   RCC_BASE + 0x18 // AHB3 peripheral reset register
// reserved          RCC_BASE + 0x1C
.equ RCC_APB1RSTR,   RCC_BASE + 0x20 // APB1 peripheral reset register
.equ RCC_APB2RSTR,   RCC_BASE + 0x24 // APB2 peripheral reset register
// reserved          RCC_BASE + 0x28
// reserved          RCC_BASE + 0x2C
.equ RCC_AHB1ENR,    RCC_BASE + 0x30 // AHB1 peripheral clock register
.equ RCC_AHB2ENR,    RCC_BASE + 0x34 // AHB2 peripheral clock register
.equ RCC_AHB3ENR,    RCC_BASE + 0x38 // AHB3 peripheral clock register
// reserved          RCC_BASE + 0x3C
.equ RCC_APB1ENR,    RCC_BASE + 0x40 // APB1 peripheral clock enable register
.equ RCC_APB2ENR,    RCC_BASE + 0x44 // APB2 peripheral clock enable register
// reserved          RCC_BASE + 0x48
// reserved          RCC_BASE + 0x4C
.equ RCC_AHB1LPENR,  RCC_BASE + 0x50 // AHB1 periph. clk enable in low power mode
.equ RCC_AHB2LPENR,  RCC_BASE + 0x54 // AHB2 periph. clk enable in low power mode
.equ RCC_AHB3LPENR,  RCC_BASE + 0x58 // AHB3 periph. clk enable in low power mode
// reserved          RCC_BASE + 0x5C
.equ RCC_APB1LPENR,  RCC_BASE + 0x60 // APB1 periph. clk enable in low power mode
.equ RCC_APB2LPENR,  RCC_BASE + 0x64 // APB2 periph. clk enable in low power mode
// reserved          RCC_BASE + 0x68
// reserved          RCC_BASE + 0x6C
.equ RCC_BDCR,       RCC_BASE + 0x70 // Backup domain control register
.equ RCC_CSR,        RCC_BASE + 0x74 // clock control & status register
// reserved          RCC_BASE + 0x78
// reserved          RCC_BASE + 0x7C
.equ RCC_SSCGR,      RCC_BASE + 0x80 // spread spectrum clock generation register
.equ RCC_PLLI2SCFGR, RCC_BASE + 0x84 // PLLI2S configuration register
.equ RCC_PLLSAICFGR, RCC_BASE + 0x88 // PLLSAI configuration register
.equ RCC_DCKCFGR,    RCC_BASE + 0x8C // Dedicated Clocks configuration register
