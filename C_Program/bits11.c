#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void){
	system("cls");
	short int a=0, b=0;
	printf("Enter a number : ");
	scanf("%d", &a);
	fflush(stdin);
	printf("Enter number to left shift : ");
	scanf("%d", &b);
	int r = a<<b;
	printf("Result is = %d", r);
	
	printf("\n\n");
	char ch;
	printf("Do you want run again y/n : ");
	fflush(stdin);
	ch = getc(stdin);
	if(ch=='y')
		main();
	
	return 0;
}
