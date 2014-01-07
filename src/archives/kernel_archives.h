#ifndef KERNEL_ARCHIVES_H_GUARD
#define KERNEL_ARCHIVES_H_GUARD

#include <stdint.h>
#include "../include/multiboot.h"
#include "irq_structure.h"
#include "process_structure.h"
#include "memory_structure.h"
#include "pcb_structure.h"
#include "memory_map_structure.h"

multiboot_info_t* kernel_archives_mbd;

#endif