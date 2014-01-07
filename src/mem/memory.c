#include "memory.h"

void memory_init(multiboot_info_t* mbd){
	memory_detect(mbd);
}

void memory_detect(multiboot_info_t* mbd){
	memory_map_detect_memory(mdb);
	kernel_debug_putchar('S');
}

