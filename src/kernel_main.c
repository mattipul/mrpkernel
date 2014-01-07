#include "include/multiboot.h"
#include "kernel/kernel.h"

void kernel_main(multiboot_info_t* mbd, unsigned int magic){
	kernel_init(mbd);
}