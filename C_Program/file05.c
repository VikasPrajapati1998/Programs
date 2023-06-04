#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	fp = fopen("data02.txt", "r");
	char ch;
	ch = fgetc(fp);
	while(ch!=EOF){
		printf("%c", ch);
		ch = fgetc(fp);
	}
	return 0;
}
