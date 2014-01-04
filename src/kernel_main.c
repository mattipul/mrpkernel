unsigned short int *buffer;

void kernel_main(){
	buffer=0xB8000;
	buffer[0] = 'A' | (15 | 1 << 4) << 8;
}