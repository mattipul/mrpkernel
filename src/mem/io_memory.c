#include "io_memory.h"

void io_memory_put_into_memory(uint16_t address, uint16_t data){
	uint16_t *mem_address=(uint16_t*)address;
	mem_address[0]=data;
}

uint16_t io_memory_get_from_memory(uint16_t address){
	uint16_t *mem_address=(uint16_t*)address;
	return mem_address[0];
}

void io_memory_move_in_memory(uint16_t address_from, uint16_t address_to){
	uint16_t mem_data=io_memory_get_from_memory(address_from);
	io_memory_put_into_memory(address_to, mem_data);
}