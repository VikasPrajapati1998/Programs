#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	FILE *fp;
	fp = fopen("data/file01.txt", "w+");
	if(fp==NULL){
		puts("Cann't open file.");
		exit(1);
	}
	
	char s[80];
	printf("Write Your Message Here : ");
	
	while(strlen(gets(s))>0){
		fputs(s, fp);
		fputs("\n", fp);
	}
	
	fclose(fp);
	puts("Done!");
	
	return 0;
}
