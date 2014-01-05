#ifndef IO_MEMORY_H_GUARD
#define IO_MEMORY_H_GUARD

void io_memory_put_into_memory(unsigned short int address, unsigned short int data);
void io_memory_get_from_memory(unsigned short int address);
void io_memory_move_in_memory(unsigned short int address_from, unsigned short int address_to);

#endif