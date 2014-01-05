#include "kernel.h"

void kernel_init(){
	struct KERNEL_ARCHIVES kernel_archives_data;
	kernel_archives=&kernel_archives_data;
	
	kernel_debug_init();
	memory_init();
}