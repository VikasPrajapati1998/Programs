#include <stdio.h>
#include <conio.h>

void showbits(unsigned char);
int main(int argc, char *argv[]){
	int a=0, b=0, c=0;
	printf("Enter a : ");
	scanf("%d", &a);
	fflush(stdin);
	printf("Enter b : ");
	scanf("%d", &b);
	printf("a = %d ", a); showbits(a);
	printf("\n");
	printf("b = %d\n", b);
	c = a<<b;
	printf("c = %d ", c); showbits(c);
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
