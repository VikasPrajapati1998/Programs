#include<stdio.h>
#include<stdio.h>
int main(void){
	char p[] = "The Sixth sick sheikh's sixth ship is sick";
	int i;
	while(p[i] != '\0'){
		putch(p[i]);
		i++;
	}
	
	printf("\n");
	i=0;
	while(p[i] != '\0'){
		putchar(p[i]);
		i++;
	}
	
	printf("\n");
	i=0;
	while(p[i] != '\0'){
		fputchar(p[i]);
		i++;
	}
	
	return 0;
}
