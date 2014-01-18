#include <stdint.h>
void main(){
	uint16_t *address=0xB8000;
	address[0]= 'A' | (15 | 1 << 4) << 8;
}
