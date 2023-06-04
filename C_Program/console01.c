#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void){
	int a=0;
	printf("Press any key to continue");
	a = getch(); /*Function() will display the output.*/
	printf("\n%d", a);
	
	char ch;
	printf("\nType any character ");
	ch = getche(); /*function() will display the entered key as output.*/
	printf("\n%c", ch);
	
	int b=0;
	printf("\nType any character ");
	b = getchar();
	printf("%d", b);
	
	fflush(stdin);
	printf("\nContinue Y/N ");
	fgetchar();
		
	return 0;
	
}
