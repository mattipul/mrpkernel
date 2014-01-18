#ifndef KERNEL_DEBUG_H_GUARD
#define KERNEL_DEBUG_H_GUARD

#include <stdint.h>

uint16_t *kernel_debug_buffer;

int kernel_debug_x;
int kernel_debug_y;

void kernel_debug_init();
void kernel_debug_yplus();
void kernel_debug_putchar(char c);
void kernel_debug_binary(uint16_t a);

#endif
