#ifdef KERNEL_ARCHIVES_H_GUARD
#define KERNEL_ARCHIVES_H_GUARD

#include "irq_sturcture.h"
#include "process_structure.h"
#include "memory_structure.h"

struct INTERRUPT_HANDLERS{
	struct IRQ_HANDLER **interrupt_handlers;
};

struct PROCESS_TABLE{
	struct PROCESS_POINTER **process_list;
}

struct DETECTED_MEMORY{
	struct MEMORY_AREA **memory_areas;
};

struct ALLOCATED_MEMORY{
	struct MEMORY_AREA **allocated_memory;
}

struct KERNEL_ARCHIVES{
	struct INTERUPT_HANDLERS interrupt_handlers;
	struct PROCESS_TABLE processes;
	struct DETECTED_MEMORY memory_map;
	struct ALLOCATED_MEMORY allocated_memory_areas;
	int length;
};

struct KERNEL_ARCHIVES *kernel_archives;

#endif