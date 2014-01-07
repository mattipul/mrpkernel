#include "memory.h"


void memory_init(multiboot_info_t* mbd){
	memory_detect(mbd);
}

void memory_detect(multiboot_info_t* mbd){
	detectMemory(mbd);
}
