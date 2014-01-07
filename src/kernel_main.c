#include "include/multiboot.h"
#include "archives/kernel_archives.h"
#include "kernel/kernel.h"

void kernel_main(multiboot_info_t* mbd, unsigned int magic){
	kernel_archives_mbd=mbd;
	kernel_init(mbd);
}