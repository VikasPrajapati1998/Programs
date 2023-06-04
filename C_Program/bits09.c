#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]){
	unsigned char a;
	a = 1<<3;
	printf("a = %02x\n", a);
	printf("a = %04x\n", a);
	printf("a = %016x\n", a);
	printf("a = %02d\n", a);
	printf("a = %08d\n", a);
	printf("a = %016d\n", a);
	return 0;
}
