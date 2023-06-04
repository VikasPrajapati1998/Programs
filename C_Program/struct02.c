#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

char* input(void);

struct book{
	char *name;
	int page;
	float price;
}b;

int main(){
	fflush(stdin);
	printf("Enter Book_Name : ");
	b.name=input();
	fflush(stdin);
	printf("Enter Page and Price : ");
	scanf("%d %f", &b.page, &b.price);
	printf("%s, %d, %.2f",b.name, b.page, b.price);
	
}

char* input(void){
	char p[100];
	char *n;
	int len;
	scanf("%[^\n]s", p);
	len= strlen(p);
	n = (char*)malloc(len+1);
	strcpy(n, p);
	return n;
}
