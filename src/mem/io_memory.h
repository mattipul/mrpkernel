#ifndef IO_MEMORY_H_GUARD
#define IO_MEMORY_H_GUARD

void io_memory_put_into_memory(char address, unsigned short int data);
void io_memory_get_from_memory(char address);
void io_memory_move_in_memory(char address_from, char address_to);

#endif