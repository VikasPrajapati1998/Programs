#include <stdio.h>
#include <conio.h>

int main(void){
	char m[30];
	FILE *fp;
	fp = fopen("data/file12.txt", "rt");
	if(fp==NULL){
		printf("File can not open.");
		exit(1);
	}
	fgets(m, 30, fp);
	puts(m);
	fclose(fp);
	
	return 0;
}
