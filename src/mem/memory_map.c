#include "memory_map.h"

void memory_map_detect_memory(multiboot_info_t* mbd){
	multiboot_memory_map_t* mmap = mbd->mmap_addr;
	while(mmap < mbd->mmap_addr + mbd->mmap_length) {
		mmap = (multiboot_memory_map_t*) ( (unsigned int)mmap + mmap->size + sizeof(unsigned int) );
	}
}


