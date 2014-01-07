#ifndef MEMORY_H_GUARD
#define MEMORY_H_GUARD

#include <stdint.h>
#include "../include/multiboot.h"
#include "../debug/kernel_debug.h"
#include "../archives/kernel_archives.h"
#include "io_memory.h"
#include "memory_map.h"
#include "memory_handler.h"

void memory_init();

#endif