MEMORY {
    FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 256K
    RAM (rwx) : ORIGIN = 0x20000000, LENGTH = 64K
}

ENTRY(Reset_handler)

PROVIDE (_estack = ALIGN(ORIGIN(RAM) + LENGTH(RAM) - 8, 8));

SECTIONS
{
	.text : {
        . = ORIGIN(FLASH);
        *(.vector_table);
        *(.text);
	} >FLASH

    /*
    .RW_DATA : {
    } >RAM
    */
}
