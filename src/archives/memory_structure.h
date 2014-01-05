#ifndef MEMORY_STRUCTURE_H_GUARD
#define MEMORY_STRUCTURE_H_GUARD

#include <stdint.h>

struct MEMORY_AREA{
	int type;
	unsigned short int base;
	unsigned short int length;
	struct MEMORY_AREA *next;
};

#endif