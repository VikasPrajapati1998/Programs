#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void){
	printf("\ngetch() : ");
	getch();
	
	printf("\ngetche() : ");
	getche();
	
	printf("\ngetchar() : ");
	getchar();
	
	fflush(stdin);
	printf("\nfgetchar() : ");
	fgetchar();
	
	return 0;
}
