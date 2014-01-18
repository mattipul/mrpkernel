#ifndef KERNEL_H_GUARD
#define KERNEL_H_GUARD

#include <stdint.h>
#include "../include/multiboot.h"
#include "../debug/kernel_debug.h"
#include "../irq/irq.h"
#include "../memory/memory.h"
#include "../process/process.h"
#include "../scheduler/scheduler.h"

#include "../memory/memory_area.h"
#include "../memory/memory_area_header.h"
#include "../process/pcb.h"
#include "../process/pcb_header.h"
#include "../scheduler/process_queue.h"
#include "../scheduler/process_queue_header.h"

#include "kernel_defines.h"
#include "kernel_allocated.h"

void kernel_init();
void kernel_init_memory_area();
void kernel_init_pcb();
void kernel_init_process_list();

void kernel_run();

#endif