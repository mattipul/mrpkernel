#ifdef KERNEL_ARCHIVES_H_GUARD
#define KERNEL_ARCHIVES_H_GUARD

struct INTERRUPT_HANDLERS{
	unsigned short int *base;
	int length;
};

struct PROCESS_TABLE{
	unsigned short int *base;
	int length;
}

struct DETECTED_MEMORY{
	unsigned short int *base;
	int length;
};

struct KERNEL_ARCHIVES{
	struct INTERUPT_HANDLERS interrupt_handlers;
	struct PROCESS_TABLE processes;
	struct DETECTED_MEMORY memory_map;
};

struct KERNEL_ARCHIVES kernel_archives;

#endif