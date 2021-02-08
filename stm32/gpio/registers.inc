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

.equ GPIOA_BASE, AHB1PERIPH_BASE + 0x0000

.equ GPIOA_MODER,   GPIOA_BASE         // port mode register
.equ GPIOA_OTYPER,  GPIOA_BASE + 0x04  // port output type register
.equ GPIOA_OSPEEDR, GPIOA_BASE + 0x08  // port output speed register
.equ GPIOA_PUPDR,   GPIOA_BASE + 0x0C  // port pull-up/pull-down register
.equ GPIOA_IDR,     GPIOA_BASE + 0x10  // port input data register
.equ GPIOA_ODR,     GPIOA_BASE + 0x14  // port output data register

.equ GPIOA_BSRR,    GPIOA_BASE + 0x18  // port bit set/reset register
.equ GPIOA_BSRRL,   GPIOA_BASE + 0x18  // named for half-word addressing
.equ GPIOA_BSRR8,   GPIOA_BASE + 0x19  // byte addressable only
.equ GPIOA_BSRRH,   GPIOA_BASE + 0x1A  // byte or half-word addressable
.equ GPIOA_BSRR24,  GPIOA_BASE + 0x1B  // byte addressable only

.equ GPIOA_LCKR,    GPIOA_BASE + 0x1C  // port configuration lock register
.equ GPIOA_AFRL,    GPIOA_BASE + 0x20  // alternate function registers
.equ GPIOA_AFRH,    GPIOA_BASE + 0x24  // alternate function registers


.equ GPIOB_BASE, AHB1PERIPH_BASE + 0x0400

.equ GPIOB_MODER,   GPIOB_BASE         // port mode register
.equ GPIOB_OTYPER,  GPIOB_BASE + 0x04  // port output type register
.equ GPIOB_OSPEEDR, GPIOB_BASE + 0x08  // port output speed register
.equ GPIOB_PUPDR,   GPIOB_BASE + 0x0C  // port pull-up/pull-down register
.equ GPIOB_IDR,     GPIOB_BASE + 0x10  // port input data register
.equ GPIOB_ODR,     GPIOB_BASE + 0x14  // port output data register

.equ GPIOB_BSRR,    GPIOB_BASE + 0x18  // port bit set/reset register
.equ GPIOB_BSRRL,   GPIOB_BASE + 0x18  // named for half-word addressing
.equ GPIOB_BSRR8,   GPIOB_BASE + 0x19  // byte addressable only
.equ GPIOB_BSRRH,   GPIOB_BASE + 0x1A  // byte or half-word addressable
.equ GPIOB_BSRR24,  GPIOB_BASE + 0x1B  // byte addressable only

.equ GPIOB_LCKR,    GPIOB_BASE + 0x1C  // port configuration lock register
.equ GPIOB_AFRL,    GPIOB_BASE + 0x20  // alternate function registers
.equ GPIOB_AFRH,    GPIOB_BASE + 0x24  // alternate function registers


.equ GPIOC_BASE, AHB1PERIPH_BASE + 0x0800

.equ GPIOC_MODER,   GPIOC_BASE         // port mode register
.equ GPIOC_OTYPER,  GPIOC_BASE + 0x04  // port output type register
.equ GPIOC_OSPEEDR, GPIOC_BASE + 0x08  // port output speed register
.equ GPIOC_PUPDR,   GPIOC_BASE + 0x0C  // port pull-up/pull-down register
.equ GPIOC_IDR,     GPIOC_BASE + 0x10  // port input data register
.equ GPIOC_ODR,     GPIOC_BASE + 0x14  // port output data register

.equ GPIOC_BSRR,    GPIOC_BASE + 0x18  // port bit set/reset register
.equ GPIOC_BSRRL,   GPIOC_BASE + 0x18  // named for half-word addressing
.equ GPIOC_BSRR8,   GPIOC_BASE + 0x19  // byte addressable only
.equ GPIOC_BSRRH,   GPIOC_BASE + 0x1A  // byte or half-word addressable
.equ GPIOC_BSRR24,  GPIOC_BASE + 0x1B  // byte addressable only

