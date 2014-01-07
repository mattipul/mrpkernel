#include "memory_map.h"

void memory_map_detect_memory(multiboot_info_t* mbd){
	multiboot_memory_map_t* mmap = mbd->mmap_addr;
//	kernel_debug_putchar('A');
	while(mmap < mbd->mmap_addr + mbd->mmap_length) {
		kernel_debug_putchar('A');
		mmap = (multiboot_memory_map_t*) ( (unsigned int)mmap + mmap->size + sizeof(unsigned int) );
	}
}


