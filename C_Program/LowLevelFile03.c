#include <fcntl.h>
#include "sys\\types.h"
#include "sys\\stat.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>

int main(void){
	char buffer[128];
	int fw, bytes;
	fw = open("data/file07.txt", O_CREAT | O_WRONLY, S_IWRITE);
	if(fw==-1){
		puts("File can not open.");
		exit(1);
	}
	printf("Enter your message : ");
	gets(buffer);
	write(fw, buffer, 128);
	close(fw);
	return 0;
}
