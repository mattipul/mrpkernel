#ifndef PROCESS_PCB_HEADER_H_GUARD
#define PROCESS_PCB_HEADER_H_GUARD

#include "pcb.h"

struct PROCESS_PCB_HEADER{
	struct PROCESS_PCB *first;
	struct PROCESS_PCB *last;
};

#endif
