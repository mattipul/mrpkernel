.globl   irq_clock_wrapper
.align   4
 
 irq_clock_wrapper:
     pusha
     call irq_clock
     popa
     iret
