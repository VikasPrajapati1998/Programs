#include <stdio.h>
#include <conio.h>

int main(void){
	FILE *fp;
	fp = fopen("data/file11.txt", "wt");
	if(fp==NULL){
		printf("File can not open.");
		exit(1);
	}
	int i;
	for(i=0; i<=3; i++){
		char names[20]="\0";
		puts("\nEnter name : ");
		gets(names);
		fwrite(names, sizeof(names), 1, fp);
		fwrite("\n", 1, 1, fp);
	}
	fclose(fp);
	
	return 0;
}
