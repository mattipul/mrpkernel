#include "kernel.h"

__asm__(".code16gcc\n");

void kernel_init(){
	kernel_debug_init();
	memory_init();
}