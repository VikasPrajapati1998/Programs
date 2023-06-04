#include <stdio.h>
#include <conio.h>

void showbits(unsigned char);

int main(void){
	unsigned char num, k;
	for(num=0; num<=5; num++){
		printf("\nDecimal %d is same as binary ", num);
		showbits(num);
		k = ~num;
		printf("\nOne's Complement of %d is ", num);
		showbits(k);
	}
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

