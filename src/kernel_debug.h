#ifndef KERNEL_DEBUG_H_GUARD
#define KERNEL_DEBUG_H_GUARD

uint16_t* kernel_debug_buffer;

void kernel_debug_init();
void kernel_debug_putchar();

#endif