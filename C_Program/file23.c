#include <stdio.h>
#include <conio.h>

int main(void){
	FILE *fp;
	fp = fopen("data/file13.txt", "ab");
	if(fp==NULL){
		printf("File can not open.");
		exit(1);
	}
	else{
		printf("File is opend.");
	}
	char s[50];
	printf("Enter your message : ");
	gets(s);
	fputs(s, fp);
	fputc('\n', fp);
	
	return 0;
}
