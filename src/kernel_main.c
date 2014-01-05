#include "debug/kernel_debug.h"
#include "mem/io_memory.h"

void kernel_main(){
	kernel_debug_init();
	kernel_debug_putchar('P');
}