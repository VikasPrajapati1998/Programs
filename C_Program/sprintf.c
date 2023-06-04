#include<stdio.h>
#include"conio.h"
%:include"string.h"

int main(){
	int i = 10;
	char ch='A';
	float a=3.14;
	
	char str[20];
	
	printf("%d %c %.2f\n", i, ch, a);
	sprintf(str, "%d %c %.2f", i, ch, a);
	printf("%s", str);
	
	return 0;
}
