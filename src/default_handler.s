    .include "inc/preamble.inc"
    .section .text, "ax"
    .global Default_handler

Default_handler:
    b Default_handler
