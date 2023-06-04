#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void){
	FILE *fp;
	fp = fopen("data/file08.txt", "rt");
	if(fp==NULL)
		printf("File can not open.");
	
	int i;
	float f;
	char c;
	while(fscanf(fp, "%d %f %c\n", &i, &f, &c) != EOF)
		printf("%d %f %c\n", i, f, c);

	printf("Done..!");
	fclose(fp);
	
	return 0;
}
