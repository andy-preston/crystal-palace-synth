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

.equ SPI2_BASE, APB1PERIPH_BASE + 0x3800
.equ SPI3_BASE, APB1PERIPH_BASE + 0x3C00

.equ SPI1_BASE, APB2PERIPH_BASE + 0x3000
.equ SPI4_BASE, APB2PERIPH_BASE + 0x3400
.equ SPI5_BASE, APB2PERIPH_BASE + 0x5000
.equ SPI6_BASE, APB2PERIPH_BASE + 0x5400

// These registers are 16 bit

.equ SPI1_CR1,     SPI1_BASE        // control register 1 (not used in I2S mode)
// reserved                    0x02
.equ SPI1_CR2,     SPI1_BASE + 0x04 // control register 2
// reserved                    0x06
.equ SPI1_SR,      SPI1_BASE + 0x08 // status register
// reserved                    0x0A
.equ SPI1_DR,      SPI1_BASE + 0x0C // data register
// reserved                    0x0E
.equ SPI1_CRCPR,   SPI1_BASE + 0x10 // CRC polynomial reg. (not used in I2S mode)
// reserved                    0x12
.equ SPI1_RXCRCR,  SPI1_BASE + 0x14 // RX CRC register (not used in I2S mode)
// reserved                    0x16
.equ SPI1_TXCRCR,  SPI1_BASE + 0x18 // TX CRC register (not used in I2S mode)
// reserved                    0x1A
.equ SPI1_I2SCFGR, SPI1_BASE + 0x1C // I2S configuration register
// reserved                    0x1E
.equ SPI1_I2SPR,   SPI1_BASE + 0x20 // I2S prescaler register
// reserved                    0x22

.equ SPI2_CR1,     SPI2_BASE        // control register 1 (not used in I2S mode)
// reserved                    0x02
.equ SPI2_CR2,     SPI2_BASE + 0x04 // control register 2
// reserved                    0x06
.equ SPI2_SR,      SPI2_BASE + 0x08 // status register
// reserved                    0x0A
.equ SPI2_DR,      SPI2_BASE + 0x0C // data register
// reserved                    0x0E
.equ SPI2_CRCPR,   SPI2_BASE + 0x10 // CRC polynomial reg. (not used in I2S mode)
// reserved                    0x12
.equ SPI2_RXCRCR,  SPI2_BASE + 0x14 // RX CRC register (not used in I2S mode)
// reserved                    0x16
.equ SPI2_TXCRCR,  SPI2_BASE + 0x18 // TX CRC register (not used in I2S mode)
// reserved                    0x1A
.equ SPI2_I2SCFGR, SPI2_BASE + 0x1C // I2S configuration register
// reserved                    0x1E
.equ SPI2_I2SPR,   SPI2_BASE + 0x20 // I2S prescaler register
// reserved                    0x22

.equ SPI3_CR1,     SPI3_BASE        // control register 1 (not used in I2S mode)
// reserved                    0x02
.equ SPI3_CR2,     SPI3_BASE + 0x04 // control register 2
// reserved                    0x06
.equ SPI3_SR,      SPI3_BASE + 0x08 // status register
// reserved                    0x0A
.equ SPI3_DR,      SPI3_BASE + 0x0C // data register
// reserved                    0x0E
.equ SPI3_CRCPR,   SPI3_BASE + 0x10 // CRC polynomial reg. (not used in I2S mode)
// reserved                    0x12
.equ SPI3_RXCRCR,  SPI3_BASE + 0x14 // RX CRC register (not used in I2S mode)
// reserved                    0x16
.equ SPI3_TXCRCR,  SPI3_BASE + 0x18 // TX CRC register (not used in I2S mode)
// reserved                    0x1A
.equ SPI3_I2SCFGR, SPI3_BASE + 0x1C // I2S configuration register
// reserved                    0x1E
.equ SPI3_I2SPR,   SPI3_BASE + 0x20 // I2S prescaler register
// reserved                    0x22

.equ SPI4_CR1,     SPI4_BASE        // control register 1 (not used in I2S mode)
// reserved                    0x02
.equ SPI4_CR2,     SPI4_BASE + 0x04 // control register 2
// reserved                    0x06
.equ SPI4_SR,      SPI4_BASE + 0x08 // status register
// reserved                    0x0A
.equ SPI4_DR,      SPI4_BASE + 0x0C // data register
// reserved                    0x0E
.equ SPI4_CRCPR,   SPI4_BASE + 0x10 // CRC polynomial reg. (not used in I2S mode)
// reserved                    0x12
.equ SPI4_RXCRCR,  SPI4_BASE + 0x14 // RX CRC register (not used in I2S mode)
// reserved                    0x16
.equ SPI4_TXCRCR,  SPI4_BASE + 0x18 // TX CRC register (not used in I2S mode)
// reserved                    0x1A
.equ SPI4_I2SCFGR, SPI4_BASE + 0x1C // I2S configuration register
// reserved                    0x1E
.equ SPI4_I2SPR,   SPI4_BASE + 0x20 // I2S prescaler register
// reserved                    0x22

.equ SPI5_CR1,     SPI5_BASE        // control register 1 (not used in I2S mode)
// reserved                    0x02
.equ SPI5_CR2,     SPI5_BASE + 0x04 // control register 2
// reserved                    0x06
.equ SPI5_SR,      SPI5_BASE + 0x08 // status register
// reserved                    0x0A
.equ SPI5_DR,      SPI5_BASE + 0x0C // data register
// reserved                    0x0E
.equ SPI5_CRCPR,   SPI5_BASE + 0x10 // CRC polynomial reg. (not used in I2S mode)
// reserved                    0x12
.equ SPI5_RXCRCR,  SPI5_BASE + 0x14 // RX CRC register (not used in I2S mode)
// reserved                    0x16
.equ SPI5_TXCRCR,  SPI5_BASE + 0x18 // TX CRC register (not used in I2S mode)
// reserved                    0x1A
.equ SPI5_I2SCFGR, SPI5_BASE + 0x1C // I2S configuration register
// reserved                    0x1E
.equ SPI5_I2SPR,   SPI5_BASE + 0x20 // I2S prescaler register
// reserved                    0x22

.equ SPI6_CR1,     SPI6_BASE        // control register 1 (not used in I2S mode)
// reserved                    0x02
.equ SPI6_CR2,     SPI6_BASE + 0x04 // control register 2
// reserved                    0x06
.equ SPI6_SR,      SPI6_BASE + 0x08 // status register
// reserved                    0x0A
.equ SPI6_DR,      SPI6_BASE + 0x0C // data register
// reserved                    0x0E
.equ SPI6_CRCPR,   SPI6_BASE + 0x10 // CRC polynomial reg. (not used in I2S mode)
// reserved                    0x12
.equ SPI6_RXCRCR,  SPI6_BASE + 0x14 // RX CRC register (not used in I2S mode)
// reserved                    0x16
.equ SPI6_TXCRCR,  SPI6_BASE + 0x18 // TX CRC register (not used in I2S mode)
// reserved                    0x1A
.equ SPI6_I2SCFGR, SPI6_BASE + 0x1C // I2S configuration register
// reserved                    0x1E
.equ SPI6_I2SPR,   SPI6_BASE + 0x20 // I2S prescaler register
// reserved                    0x22
