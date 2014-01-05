#ifndef MEMORY_H_GUARD
#define MEMORY_H_GUARD

#include <stdint.h>
#include "io_memory.h"
#include "memory_map.h"
#include "memory_handler.h"

int memory_init();
int memory_detect();

#endif