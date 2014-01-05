#!/bin/bash

PATH=$PATH:~/cross-compiler-i586/bin
export PATH

rm ./bin/kernel.bin

i586-elf-as ./src/boot.as -o ./compile/boot.o
i586-elf-gcc -c ./src/mem/memory_map.c -o ./compile/memory_map.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra -I/usr/include
i586-elf-gcc -c ./src/mem/memory_handler.c -o ./compile/memory_handler.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra -I/usr/include
i586-elf-gcc -c ./src/mem/io_memory.c -o ./compile/io_memory.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra -I/usr/include
i586-elf-gcc -c ./src/debug/kernel_debug.c -o ./compile/kernel_debug.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra -I/usr/include
i586-elf-gcc -c ./src/kernel_main.c -o ./compile/kernel_main.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra -I/usr/include
i586-elf-gcc -T ./compile/linker.ld -o ./bin/kernel.bin -ffreestanding -O2 -nostdlib ./compile/boot.o ./compile/kernel_main.o ./compile/kernel_debug.o ./compile/io_memory.o ./compile/memory_map.o ./compile/memory_handler.o
