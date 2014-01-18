#!/bin/bash

PATH=$PATH:~/cross-compiler-i586/bin
export PATH

rm ./bin/kernel.bin

i586-elf-as ./src/boot.as -o ./compile/boot.o

i586-elf-gcc -c ./src/kernel/kernel.c -o ./compile/kernel.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra -I/usr/include -w

i586-elf-gcc -c ./src/scheduler/scheduler.c -o ./compile/scheduler.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra -I/usr/include -w

i586-elf-gcc -c ./src/memory/memory.c -o ./compile/memory.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra -I/usr/include -w

i586-elf-gcc -c ./src/irq/irq.c -o ./compile/irq.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra -I/usr/include -w

i586-elf-gcc -c ./src/process/process.c -o ./compile/process.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra -I/usr/include -w

i586-elf-gcc -c ./src/debug/kernel_debug.c -o ./compile/kernel_debug.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra -I/usr/include -w

i586-elf-gcc -c ./src/kernel_main.c -o ./compile/kernel_main.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra -I/usr/include -w

i586-elf-gcc -T ./compile/linker.ld -o ./bin/kernel.bin -ffreestanding -O2 -nostdlib ./compile/boot.o ./compile/kernel_main.o ./compile/kernel_debug.o ./compile/memory.o ./compile/kernel.o ./compile/irq.o ./compile/process.o ./compile/scheduler.o
