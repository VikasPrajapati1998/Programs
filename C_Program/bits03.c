#include <stdio.h>
#include <conio.h>

void showbits(unsigned char);

int main(void){
	int a=0;
	unsigned char ch=32;
	unsigned char dh;
	showbits(ch);
	dh = ~ch;
	
	showbits(dh);
	printf("ch = %d\n", ch);
	printf("ch = %X\n", ch);
	printf("dh = %d\n", dh);
	printf("dh = %X\n", dh);
	
	return 0;
}

void showbits(unsigned char n){
	int i;
	unsigned char j, k, andmask;
	for(i=7; i>=0; i--){
		j=i;
		andmask = 1<<j;
		k = n & andmask;
		k == 0 ? printf("0") : printf("1");
	}
	printf("\n");
}
