#include "kernel.h"

void kernel_init(){
	kernel_debug_init();
	memory_init();
}