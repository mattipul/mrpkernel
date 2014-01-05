#include "memory.h"


int memory_init(){
	asm volatile(".code16gcc\n");
	asm volatile("mov ds,0\n");
	asm volatile("mov cs,0\n");
	memory_detect();
}

int memory_detect(){
	kernel_smap=(SMAP_entry_t*) 0x1000;
	const int smap_size = 0x2000;
	int entry_count = detectMemory(kernel_smap, smap_size / sizeof(SMAP_entry_t));
	if (entry_count == -1) {
		kernel_debug_putchar('A');
	} else {
		kernel_debug_putchar('B');		
	}
}