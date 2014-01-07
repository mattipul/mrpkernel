#ifndef MEMORY_MAP_STRUCTURE_H_GUARD
#define MEMORY_MAP_STRUCTURE_H_GUARD

#include <stdint.h>

typedef struct multiboot_memory_map {
	unsigned int size;
	unsigned int base_addr_low,base_addr_high;
	unsigned int length_low,length_high;
	unsigned int type;
} multiboot_memory_map_t;

#endif