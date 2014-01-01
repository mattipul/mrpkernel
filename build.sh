#!/bin/bash

PATH=$PATH:~/cross-compiler-i586/bin
export PATH

i586-elf-as ./src/boot.as -o ./compile/boot.o
i586-elf-gcc -c ./src/kernel_main.c -o ./compile/kernel.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra
i586-elf-gcc -T ./compile/linker.ld -o ./bin/kernel.bin -ffreestanding -O2 -nostdlib ./compile/boot.o ./compile/kernel.o

mkdir -p isodir
mkdir -p isodir/boot
cp ./bin/kernel.bin isodir/boot/kernel.bin
mkdir -p isodir/boot/grub
cp ./compile/grub.cfg isodir/boot/grub/grub.cfg
~/grub/bin/grub-mkrescue --xorriso="$HOME/xoriso/bin" -o kernel.iso isodir