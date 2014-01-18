#ifndef PROCESS_QUEUE_HEADER_H_GAURD
#define PROCESS_QUEUE_HEADER_H_GAURD

struct PROCESS_QUEUE_HEADER{
	int used;
	int count;
	struct PROCESS_PCB *current_process;
	struct PROCESS_QUEUE *first;
	struct PROCESS_QUEUE *last;
};

#endif
