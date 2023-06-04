#include <stdio.h>
#include <conio.h>

int* fun();

int main(void){
	int *ptr;
	ptr = fun();
	printf("Address = %d, Value = %d",ptr, *ptr);
	return 0;
}

int* fun(){
	static int i = 10;
	return (&i);
}
