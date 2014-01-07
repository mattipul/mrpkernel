#include "memory_map.h"

void memory_map_detect_memory(multiboot_info_t* mbd){
	
	//multiboot_memory_map_t* mmap = mbd->mmap_addr;	
	/*while(mmap < mbd->mmap_addr + mbd->mmap_length) {
		if(mmap->type == 1){
			kernel_debug_putchar('0'+mmap->type);
		}
		mmap = (multiboot_memory_map_t*) ( (unsigned int)mmap + mmap->size + sizeof(unsigned int) );
	}*/
}

void memory_map_detect_is_usable(uint16_t address){
	
}

