#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	FILE *fs, *ft;
	char ch;
	
	fs = fopen("pr1.c", "r");
	if(fs==NULL){
		puts("Cann't open source file.");
		exit(1);
	}
	
	ft = fopen("pr2.c", "w");
	if(ft==NULL){
		puts("Cann't open target file.");
		fclose(fs);
		exit(2);
	}
	
	while(1){
		ch=fgetc(fs);
		if(ch==EOF)
			break;
		else
			fputc(ch, ft);
	}
	
	fclose(fs);
	fclose(ft);
	return 0;
}
