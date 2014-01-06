#include "memory.h"


void memory_init(){
	memory_detect();
}

void memory_detect(){


	SMAP_entry_t* smap = (SMAP_entry_t*) 0x1000;
	const int smap_size = 0x2000;
 
	int entry_count=detectMemory(smap, smap_size / sizeof(SMAP_entry_t));
 
	if (entry_count == -1) {
		kernel_debug_putchar('A');
	} else {
		kernel_debug_putchar('B');
	}
}
