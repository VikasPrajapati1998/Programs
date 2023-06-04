#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
	int i;
	FILE *fp;
	char s[100];
	printf("Enter Your Message : ");
	gets(s);
	
	fp = fopen("data01.txt", "w+");
	if(fp == NULL){
		printf("File can't open");
		exit(1);
	}
	fputs(s, fp);
	
	fclose(fp);
	printf("Done...!");
	getch();
	return 0;
}
