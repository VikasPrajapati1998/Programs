#include <stdio.h>
#include <conio.h>

int main(void){
	FILE *fp;
	char name[20]="Ajay";
	int i;
	fp = fopen("data/students.txt", "w");
	for(i=0; i<=10; i++)
		fwrite(name, sizeof(name), 1, fp);
	fclose(fp);
	
	return 0;
}
