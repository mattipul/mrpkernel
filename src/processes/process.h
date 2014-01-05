#ifndef PROCESS_H_GUARD
#define PROCESS_H_GUARD

#include <stdint.h>

int process_create(int pid, int state, int priority, int priviledges, uint16_t code_address);
int process_destroy(int pid);
int process_state(int pid, int state);
int process_priviledges(int pid, int priviledges);
int process_code(int pid, uint16_t code_address);

#endif