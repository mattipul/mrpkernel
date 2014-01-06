__asm__(".code16gcc\n");

#include "memory_map.h"



void detectMemory(SMAP_entry_t* buffer, int maxentries)
{
	uint32_t contID = 0;
	int entries = 0, signature, bytes;
	int i;
	for(i=0; i<maxentries; i++)
	{
		__asm__ __volatile__ ("int  $0x15" 
				: "=a"(signature), "=c"(bytes), "=b"(contID)
				: "a"(0xE820), "b"(contID), "c"(24), "d"(0x534D4150), "D"(buffer));
		if (signature != 0x534D4150) 
			//return -1; // error
		if (bytes > 20 && (buffer->ACPI & 0x0001) == 0)
		{
			// ignore this entry
		}
		else {
			buffer++;
			entries++;
		}
		
		if(contID!=0){
			break;
		}
	} 
	//while (contID != 0 && entries < 1);	                                                                 
//	return entries;
}
