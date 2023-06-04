#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

char* input(void);

struct book{
	char *name;
	unsigned int id;
	int pages;
	float price;
};
typedef struct book book;

int main(void){
	book b1;
	printf("Enter Book Name : ");
	b1.name = input();
	printf("Enter Book Id : ");
	scanf("%u", &b1.id);
	printf("Enter Book Pages : ");
	scanf("%d", &b1.pages);
	printf("Enter Book Price : ");
	scanf("%f", &b1.price);
	
	printf("Book Detail.\n");
	printf("%s, %u, %d, %.2f/-", b1.name, b1.id, b1.pages, b1.price);
	return 0;
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
