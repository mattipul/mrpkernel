#ifdef KERNEL_ARCHIVES_H_GUARD
#define KERNEL_ARCHIVES_H_GUARD

#include <stdint.h>
#include "irq_sturcture.h"
#include "process_structure.h"
#include "memory_structure.h"
#include "pcb_structure.h"
#include "memory_map_structure.h"

struct INTERRUPT_HANDLERS{
	struct IRQ_HANDLER interrupt_handler_header;
};

struct PROCESS_TABLE{
	struct PROCESS_POINTER process_list_header;
}

struct DETECTED_MEMORY{
	struct MEMORY_AREA memory_areas_header;
};

struct ALLOCATED_MEMORY{
	struct MEMORY_AREA allocated_memory_header;
}

struct KERNEL_ARCHIVES{
	struct INTERUPT_HANDLERS interrupt_handlers;
	struct PROCESS_TABLE processes;
	struct DETECTED_MEMORY memory_map;
	struct ALLOCATED_MEMORY allocated_memory_areas;
	SMAP_entry_t* kernel_smap;
};

struct KERNEL_ARCHIVES *kernel_archives;

#endif