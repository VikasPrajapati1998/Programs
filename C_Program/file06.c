#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	fp = fopen("data03.txt", "w");
	if(fp==NULL){
		printf("File cann't open.");
		exit(1);
	}
	
	char message[100];
	printf("Enter Your Message : ");
	scanf("%[^\n]s", message);
	printf("%s", message);
	
	int i=0;
	while(message[i] != '\0'){
		putc(message[i], fp);
		i++;
	}
	
	fclose(fp);
	printf("\nDone\n");
	return 0;
}
