#include <stdio.h>
#include <conio.h>

float fun(int, int);

int main(void){
	int x, y;
	float f;
	printf("Enter x : ");
	scanf("%d", &x);
	printf("Enter y : ");
	scanf("%d", &y);
	
	float (*ptr)(int, int);
	ptr = fun;
	f = ptr(x, y); // f = (*ptr)()
	printf("Division : %.2f", f);
	
	return 0;
}

float fun(int x, int y){
	float f;
	f = (float)x/y;
	return(f);
}

