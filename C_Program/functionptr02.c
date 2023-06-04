//function pointer
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int fun(int, int);

int main(void){
	int (*ptr)(int, int);
	int a;
	ptr = fun;
	
	int x, y;
	printf("Enter x : ");
	scanf("%d", &x);
	printf("Enter y : ");
	scanf("%d", &y);
	
	a = ptr(x, y);
	printf("\nSum is : %d", a);
	
	return 0;
}

int fun(int x, int y){
	printf("x = %d\ny = %d", x, y);
	int c;
	c = x+y;
	return c;
}
