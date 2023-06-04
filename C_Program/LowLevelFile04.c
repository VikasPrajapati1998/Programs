#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "sys/types.h"
#include "sys/stat.h"

int main(void){
	int file;
	file = open("data/file09.txt", O_CREAT | O_WRONLY, S_IWRITE);
	if(file == -1){
		printf("File can not open.");
		exit(1);
	}
	
	char buffer[512];
	printf("Enter Your Message : ");
	gets(buffer);
	write(file, buffer, 512);
	close(file);
	puts("Done..!");
	
	return 0;
}

