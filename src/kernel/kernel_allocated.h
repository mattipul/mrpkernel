#ifndef KERNEL_ALLOCATED_H_GUARD
#define KERNEL_ALLOCATED_H_GUARD

#include <stdint.h>
#include "../memory/memory_area_header.h"
#include "../process/pcb_header.h"
#include "../scheduler/process_queue_header.h"

struct MEMORY_AREA_HEADER *kernel_memory_area_header;
struct PROCESS_PCB_HEADER *kernel_pcb_header;
struct PROCESS_QUEUE_HEADER *kernel_process_queue_header;

int pid_counter;
uint16_t memory_stack_pointer;
int process_counter;

//uint8_t process1_bin[] = { 0x66, 0xc7, 0x05, 0x00, 0x80, 0x0b, 0x00, 0x41, 0x1f };

#endif
