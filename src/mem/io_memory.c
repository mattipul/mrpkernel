#include "io_memory.h"

void io_memory_put_into_memory(unsigned short int address, unsigned short int data){
	unsigned short int *mem_address=(unsigned short int*)address;
	mem_address[0]=data;
}

unsigned short int io_memory_get_from_memory(unsigned short int address){
	unsigned short int *mem_address=(unsigned short int*)address;
	return mem_address[0];
}

void io_memory_move_in_memory(unsigned short int address_from, unsigned short int address_to){
	unsigned short int mem_data=memory_handler_get_from_memory(address_from);
	memory_handler_put_into_memory(address_to, mem_data);
}