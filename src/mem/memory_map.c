#include "memory_map.h"

//asm(".code16gcc\n");

int __attribute__((noinline)) __attribute__((regparm(3))) detectMemory(SMAP_entry_t* buffer, int maxentries)
{
	asm volatile(".code16gcc\n");
	asm volatile("mov ds,0\n");
	asm volatile("mov cs,0\n");
	uint32_t contID = 0;
	int entries = 0, signature, bytes;
	do 
	{
		__asm__ __volatile__ ("int  $0x15" 
				: "=a"(signature), "=c"(bytes), "=b"(contID)
				: "a"(0xE820), "b"(contID), "c"(24), "d"(0x534D4150), "D"(buffer));
		if (signature != 0x534D4150) 
			return -1; // error
		if (bytes > 20 && (buffer->ACPI & 0x0001) == 0)
		{
			// ignore this entry
		}
		else {
			buffer++;
			entries++;
		}
	} 
	while (contID != 0 && entries < maxentries);
	return entries;
}