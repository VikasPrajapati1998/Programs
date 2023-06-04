#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct employee{
	char name[50];
	int age;
	float bs;
}emp;

int main(void){
	FILE *fp;
	fp = fopen("data/file02.txt", "r+");
	if(fp==NULL){
		printf("File cann't open");
		exit(1);
	}
	
	emp e;
	
	while(fscanf(fp, "%s %d %f", e.name, &e.age, &e.bs) != EOF){
		printf("%s %d %.2f\n", e.name, e.age, e.bs);
	}
	
	fclose(fp);
	printf("Done!");
	
	return 0;
}
