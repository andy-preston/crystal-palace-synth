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

.equ DMA_SxCR_CHSEL,    0x0E000000
.equ DMA_SxCR_CHSEL_0,  0x02000000
.equ DMA_SxCR_CHSEL_1,  0x04000000
.equ DMA_SxCR_CHSEL_2,  0x08000000
.equ DMA_SxCR_MBURST,   0x01800000
.equ DMA_SxCR_MBURST_0, 0x00800000
.equ DMA_SxCR_MBURST_1, 0x01000000
.equ DMA_SxCR_PBURST,   0x00600000
.equ DMA_SxCR_PBURST_0, 0x00200000
.equ DMA_SxCR_PBURST_1, 0x00400000
.equ DMA_SxCR_ACK,      0x00100000
.equ DMA_SxCR_CT,       0x00080000
.equ DMA_SxCR_DBM,      0x00040000
.equ DMA_SxCR_PL,       0x00030000
.equ DMA_SxCR_PL_0,     0x00010000
.equ DMA_SxCR_PL_1,     0x00020000
.equ DMA_SxCR_PINCOS,   0x00008000
.equ DMA_SxCR_MSIZE,    0x00006000
.equ DMA_SxCR_MSIZE_0,  0x00002000
.equ DMA_SxCR_MSIZE_1,  0x00004000
.equ DMA_SxCR_PSIZE,    0x00001800
.equ DMA_SxCR_PSIZE_0,  0x00000800
.equ DMA_SxCR_PSIZE_1,  0x00001000
.equ DMA_SxCR_MINC,     0x00000400
.equ DMA_SxCR_PINC,     0x00000200
.equ DMA_SxCR_CIRC,     0x00000100
.equ DMA_SxCR_DIR,      0x000000C0
.equ DMA_SxCR_DIR_0,    0x00000040
.equ DMA_SxCR_DIR_1,    0x00000080
.equ DMA_SxCR_PFCTRL,   0x00000020
.equ DMA_SxCR_TCIE,     0x00000010
.equ DMA_SxCR_HTIE,     0x00000008
.equ DMA_SxCR_TEIE,     0x00000004
.equ DMA_SxCR_DMEIE,    0x00000002
.equ DMA_SxCR_EN,       0x00000001

.equ DMA_Channel_0, 0
.equ DMA_Channel_1, DMA_SxCR_CHSEL_0
.equ DMA_Channel_2, DMA_SxCR_CHSEL_1
.equ DMA_Channel_3, DMA_SxCR_CHSEL_0 | DMA_SxCR_CHSEL_1
.equ DMA_Channel_4, DMA_SxCR_CHSEL_2
.equ DMA_Channel_5, DMA_SxCR_CHSEL_0 | DMA_SxCR_CHSEL_2
.equ DMA_Channel_6, DMA_SxCR_CHSEL_1 | DMA_SxCR_CHSEL_2
.equ DMA_Channel_7, DMA_SxCR_CHSEL

.equ DMA_DIR_PeripheralToMemory, 0
.equ DMA_DIR_MemoryToPeripheral, DMA_SxCR_DIR_0
.equ DMA_DIR_MemoryToMemory, DMA_SxCR_DIR_1

.equ DMA_PeripheralInc_Disable, 0
.equ DMA_PeripheralInc_Enable, DMA_SxCR_PINC

.equ DMA_MemoryInc_Disable, 0
.equ DMA_MemoryInc_Enable, DMA_SxCR_MINC

.equ DMA_PeripheralDataSize_Byte, 0
.equ DMA_PeripheralDataSize_HalfWord, DMA_SxCR_PSIZE_0
.equ DMA_PeripheralDataSize_Word, DMA_SxCR_PSIZE_1

.equ DMA_MemoryDataSize_Byte, 0
.equ DMA_MemoryDataSize_HalfWord, DMA_SxCR_MSIZE_0
.equ DMA_MemoryDataSize_Word, DMA_SxCR_MSIZE_1

.equ DMA_Mode_Normal, 0
.equ DMA_Mode_Circular, DMA_SxCR_CIRC

.equ DMA_Priority_Low, 0
.equ DMA_Priority_Medium, DMA_SxCR_PL_0
.equ DMA_Priority_High, DMA_SxCR_PL_1
.equ DMA_Priority_VeryHigh, DMA_SxCR_PL

.equ DMA_MemoryBurst_Single, 0
.equ DMA_MemoryBurst_INC4, DMA_SxCR_MBURST_0
.equ DMA_MemoryBurst_INC8, DMA_SxCR_MBURST_1
.equ DMA_MemoryBurst_INC16, DMA_SxCR_MBURST

.equ DMA_PeripheralBurst_Single, 0
.equ DMA_PeripheralBurst_INC4, DMA_SxCR_PBURST_0
.equ DMA_PeripheralBurst_INC8, DMA_SxCR_PBURST_1
.equ DMA_PeripheralBurst_INC16, DMA_SxCR_PBURST
