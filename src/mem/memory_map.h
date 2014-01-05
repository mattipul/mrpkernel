#ifndef MEMORY_MAP_H_GUARD
#define MEMORY_MAP_H_GUARD

#include <stdint.h>

int __attribute__((noinline)) __attribute__((regparm(3))) detectMemory(SMAP_entry_t* buffer, int maxentries);

#endif