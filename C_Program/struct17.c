/*Test file to check your code.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void openfile(char *, FILE *);

int main(){
	char s[80];
	FILE *fp;
	openfile("data.txt", fp);
	if(fp==NULL)
		printf("File can not open.");
	
	while(fgets(s, 79, fp) != NULL)
		puts(s);
	
	fclose(fp);
	return 0;
}

void openfile(char *fn, FILE *f){
	f = fopen(fn, "r");
}

