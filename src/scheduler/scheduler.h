#ifndef SCHEDULER_H_GUARD
#define SCHEDULER_H_GUARD

int scheduler_create_list_node();

void scheduler_set_state(int pid, int state);
void scheduler_enqueue();
void scheduler_dequeue();
void scheduler_block_current_process();
void scheduler_set_current_process(struct PROCESS_PCB* process);
void scheduler_jump_to_process();
void scheduler_next();
void scheduler_wait();

#endif