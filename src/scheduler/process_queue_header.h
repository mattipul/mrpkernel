#ifndef PROCESS_QUEUE_HEADER_H_GAURD
#define PROCESS_QUEUE_HEADER_H_GAURD

#include "../process/pcb.h"
#include "process_queue.h"

struct PROCESS_QUEUE_HEADER{
	int used;
	int count;
	struct PROCESS_PCB *current_process;
	struct PROCESS_QUEUE *first;
	struct PROCESS_QUEUE *last;
};

#endif
