//function pointer
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void display();

int main(void){
	void (*ptr)();
	ptr = &display;
	printf("Address of function display is %u", ptr);
	(*ptr)();
	
	return 0;
}

void display(){
	puts("\nThis is display function");
	puts("Display function is ending here.");
}