.equ GPIOC_LCKR,    GPIOC_BASE + 0x1C  // port configuration lock register
.equ GPIOC_AFRL,    GPIOC_BASE + 0x20  // alternate function registers
.equ GPIOC_AFRH,    GPIOC_BASE + 0x24  // alternate function registers


.equ GPIOD_BASE, AHB1PERIPH_BASE + 0x0C00

.equ GPIOD_MODER,   GPIOD_BASE         // port mode register
.equ GPIOD_OTYPER,  GPIOD_BASE + 0x04  // port output type register
.equ GPIOD_OSPEEDR, GPIOD_BASE + 0x08  // port output speed register
.equ GPIOD_PUPDR,   GPIOD_BASE + 0x0C  // port pull-up/pull-down register
.equ GPIOD_IDR,     GPIOD_BASE + 0x10  // port input data register
.equ GPIOD_ODR,     GPIOD_BASE + 0x14  // port output data register

.equ GPIOD_BSRR,    GPIOD_BASE + 0x18  // port bit set/reset register
.equ GPIOD_BSRRL,   GPIOD_BASE + 0x18  // named for half-word addressing
.equ GPIOD_BSRR8,   GPIOD_BASE + 0x19  // byte addressable only
.equ GPIOD_BSRRH,   GPIOD_BASE + 0x1A  // byte or half-word addressable
.equ GPIOD_BSRR24,  GPIOD_BASE + 0x1B  // byte addressable only

.equ GPIOD_LCKR,    GPIOD_BASE + 0x1C  // port configuration lock register
.equ GPIOD_AFRL,    GPIOD_BASE + 0x20  // alternate function registers
.equ GPIOD_AFRH,    GPIOD_BASE + 0x24  // alternate function registers


.equ GPIOE_BASE, AHB1PERIPH_BASE + 0x1000

.equ GPIOE_MODER,   GPIOE_BASE         // port mode register
.equ GPIOE_OTYPER,  GPIOE_BASE + 0x04  // port output type register
.equ GPIOE_OSPEEDR, GPIOE_BASE + 0x08  // port output speed register
.equ GPIOE_PUPDR,   GPIOE_BASE + 0x0C  // port pull-up/pull-down register
.equ GPIOE_IDR,     GPIOE_BASE + 0x10  // port input data register
.equ GPIOE_ODR,     GPIOE_BASE + 0x14  // port output data register

.equ GPIOE_BSRR,    GPIOE_BASE + 0x18  // port bit set/reset register
.equ GPIOE_BSRRL,   GPIOE_BASE + 0x18  // named for half-word addressing
.equ GPIOE_BSRR8,   GPIOE_BASE + 0x19  // byte addressable only
.equ GPIOE_BSRRH,   GPIOE_BASE + 0x1A  // byte or half-word addressable
.equ GPIOE_BSRR24,  GPIOE_BASE + 0x1B  // byte addressable only

.equ GPIOE_LCKR,    GPIOE_BASE + 0x1C  // port configuration lock register
.equ GPIOE_AFRL,    GPIOE_BASE + 0x20  // alternate function registers
.equ GPIOE_AFRH,    GPIOE_BASE + 0x24  // alternate function registers


.equ GPIOF_BASE, AHB1PERIPH_BASE + 0x1400

.equ GPIOF_MODER,   GPIOF_BASE         // port mode register
.equ GPIOF_OTYPER,  GPIOF_BASE + 0x04  // port output type register
.equ GPIOF_OSPEEDR, GPIOF_BASE + 0x08  // port output speed register
.equ GPIOF_PUPDR,   GPIOF_BASE + 0x0C  // port pull-up/pull-down register
.equ GPIOF_IDR,     GPIOF_BASE + 0x10  // port input data register
.equ GPIOF_ODR,     GPIOF_BASE + 0x14  // port output data register

