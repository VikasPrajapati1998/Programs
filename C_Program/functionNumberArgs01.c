//Function with  variable number of arguments
#include <stdio.h>
#include <conio.h>
#include <stdarg.h>

void display_int(int, ...);

int main(void){
	display_int(3, 10, 20, 30);
	printf("New Display\n");
	display_int(5, 12, 34, 25, 84, 90);
	return 0;
}

void display_int(int n, ...){
	int m, i=0;
	va_list ptr;
	va_start(ptr, n);
	for(i=0; i<n; i++){
		m = va_arg(ptr, int);
		printf("%d\n", m);	
	}
	
	va_end(ptr);
}
