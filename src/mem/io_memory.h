#ifndef IO_MEMORY_H_GUARD
#define IO_MEMORY_H_GUARD

#include <stdint.h>

void io_memory_put_into_memory(uint16_t address, uint16_t data);
uint16_t io_memory_get_from_memory(uint16_t address);
void io_memory_move_in_memory(uint16_t address_from, uint16_t address_to);

#endif