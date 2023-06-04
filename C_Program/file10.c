#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	fp = fopen("data/file01.txt", "r+");
	if(fp==NULL){
		puts("Cann't open file.");
		exit(1);
	}
	
	char ch[80];
	
	while(fgets(ch, 80, fp) != NULL){
		printf("%s", ch);
	}
	printf("\n");
	fclose(fp);
	puts("Done!");
	
	return 0;
}
