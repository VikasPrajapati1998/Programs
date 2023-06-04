#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void){
	int i;
	float f;
	char ch;
	char str[20];
	printf("Enter the i, f, ch : ");
	scanf("%d %f %c", &i, &f, &ch);
	printf("%d %f %c", i, f, ch);
	printf("\n");
	sprintf(str, "%d %f %c", i, f, ch);
	puts(str);
	printf("------------------------------------------\n");
	int j;
	float l;
	char c;
	sscanf(str, "%d %f %c", &j, &l, &c);
	printf("%d %f %c", j, l, c);
	
	return 0;
}
