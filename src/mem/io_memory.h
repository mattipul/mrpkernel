#ifndef IO_MEMORY_H_GUARD
#define IO_MEMORY_H_GUARD

void io_memory_put_into_memory(void address, unsigned short int data);
void io_memory_get_from_memory(void address);
void io_memory_move_in_memory(void address_from, void address_to);

#endif