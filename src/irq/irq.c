#include "irq.h"

extern void irq_divide_by_zero_wrapper();

void irq_init(){
	uint16_t *irq0_addr=0x0000;
	irq0_addr=&irq_divide_by_zero_wrapper;
	//kernel_debug_binary(irq0_addr);
}

void irq_divide_by_zero(){
	uint16_t *buf=(uint16_t*)0xB8000;
	buf[0]='M' | (15 | 1 << 4) << 8;
}

void irq_clock(){
	scheduler_wait();
}
