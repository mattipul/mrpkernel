#ifndef MEMORY_MAP_H_GUARD
#define MEMORY_MAP_H_GUARD

#include <stdint.h>
#include "../include/multiboot.h"
#include "../archives/memory_map_structure.h"

void memory_map_detect_memory(multiboot_info_t* mbd);

#endif
