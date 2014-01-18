#include "process.h"

int process_create_pcb(){
	struct PROCESS_PCB *mpcb=kernel_pcb_header->first;
	if(mpcb==0){
		struct PROCESS_PCB *new_pcb=memory_stack_pointer;
		new_pcb->pid=pid_counter;
		new_pcb->used=0;
		new_pcb->segment=0;
		new_pcb->next=0;
		new_pcb->prev=0;
		new_pcb->state=0;
		pid_counter++;
		memory_stack_pointer+=sizeof(struct PROCESS_PCB);
		kernel_pcb_header->first=new_pcb;
		return 1;
	}else{
		while(mpcb->next!=0){
			mpcb=mpcb->next;
		}
		struct PROCESS_PCB *new_pcb=memory_stack_pointer;
		new_pcb->pid=pid_counter;
		new_pcb->used=0;
		new_pcb->segment=0;
		new_pcb->next=0;
		new_pcb->prev=mpcb;
		new_pcb->state=0;
		mpcb->next=new_pcb;
		kernel_pcb_header->last=new_pcb;
		pid_counter++;
		memory_stack_pointer+=sizeof(struct PROCESS_PCB);
		return 1;
	}
	return 0;
}

struct MEMORY_AREA* process_allocate_memory_area(){
	struct MEMORY_ARA *marea=kernel_memory_area_header;
	while(marea!=0){
		if(marea->used==0){
			return marea;
		}
		marea=marea->next;
	}
	return 0;
}

int process_create(){
	struct PROCESS_PCB *mpcb=kernel_pcb_header->first;
	while(mpcb!=0){
		if(mpcb->used == 0){
			mpcb->used=1;
			mpcb->segment=process_allocate_memory_area();
			return mpcb->pid;
		}
		mpcb=mpcb->next;
	}
	return 0;
}

int process_destroy(int pid){
	struct PROCESS_PCB *mpcb=kernel_pcb_header->first;
	while(mpcb!=0){
		if(mpcb->pid == pid){
			mpcb->used=0;
			mpcb->segment->used=0;
			return 1;
		}
		mpcb=mpcb->next;
	}
	return 0;
}
