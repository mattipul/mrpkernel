#include "memory_map.h"

//asm(".code16gcc\n");

void memory_map_detect(){
	/*unsigned long condition;
	unsigned long type,signature,bytes;
	
	do{
		asm volatile("int $0x15"
					: "=a" signature, "=b" condition, "=c" bytes
					: "a" (0xE820), "b" condition, "c" (24), "d" (0x534D4150), "D"(memory_map_buffer_address));
		if (signature != 0x534D4150){
			return -1; 
		}
		if (bytes > 20 && (buffer->ACPI & 0x0001) == 0){}
		else {
			buffer++;
			entries++;
		}
	} 
	while (condition != 0);*/
}