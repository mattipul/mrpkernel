#include "scheduler.h"

int scheduler_create_list_node(){
	struct PROCESS_QUEUE *mqueuen=kernel_process_queue_header->first;
	if(mqueuen==0){
		struct PROCESS_QUEUE *new_queuen=memory_stack_pointer;
		new_queuen->process=0;
		new_queuen->used=0;
		new_queuen->next=0;
		new_queuen->prev=0;
		kernel_process_queue_header->first=new_queuen;
		memory_stack_pointer+=sizeof(struct PROCESS_QUEUE);
		return 1;
	}else{
		while(mqueuen->next!=0){
			mqueuen=mqueuen->next;
		}
		struct PROCESS_QUEUE *new_queuen=memory_stack_pointer;
		new_queuen->process=0;
		new_queuen->used=0;
		new_queuen->next=0;
		new_queuen->prev=mqueuen;
		mqueuen->next=new_queuen;
		kernel_process_queue_header->last=new_queuen;
		memory_stack_pointer+=sizeof(struct PROCESS_QUEUE);
		return 1;
	}
	return 0;
}

void scheduler_set_state(int pid, int state){
	struct PROCESS_PCB *mpcb=kernel_pcb_header->first;
	while(mpcb!=0){
		if(mpcb->pid == pid){
			mpcb->state=state;
			break;
		}
		mpcb=mpcb->next;
	}
}

void scheduler_enqueue(struct PROCESS_PCB *pcb){
	kernel_process_queue_header->count++;
	struct PROCESS_QUEUE *mqueuen=kernel_process_queue_header->first;
	while(mqueuen!=0){
		if(mqueuen->used == 0){
			mqueuen->used=1;
			mqueuen->process=pcb;
			break;
		}
		mqueuen=mqueuen->next;
	}
}

void scheduler_dequeue(){
	if(kernel_process_queue_header->count>0){
		kernel_process_queue_header->count--;
		struct PROCESS_QUEUE *queuen=kernel_process_queue_header->first;
		while(queuen!=0){
			struct PROCESS_QUEUE *m_queuen=queuen->next;
			queuen->used=m_queuen->used;
			queuen->process->state=m_queuen->process->state;
			queuen->process=m_queuen->process;
			queuen=queuen->next;
		}
	}
}

void scheduler_block_current_process(){
	kernel_process_queue_header->current_process->state=0;
	kernel_process_queue_header->current_process->used=0;
	kernel_process_queue_header->current_process=0;
}

void scheduler_set_current_process(struct PROCESS_PCB* process){
	kernel_process_queue_header->current_process=process;
	process->state=1;
}

void scheduler_give_turn(int pid){

}

void scheduler_jump_to_process(){
	void (*process_main_function)(void);
	process_main_function=kernel_process_queue_header->current_process->process_main_function;
	kernel_debug_binary(process_main_function);
	process_main_function();
}

void scheduler_next(){
	if(process_counter>0){
		scheduler_block_current_process();
		scheduler_dequeue();
	}
	scheduler_set_current_process(kernel_process_queue_header->first);
	scheduler_jump_to_process();
}

void scheduler_wait(){
	while(kernel_process_queue_header->count == 0);
	scheduler_next();
}
