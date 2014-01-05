
detect_memory_e820:
	xor ebx,ebx
	mov [es:di+20],dword 1
	mov edx,0x534D4150
	mov eax,0xE820
	mov ecx,24
	int 0x15
	jc short detect_memory_failed
	mov edx, 0x0534D4150
	cmp eax,edx
	jne short detect_memory_failed
	test ebx,ebx
	jc short detect_memory_failed
	jmp detect_memory_jump
	
detect_memory_go_on:
	mov eax,0xE820
	mov [es:di+20],dword 1
	mov edx,0x534D4150
	mov ecx,24
	int 0x15
	jc short detect_memory_finish
	mov edx, 0x0534D4150
	
detect_memory_jump:
	jcxz .skipent
	cmp cl, 20
	jbe short detect_memory_no_text
	test byte [es:di + 20], 1
	je short .skipent
	
detect_memory_no_text:
	mov ecx, [es:di + 8]	
	or ecx, [es:di + 12]
	jz detect_memory_skipent		
	inc bp			
	add di, 24
	
detect_memory_skipent:
	test ebx, ebx		
	jne short .e820lp
	
detect_memory_finish:
	mov [mmap_ent], bp	
	clc			
	ret
detect_memory_failed:
	stc			
	ret