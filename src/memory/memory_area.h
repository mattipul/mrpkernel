#ifndef MEMORY_AREA_H_GUARD
#define MEMORY_AREA_H_GUARD

struct MEMORY_AREA{
	int used;
	uint16_t base_address;
	unsigned int length;
	struct MEMORY_AREA *next;
	struct MEMORY_AREA *prev;
};

#endif
