#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void){
	union a{
		short int i;
		char ch[2];
	};
	
	union a key;
	key.i = 512;
	printf("key.i = %d\n", key.i);
	printf("key.ch[0] = %d\n", key.ch[0]);
	printf("key.ch[1] = %d\n", key.ch[1]);
	
	return 0;
}
