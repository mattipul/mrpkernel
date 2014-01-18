#ifndef PCB_H_GUARD
#define PCB_H_GUARD

#include "../memory/memory_area.h"

struct PROCESS_PCB{
	int pid;
	int used;
	int state; //0 BLOCKED, 1 RUNNING
	int (*process_main_function)(void);
	struct PROCESS_PCB *next;
	struct PROCESS_PCB *prev;
};

#endif
