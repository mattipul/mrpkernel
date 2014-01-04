#include "kernel_debug.h"

void kernel_main(){
	kernel_debug_init();
	kernel_debug_putchar('M');
}