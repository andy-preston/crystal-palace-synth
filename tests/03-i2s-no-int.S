    .include "inc/preamble.inc"
    .include "stm32/base.inc"
    .include "stm32/rcc/registers.inc"
    .include "stm32/rcc/ahb1enr.inc"
    .include "stm32/dma/registers.inc"
    .include "stm32/dma/stream-cr.inc"
    .include "inc/spi/registers.inc"

entry_point:
    // Enable the DMA clock
    movw r0, #:lower16:RCC_AHB1ENR
    movt r0, #:upper16:RCC_AHB1ENR
    ldr r1, [r0]
    orr r1, r1, RCC_AHB1Periph_DMA1
    str r1, [r0]

    // Set the DMA stream options...
    // Note there are further writes to the DMA control register later
    // keep r0 and r1 for that purpose!
    movw r0, #:lower16:DMA1_S7_CR
    movt r0, #:upper16:DMA1_S7_CR
    .equ DMA_STREAM_OPTIONS, (            \
        DMA_Channel_0 |                   \
        DMA_DIR_MemoryToPeripheral |      \
        DMA_MemoryInc_Enable |            \
        DMA_PeripheralDataSize_HalfWord | \
        DMA_MemoryDataSize_HalfWord |     \
        DMA_Mode_Circular |               \
        DMA_Priority_VeryHigh             \
    )
    movw r1, #:lower16:DMA_STREAM_OPTIONS
    movt r1, #:upper16:DMA_STREAM_OPTIONS
    ////////////////////////////////////////////////////////////////////////////
    //
    // check this store will be full 32 bit
    //
    ////////////////////////////////////////////////////////////////////////////
    str r1, [r0]

    movw r2, #:lower16:DMA1_S7_NDTR
    movt r2, #:upper16:DMA1_S7_NDTR
    movw r3, #:lower16:BUFFER_SIZE
    movt r3, #:upper16:BUFFER_SIZE
    str r3, [r2]

    movw r2, #:lower16:DMA1_S7_M0AR
    movt r2, #:upper16:DMA1_S7_M0AR
    movw r3, #:lower16:audio_buffer
    movt r3, #:upper16:audio_buffer
    str r3, [r2]

    movw r2, #:lower16:DMA1_S7_PAR
    movt r2, #:upper16:DMA1_S7_PAR
    movw r3, #:lower16:SPI3_DR
    movt r3, #:upper16:SPI3_DR
    str r3, [r2]

    .equ DMA_INTERRUPT_OPTIONS, DMA_SxCR_TCIE | DMA_SxCR_HTIE
    movw r3, #:lower16:DMA_INTERRUPT_OPTIONS
    movt r3, #:upper16:DMA_INTERRUPT_OPTIONS
    orr r1, r1, r3 // r1 already has DMA_STREAM_OPTIONS
    str r1, [r0]   // r0 already has DMA1_S7_CR