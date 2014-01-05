#ifndef MEMORY_MAP_STRUCTURE_H_GUARD
#define MEMORY_MAP_STRUCTURE_H_GUARD

#include <stdint.h>

typedef struct SMAP_entry {
	uint32_t BaseL;
	uint32_t BaseH;
	uint32_t LengthL; 
	uint32_t LengthH;
	uint16_t Type; 
	uint16_t ACPI; 
}__attribute__((packed)) SMAP_entry_t;

#endif