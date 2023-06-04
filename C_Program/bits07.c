#include <stdio.h>
#include <conio.h>
void showbits(unsigned char);
int main(void){
	unsigned char num = 225, j, k;
	printf("\nDecimal %d is same as binary ", num);
	showbits(num);
	for(j=0; j<=4; j++){
		k = num<<j;
		printf("\n%d left shift %d gives ", num, j);
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
		k==0 ? printf("0") : printf("1");
	}
}
