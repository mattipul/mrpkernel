#ifndef MEMORY_HANDLER_H_GUARD
#define MEMORY_HANDLER_H_GUARD

#include "io_memory.h"

int malloc(unsigned short int base_address, unsigned short int size);
int free(unsigned short int base_address, unsigned short int size);

#endif