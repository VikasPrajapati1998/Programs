#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct emp{
	char name[50];
	int age;
	float bs;
}emp;

int main(void){
	FILE *fp;
	fp = fopen("data/file06.txt", "wt");
	if(fp==NULL){
		printf("File cann't open.");
		exit(1);
	}
	
	emp e;
	
	char another='y';
	while(another == 'y'){
		printf("\nEnter name age and basic salary : ");
		scanf("%s %d %f", e.name, &e.age, &e.bs);
		fwrite(&e, sizeof(e), 1, fp);
		
		printf("Add another record (y/n) : ");
		fflush(stdin);
		another = getche();
	}
	
	fclose(fp);
	printf("\nDone!");
	
	return 0;
}

