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
	fp = fopen("data/file04.txt", "w+");
	if(fp==NULL){
		printf("File cann't open.");
		exit(1);
	}
	
	char a='y';
	emp e;
	
	while(a=='y'){
		printf("\nEnter name , age, and basic salary : ");
		scanf("%s %d %f", &e.name, &e.age, &e.bs);
		fprintf(fp, "%s, %d, %.2f,", e.name, e.age, e.bs);
		fputs("\n", fp);
		
		printf("Add another record (y/n) : ");
		fflush(stdin);
		a = getchar();
	}
	fclose(fp);
	printf("Done!");
	return 0;
}
