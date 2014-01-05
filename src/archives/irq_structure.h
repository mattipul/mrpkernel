#ifndef IRQ_STRUCTURE_H_GUARD
#define IRQ_STRUCTURE_H_GUARD

struct IRQ_HANDLER{
	unsigned short int base_function;
	struct IRQ_HANDLER *next;
};

#endif