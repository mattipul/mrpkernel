#ifndef MEMORY_HANDLER_H_GUARD
#define MEMORY_HANDLER_H_GUARD

#include <stdint.h>
#include "io_memory.h"
#include "memory_map.h"

int malloc(uint16_t base_address, int size);
int free(uint16_t base_address, int size);

#endif