#include "memory.h"


void memory_init(){
	memory_detect();
}

void memory_detect(){

	SMAP_entry_t* smap = (SMAP_entry_t*) 0x1000;
	detectMemory(smap);
// 	kernel_debug_putchar('A');
	/*if (entry_count == -1) {
		kernel_debug_putchar('A');
	} else {
		kernel_debug_putchar('B');
	}*/
}
