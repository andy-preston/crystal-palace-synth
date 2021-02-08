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

.equ PERIPH_BASE, 0x40000000

.equ APB1PERIPH_BASE, PERIPH_BASE
.equ APB2PERIPH_BASE, PERIPH_BASE + 0x00010000
.equ AHB1PERIPH_BASE, PERIPH_BASE + 0x00020000
.equ AHB2PERIPH_BASE, PERIPH_BASE + 0x10000000

.equ SCS_BASE, 0xE000E000 // System Control Space Base Address
