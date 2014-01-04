#!/bin/bash

mkdir -p isodir
mkdir -p isodir/boot
cp ./bin/kernel.bin isodir/boot/kernel.bin
mkdir -p isodir/boot/grub
cp ./compile/grub.cfg isodir/boot/grub/grub.cfg
grub-mkrescue -o kernel.iso isodir
