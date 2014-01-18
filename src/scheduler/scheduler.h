#ifndef SCHEDULER_H_GUARD
#define SCHEDULER_H_GUARD

#include <stdint.h>
#include "../kernel/kernel_defines.h"
#include "../kernel/kernel_allocated.h"
#include "../memory/memory_area.h"
#include "../memory/memory_area_header.h"
#include "../process/pcb.h"
#include "../process/pcb_header.h"
#include "../scheduler/process_queue.h"
#include "../scheduler/process_queue_header.h"

int scheduler_create_list_node();
void scheduler_set_state(int pid, int state);
void scheduler_enqueue(struct PROCESS_PCB *pcb);
void scheduler_dequeue();
void scheduler_block_current_process();
void scheduler_set_current_process(struct PROCESS_PCB* process);
void scheduler_jump_to_process();
void scheduler_next();
void scheduler_wait();

#endif