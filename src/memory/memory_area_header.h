#ifndef MEMORY_AREA_HEADER_H_GUARD
#define MEMORY_AREA_HEADER_H_GUARD

#include "memory_area.h"

struct MEMORY_AREA_HEADER{
	struct MEMORY_AREA *first;
	struct MEMORY_AREA *last;
};

#endif
