#include "memory.h"

int memory_block(uint16_t base, unsigned int size){
	struct MEMORY_ARA *marea=kernel_memory_area_header->first;
	if(marea==0){
		struct MEMORY_AREA *new_marea=memory_stack_pointer;
		new_marea->base_address=base;
		new_marea->used=0;
		new_marea->length=size;
		new_marea->next=0;
		new_mare->prev=0;
		kernel_memory_area_header->first=new_marea;
		kernel_memory_area_header->last=new_marea;
		memory_stack_pointer+=sizeof(struct MEMORY_AREA);
	}else{
		while(marea->next!=0){
			marea=marea->next;
		}
		struct MEMORY_AREA *new_marea;
		new_marea->used=0;
		new_marea->base_address=base;
		new_marea->length=size;
		new_marea->next=0;
		new_marea->prev=marea;
		marea->next=new_marea;
		kernel_memory_area_header->last=new_marea;
	}
}

int memory_malloc(struct MEMORY_AREA *marea_malloc){
	struct MEMORY_ARA *marea=kernel_memory_area_header->first;
	if(marea==0){
		return 0;
	}else{
		while(marea->next!=0){
			if(marea_free == marea){
				marea->used=1;
				return 1;
			}
			marea=marea->next;
		}
	}
	return 0;
}

int memory_free(struct MEMORY_AREA *marea_free){
	struct MEMORY_ARA *marea=kernel_memory_area_header->first;
	if(marea==0){
		return 0;
	}else{
		while(marea->next!=0){
			if(marea_free == marea){
				marea->used=0;
				return 1;
			}
			marea=marea->next;
		}
	}
	return 0;
}
