#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	FILE *fp;
	fp = fopen("data04.txt", "w");
	if(fp==NULL){
		puts("File cann't open.");
		exit(1);
	}
	
	char message[100];
	while(strlen(gets(message))>0){
		fputs(message, fp);
		fputs("\n", fp);
	}
	fclose(fp);
	
	printf("Message Load To File.");
	
	return 0;
	
}
