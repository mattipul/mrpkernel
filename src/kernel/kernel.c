#include "kernel.h"

void kernel_init(multiboot_info_t* mbd){
	kernel_debug_init();
	memory_init(mbd);
}