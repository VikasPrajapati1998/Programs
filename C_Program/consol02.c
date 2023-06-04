#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void){
	char a;
	printf("Press any key to continue ");
	a = getch(); /*Function() will display the output.*/
	printf("\n%c", a);
	
	char ch;
	printf("\nType any character ");
	ch = getche(); /*function() will display the entered key as output.*/
	printf("\n%c", ch);
	
	return 0;
	
}
