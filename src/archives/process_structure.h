#ifndef PROCESS_STRUCTURE_H_GUARD
#define PROCESS_STRUCTURE_H_GUARD

struct PROCESS_POINTER{
	unsigned short int address_to_pcb;
	struct PROCESS_POINTER *next;
};

#endif