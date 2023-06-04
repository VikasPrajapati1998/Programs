#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
	char ch;
	FILE *fp;
	fp = fopen("data.txt", "r");
	if(fp==NULL){
		printf("File is not found.");
		exit(1);
	}
	ch=fgetc(fp);
	while(!feof(fp)){
		printf("%c", ch);
		ch = fgetc(fp);
	}
	
	fclose(fp);
	printf("\n\n");
	printf("Done...!");
	getch();
	return 0;	
}
