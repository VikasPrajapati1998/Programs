#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	fp = fopen("data/file08.txt", "wt");
	if(fp==NULL)
		printf("File can not open.");
	
	int i;
	float f;
	char c;
	char another;
	printf("Do you want enter data y/n : ");
	another = fgetchar();
	fflush(stdin);
	while(another=='y'){
		printf("Enter your value i, f, c : ");
		scanf("%d %f %c", &i, &f, &c);
		fprintf(fp, "%d %f %c\n", i, f, c);
		printf("\n");
		fflush(stdin);
		printf("Do you want enter data y/n : ");
		another = fgetchar();
	}
	fclose(fp);
	printf("Done..!");
	return 0;
}
