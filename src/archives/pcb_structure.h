#ifndef PCB_STRUCTURE_H_GUARD
#define PCB_STRUCTURE_H_GUARD

struct PCB{
	int pid;
	int state;
	int priority;
	int priviledges;
	unsigned short int code;
	struct PCB *next;
};

#endif