#include "kernel_debug.h"

void kernel_debug_init(){
	kernel_debug_buffer=(uint16_t*)0xB8000;
	kernel_debug_x=0;
}

void kernel_debug_putchar(char c){
	kernel_debug_buffer[kernel_debug_x] = c | (15 | 1 << 4) << 8;
	kernel_debug_x++;
}
