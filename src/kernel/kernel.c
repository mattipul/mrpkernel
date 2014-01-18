#include "kernel.h"

void kernel_init(){
	kernel_debug_init();
	pid_counter=0;
	memory_stack_pointer=MEMORY_BLOCK_START;
	process_counter=0;
	//kernel_init_memory_area();
	//kernel_init_pcb();
	//kernel_init_process_list();
	kernel_run();
}

void kernel_init_memory_area(){
	kernel_memory_area_header=memory_stack_pointer;
	memory_stack_pointer+=sizeof(struct MEMORY_AREA_HEADER);
	kernel_memory_area_header->first=0;
	kernel_memory_area_header->last=0;
	int i;
	for(i=0; i<MAX_MEMORY_BLOCKS; i++){
		//memory_block(MAX_MEMORY_BLOCKS*sizeof(struct MEMORY_AREA)+MINUS_FROM_AVAILABLE_SPACE+(i*BLOCK_SIZE),BLOCK_SIZE);
	}
}

void kernel_init_pcb(){
	kernel_pcb_header=memory_stack_pointer;
	memory_stack_pointer+=sizeof(struct PROCESS_PCB_HEADER);
	kernel_pcb_header->first=0;
	kernel_pcb_header->last=0;	
	int i;
	for(i=0; i<MAX_PROCESS_COUNT; i++){
		process_create_pcb();
	}
}

void kernel_init_process_list(){
	kernel_process_queue_header=memory_stack_pointer;
	memory_stack_pointer+=sizeof(struct PROCESS_QUEUE_HEADER);
	kernel_process_queue_header->first=0;
	kernel_process_queue_header->last=0;	
	kernel_process_queue_header->count=0;	
	int i;
	for(i=0; i<MAX_PROCESS_COUNT_IN_QUEUE; i++){
		scheduler_create_list_node();
	}
}

void kernel_run(){
	scheduler_wait();
}
