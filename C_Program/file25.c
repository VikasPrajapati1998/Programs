// Detecting errors in reading / writing
#include <stdio.h>
#include <conio.h>

int main(void){
	FILE *fp;
	char ch;
	fp = fopen("demo05.txt", "w");
	while(!feof(fp)){
		ch = fgetc(fp);
		if(ferror(1)){
			perror("Trial");
			break;
		}
		else{
			printf("%c", ch);
		}
	}
	fclose(fp);
	
	return 0;
}
