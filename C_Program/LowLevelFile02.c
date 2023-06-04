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
	int fr, bytes;
	fr = open("data/demo.txt", O_RDONLY, S_IREAD);
	if(fr==-1){
		puts("File can not open.");
		exit(1);
	}
	bytes = read(fr, buffer, 128);
	while(1){
		if(bytes>0){
			puts(buffer);
			bytes = read(fr, buffer, 128);
		}
		else{
			break;
		}
	}
	close(fr);
}
