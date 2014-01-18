#ifndef PROCESS_H_GUARD
#define PROCESS_H_GUARD

#include <stdint.h>
#include "pcb.h"
#include "../memory/memory.h"
#include "../memory/memory_area.h"

int process_create_pcb();
struct MEMORY_AREA* process_allocate_memory_area();
int process_initialize(unsigned int size);
int process_destroy(int pid);

#endif