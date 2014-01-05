asm(".code16gcc\n");

#include "kernel.h"

void kernel_init(){
	kernel_debug_init();
	memory_init();
}