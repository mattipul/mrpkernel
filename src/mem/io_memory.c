#include "io_memory.h"

void io_memory_put_into_memory(void address, unsigned short int data){
	unsigned short int *mem_address=(unsigned short int*)address;
	mem_address[0]=data;
}

unsigned short int io_memory_get_from_memory(void address){
	unsigned short int *mem_address=(unsigned short int*)address;
	return mem_address[0];
}

void io_memory_move_in_memory(void address_from, void address_to){
	unsigned short int mem_data=io_memory_get_from_memory(address_from);
	io_memory_put_into_memory(address_to, mem_data);
}