.equ GPIOF_BSRR,    GPIOF_BASE + 0x18  // port bit set/reset register
.equ GPIOF_BSRRL,   GPIOF_BASE + 0x18  // named for half-word addressing
.equ GPIOF_BSRR8,   GPIOF_BASE + 0x19  // byte addressable only
.equ GPIOF_BSRRH,   GPIOF_BASE + 0x1A  // byte or half-word addressable
.equ GPIOF_BSRR24,  GPIOF_BASE + 0x1B  // byte addressable only

.equ GPIOF_LCKR,    GPIOF_BASE + 0x1C  // port configuration lock register
.equ GPIOF_AFRL,    GPIOF_BASE + 0x20  // alternate function registers
.equ GPIOF_AFRH,    GPIOF_BASE + 0x24  // alternate function registers


.equ GPIOG_BASE, AHB1PERIPH_BASE + 0x1800

.equ GPIOG_MODER,   GPIOG_BASE         // port mode register
.equ GPIOG_OTYPER,  GPIOG_BASE + 0x04  // port output type register
.equ GPIOG_OSPEEDR, GPIOG_BASE + 0x08  // port output speed register
.equ GPIOG_PUPDR,   GPIOG_BASE + 0x0C  // port pull-up/pull-down register
.equ GPIOG_IDR,     GPIOG_BASE + 0x10  // port input data register
.equ GPIOG_ODR,     GPIOG_BASE + 0x14  // port output data register

.equ GPIOG_BSRR,    GPIOG_BASE + 0x18  // port bit set/reset register
.equ GPIOG_BSRRL,   GPIOG_BASE + 0x18  // named for half-word addressing
.equ GPIOG_BSRR8,   GPIOG_BASE + 0x19  // byte addressable only
.equ GPIOG_BSRRH,   GPIOG_BASE + 0x1A  // byte or half-word addressable
.equ GPIOG_BSRR24,  GPIOG_BASE + 0x1B  // byte addressable only

.equ GPIOG_LCKR,    GPIOG_BASE + 0x1C  // port configuration lock register
.equ GPIOG_AFRL,    GPIOG_BASE + 0x20  // alternate function registers
.equ GPIOG_AFRH,    GPIOG_BASE + 0x24  // alternate function registers


.equ GPIOH_BASE, AHB1PERIPH_BASE + 0x1C00

.equ GPIOH_MODER,   GPIOH_BASE         // port mode register
.equ GPIOH_OTYPER,  GPIOH_BASE + 0x04  // port output type register
.equ GPIOH_OSPEEDR, GPIOH_BASE + 0x08  // port output speed register
.equ GPIOH_PUPDR,   GPIOH_BASE + 0x0C  // port pull-up/pull-down register
.equ GPIOH_IDR,     GPIOH_BASE + 0x10  // port input data register
.equ GPIOH_ODR,     GPIOH_BASE + 0x14  // port output data register

.equ GPIOH_BSRR,    GPIOH_BASE + 0x18  // port bit set/reset register
.equ GPIOH_BSRRL,   GPIOH_BASE + 0x18  // named for half-word addressing
.equ GPIOH_BSRR8,   GPIOH_BASE + 0x19  // byte addressable only
.equ GPIOH_BSRRH,   GPIOH_BASE + 0x1A  // byte or half-word addressable
.equ GPIOH_BSRR24,  GPIOH_BASE + 0x1B  // byte addressable only

.equ GPIOH_LCKR,    GPIOH_BASE + 0x1C  // port configuration lock register
.equ GPIOH_AFRL,    GPIOH_BASE + 0x20  // alternate function registers
.equ GPIOH_AFRH,    GPIOH_BASE + 0x24  // alternate function registers


.equ GPIOI_BASE, AHB1PERIPH_BASE + 0x2000

.equ GPIOI_MODER,   GPIOI_BASE         // port mode register
.equ GPIOI_OTYPER,  GPIOI_BASE + 0x04  // port output type register
.equ GPIOI_OSPEEDR, GPIOI_BASE + 0x08  // port output speed register
.equ GPIOI_PUPDR,   GPIOI_BASE + 0x0C  // port pull-up/pull-down register
.equ GPIOI_IDR,     GPIOI_BASE + 0x10  // port input data register
.equ GPIOI_ODR,     GPIOI_BASE + 0x14  // port output data register

