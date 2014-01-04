#include "kernel_debug.h"

void kernel_debug_init(){
	kernel_debug_buffer=(unsigned short int*)0xB8000;
}

void kernel_debug_putchar(char c){
	kernel_debug_buffer[0] = c | (15 | 1 << 4) << 8;
}