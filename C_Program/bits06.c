#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void showbits(unsigned char n);

int main(void){
	system("cls");
	int a=0, b=0;
	printf("Enter a number : ");
	scanf("%d", &a);
	fflush(stdin);
	printf("Enter number to shift : ");
	scanf("%d", &b);
	int r = a>>b;
	printf("Result is = %d\n", r);
	//-----------------------------------------------------
	printf("a = "); showbits(a);
	printf("b = %d\n", b);
	printf("r = "); showbits(r);
	//----------------------------------------------------
	
	printf("\n\n");
	char ch;
	printf("Do you want run again y/n : ");
	fflush(stdin);
	ch = getc(stdin);
	if(ch=='y')
		main();
	
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

