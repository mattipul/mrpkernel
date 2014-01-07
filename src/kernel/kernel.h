#ifndef KERNEL_H_GUARD
#define KERNEL_H_GUARD

#include <stdint.h>
#include "../include/multiboot.h"
#include "../archives/kernel_archives.h"
#include "../debug/kernel_debug.h"
#include "../irq/irq.h"
#include "../mem/memory.h"
#include "../processes/process.h"
#include "../scheduler/scheduler.h"

void kernel_init(multiboot_info_t* mbd);

#endif