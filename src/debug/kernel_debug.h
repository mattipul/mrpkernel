#ifndef KERNEL_DEBUG_H_GUARD
#define KERNEL_DEBUG_H_GUARD

unsigned short int *kernel_debug_buffer;

void kernel_debug_init();
void kernel_debug_putchar(char c);

#endif