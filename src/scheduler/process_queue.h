#ifndef PROCESS_QUEUE_H_GUARD
#define PROCESS_QUEUE_H_GUARD

#include "../process/pcb.h"

struct PROCESS_QUEUE{
	int used;
	struct PROCESS_PCB *process;
	struct PROCESS_QUEUE *next;
	struct PROCESS_QUEUE *prev;
};

#endif
