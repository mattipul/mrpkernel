.globl   irq_divide_by_zero_wrapper
.align   4
 
irq_divide_by_zero_wrapper:
     pusha
     call    irq_divide_by_zero
     popa
     iret
