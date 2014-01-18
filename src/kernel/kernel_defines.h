#ifndef KERNEL_DEFINES_H_GUARD
#define KERNEL_DEFINES_H_GUARD

#include "../process/pcb.h"
#include "../process/pcb_header.h"
#include "../scheduler/process_queue.h"
#include "../scheduler/process_queue_header.h"

#define MEMORY_BLOCK_START
#define MEMORY_BLOCK_LENGTH
#define BLOCK_SIZE

#define MAX_PROCESS_COUNT 10
#define MAX_PROCESS_COUNT_IN_QUEUE 10

#define PCB_BLOCK_LENGTH (sizeof(struct PROCESS_PCB)*MAX_PROCESS_COUNT+sizeof(struct PROCESS_PCB_HEADER))
#define PROCESS_QUEUE_BLOCK_LENGTH (sizeof(struct PROCESS_QUEUE)*MAX_PROCESS_COUNT_IN_QUEUE+sizeof(struct PROCESS_QUEUE_HEADER))

#define MINUS_FROM_AVAILABLE_SPACE (PCB_BLOCK_LENGTH+PROCESS_QUEUE_BLOCK_LENGTH)

#define MAX_MEMORY_BLOCKS (MEMORY_BLOCK_LENGTH-MINUS_FROM_AVAILABLE_SPACE)/BLOCK_SIZE

#endif