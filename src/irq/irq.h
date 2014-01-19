#ifndef IRQ_H_GUARD
#define IRQ_H_GUARD

#include <stdint.h> 
#include "../scheduler/scheduler.h"

void irq_init();
void irq_clock();

#endif
