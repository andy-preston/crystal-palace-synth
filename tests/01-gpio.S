    .include "inc/preamble.inc"
    .include "stm32/base.inc"
    .include "stm32/rcc/registers.inc"
    .include "stm32/rcc/ahb1enr.inc"
    .include "stm32/gpio/registers.inc"
    .include "stm32/gpio/moder.inc"
    .include "inc/main.inc"

Reset_handler:
    // Enable the GPIO-C clock
    movw r0, #:lower16:RCC_AHB1ENR
    movt r0, #:upper16:RCC_AHB1ENR
    ldr r2, [r0]
    orr r2, RCC_AHB1Periph_GPIOC
    str r2, [r0]

    // Set GPIO-C13 as output
    movw r0, #:lower16:GPIOC_MODER
    movt r0, #:upper16:GPIOC_MODER
    movw r2, #:lower16:GPIO_MODER_13_OUTPUT
    movt r2, #:upper16:GPIO_MODER_13_OUTPUT
    str r2, [r0]

    .macro delay
    movw r3, #0
    movt r3, #0x000d
.delay\@:
    subs r3, 1
    bne .delay\@
    .endm

    movw r2, 0b00100000     // pin 13 if accessing BSRR8 or BSRR24 in byte mode
    movt r2, 0

    movw r0, #:lower16:GPIOC_BSRR8 // write r2 here to set bit
    movt r0, #:upper16:GPIOC_BSRR8 // second byte of BSRR -- BS8 - BS15

    movw r1, #:lower16:GPIOC_BSRR24 // write r2 here to reset bit
    movt r1, #:upper16:GPIOC_BSRR24 // last byte of BSRR -- BR8 - BR15

.loop:
    strb r2, [r0] // r0 = set bit
    delay
    strb r2, [r1] // r1 = reset bit
    delay

    b .loop
