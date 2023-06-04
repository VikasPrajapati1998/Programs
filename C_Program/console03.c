#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void){
	
	char b;
	printf("\nType any character ");
	b = getchar();
	printf("%c", b);
	
	fflush(stdin);
	char c;
	printf("\nContinue Y/N ");
	c = fgetchar();
	printf("%c", c);
		
	return 0;
	
}
