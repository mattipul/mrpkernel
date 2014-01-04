#include "kernel_debug.h"

void kernel_debug_init(){
	kernel_debug_buffer=(uint16_t*) 0xB8000;
}

void kernel_debug_putchar(){

}