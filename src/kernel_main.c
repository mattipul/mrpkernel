#include "kernel_debug.h"

#if defined(__cplusplus)
extern "C" /* Use C linkage for kernel_main. */
#endif
void kernel_main(){
	kernel_debug_init();
	kernel_debug_putchar('M');
}