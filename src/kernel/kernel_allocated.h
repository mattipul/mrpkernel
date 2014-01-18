#ifndef KERNEL_ALLOCATED_H_GUARD
#define KERNEL_ALLOCATED_H_GUARD

#include "../memory/memory_area_header.h"
#include "../process/pcb_header.h"
#include "../scheduler/process_queue_header.h"

struct MEMORY_AREA_HEADER *kernel_memory_area_header;
struct PCB_HEADER *kernel_pcb_header;
struct PROCESS_QUEUE_HEADER *kernel_process_queue_header;

int pid_counter;
uint16_t memory_stack_pointer;
int process_counter;

#endif
