#ifndef PCB_STRUCTURE_H_GUARD
#define PCB_STRUCTURE_H_GUARD

#include <stdint.h>

struct PCB{
	int pid;
	int state;
	int priority;
	int priviledges;
	uint16_t code;
	struct PCB *next;
};

#endif