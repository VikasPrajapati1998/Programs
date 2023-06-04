#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "sys/types.h"
#include "sys/stat.h"

int main(void){
	int file;
	file = open("data/file09.txt", O_RDONLY, S_IREAD);
	if(file == -1){
		printf("File can not open.");
		exit(1);
	}
	
	char buffer[512];
	int bytes;
	bytes = read(file, buffer, 512);
	while(bytes>0){
		puts(buffer);
		bytes = read(file, buffer, 512);
	}
	printf("%ld\n", tell(file));
	close(file);
	puts("Done..!");
	
	return 0;
}