.equ GPIOI_BSRR,    GPIOI_BASE + 0x18  // port bit set/reset register
.equ GPIOI_BSRRL,   GPIOI_BASE + 0x18  // named for half-word addressing
.equ GPIOI_BSRR8,   GPIOI_BASE + 0x19  // byte addressable only
.equ GPIOI_BSRRH,   GPIOI_BASE + 0x1A  // byte or half-word addressable
.equ GPIOI_BSRR24,  GPIOI_BASE + 0x1B  // byte addressable only

.equ GPIOI_LCKR,    GPIOI_BASE + 0x1C  // port configuration lock register
.equ GPIOI_AFRL,    GPIOI_BASE + 0x20  // alternate function registers
.equ GPIOI_AFRH,    GPIOI_BASE + 0x24  // alternate function registers


.equ GPIOJ_BASE, AHB1PERIPH_BASE + 0x2400

.equ GPIOJ_MODER,   GPIOJ_BASE         // port mode register
.equ GPIOJ_OTYPER,  GPIOJ_BASE + 0x04  // port output type register
.equ GPIOJ_OSPEEDR, GPIOJ_BASE + 0x08  // port output speed register
.equ GPIOJ_PUPDR,   GPIOJ_BASE + 0x0C  // port pull-up/pull-down register
.equ GPIOJ_IDR,     GPIOJ_BASE + 0x10  // port input data register
.equ GPIOJ_ODR,     GPIOJ_BASE + 0x14  // port output data register

.equ GPIOJ_BSRR,    GPIOJ_BASE + 0x18  // port bit set/reset register
.equ GPIOJ_BSRRL,   GPIOJ_BASE + 0x18  // named for half-word addressing
.equ GPIOJ_BSRR8,   GPIOJ_BASE + 0x19  // byte addressable only
.equ GPIOJ_BSRRH,   GPIOJ_BASE + 0x1A  // byte or half-word addressable
.equ GPIOJ_BSRR24,  GPIOJ_BASE + 0x1B  // byte addressable only

.equ GPIOJ_LCKR,    GPIOJ_BASE + 0x1C  // port configuration lock register
.equ GPIOJ_AFRL,    GPIOJ_BASE + 0x20  // alternate function registers
.equ GPIOJ_AFRH,    GPIOJ_BASE + 0x24  // alternate function registers


.equ GPIOK_BASE, AHB1PERIPH_BASE + 0x2800

.equ GPIOK_MODER,   GPIOK_BASE         // port mode register
.equ GPIOK_OTYPER,  GPIOK_BASE + 0x04  // port output type register
.equ GPIOK_OSPEEDR, GPIOK_BASE + 0x08  // port output speed register
.equ GPIOK_PUPDR,   GPIOK_BASE + 0x0C  // port pull-up/pull-down register
.equ GPIOK_IDR,     GPIOK_BASE + 0x10  // port input data register
.equ GPIOK_ODR,     GPIOK_BASE + 0x14  // port output data register

.equ GPIOK_BSRR,    GPIOK_BASE + 0x18  // port bit set/reset register
.equ GPIOK_BSRRL,   GPIOK_BASE + 0x18  // named for half-word addressing
.equ GPIOK_BSRR8,   GPIOK_BASE + 0x19  // byte addressable only
.equ GPIOK_BSRRH,   GPIOK_BASE + 0x1A  // byte or half-word addressable
.equ GPIOK_BSRR24,  GPIOK_BASE + 0x1B  // byte addressable only

.equ GPIOK_LCKR,    GPIOK_BASE + 0x1C  // port configuration lock register
.equ GPIOK_AFRL,    GPIOK_BASE + 0x20  // alternate function registers
.equ GPIOK_AFRH,    GPIOK_BASE + 0x24  // alternate function registers
