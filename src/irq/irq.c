#include "irq.h"

extern void irq_clock_wrapper();

void irq_init(){
	uint32_t *irq0_addr=0x0020;
	irq0_addr[0]=&irq_clock_wrapper;
	//kernel_debug_binary(irq0_addr[0]);
}

void irq_clock(){	
     uint16_t *buf=(uint16_t*)0xB8000;
     buf[0]='M' | (15 | 1 << 4) << 8;
}
