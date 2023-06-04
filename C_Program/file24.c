#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	FILE *fs, *ft;
	char ch;
	if(argc != 3){
		puts("Improper number of arguments");
		exit(1);
	}
	fs = fopen(argv[1], "r");
	if(fs==NULL){
		puts("Can not open source file.");
		exit(2);
	}
	ft = fopen(argv[2], "w");
	if(ft==NULL){
		puts("Can not open target file.");
		fclose(fs);
		exit(3);
	}
	
	while((ch=fgetc(fs))!=EOF){
		fputc(ch, ft);
	}
	puts("Done...!");
	fclose(fs);
	fclose(ft);
	return 0;
}
