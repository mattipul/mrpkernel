.globl   _irq_clock_wrapper
.align   4
 
 _irq_clock_wrapper:
     pusha
     call irq_clock
     popa
     iret
