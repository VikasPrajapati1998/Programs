#include <stdio.h>
#include <conio.h>

int main(void){
	FILE *fp;
	fp = fopen("data/file13.txt", "a");
	if(fp==NULL){
		printf("File can not open.");
		exit(1);
	}
	char message[50];
	printf("Enter your message : ");
	gets(message);
	fputs(message, fp);
	fputc('\n', fp);
	fclose(fp);
	printf("Done...!");
	
	return 0;
}
