#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	fp = fopen("data03.txt", "r");
	char ch;
	ch = getc(fp);
	while(ch!=EOF){
		printf("%c", ch);
		ch = getc(fp);
	}
	return 0;
}
