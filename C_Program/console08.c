#include<stdio.h>
#include<conio.h>
int main(void){
	int i;
	char str[] = "hello";
/*  str = "bye";  This is not possible.*/
	
	char *p="Conguratulation";
	char *q = p;
	printf("%s", q);
	return 0;
}
