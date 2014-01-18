#ifndef MEMORY_H_GUARD
#define MEMORY_H_GUARD

#include <stdint.h>
#include "../kernel/kernel_defines.h"
#include "../kernel/kernel_allocated.h"
#include "../debug/kernel_debug.h"
#include "memory_area.h"

int memory_block(uint16_t base, unsigned int size);
int memory_malloc(struct MEMORY_AREA *marea_malloc);
int memory_free(struct MEMORY_AREA *marea_free);

#endif