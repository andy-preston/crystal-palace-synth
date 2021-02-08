#!/bin/bash

function change_ext {
    echo $1 | sed -e "s/\.[sS]$/$2/g"
}

function cmd {
    if [ -n "$2" ]
    then
        echo "$1 > $2"
        $1 > $2
    else
        echo $1
        $1
    fi
}

for CLEAN in hex lst elf o
do
    find -name \*.$CLEAN -exec rm {} \;
done

if [ "$1" != "clean" ]
then
    OBJECT_FILES=""
    for SRC in src/vector_table.s src/default_handler.s $1
    do
        LST=$(change_ext $SRC '.lst')
        OBJ=$(change_ext $SRC '.o')
        OBJECT_FILES="$OBJECT_FILES $OBJ"
        cmd "arm-none-eabi-gcc -c -mcpu=cortex-m4 -Wa,-a=$LST $SRC -o $OBJ"
    done
    ELF=$(change_ext $1 '.elf')
    HEX=$(change_ext $1 '.hex')
    LST=$(change_ext $1 '-full.lst')
    cmd "arm-none-eabi-ld -T link.ld -o $ELF $OBJECT_FILES"
    cmd "arm-none-eabi-objdump -s -d $ELF" $LST
    cmd "arm-none-eabi-objcopy -O ihex $ELF $HEX"
fi
