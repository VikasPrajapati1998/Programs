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
	fp = fopen("data/file05.csv", "rt+");
	if(fp==NULL){
		printf("File cann't open");
		exit(1);
	}
	
	emp e;
	
	while(fread(&e, sizeof(e), 1, fp)==1){
		printf("%s %d %.2f\n", e.name, e.age, e.bs);
	}
	return 0;
}
