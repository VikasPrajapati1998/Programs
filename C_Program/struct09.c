/*Passing individual structure elements*/

#include<stdio.h>
#include<conio.h>
#include<conio.h>

void display(char *, char *, int);

struct book{
	char name[30];
	char author[30];
	int callno;
};

int main(void){
	struct book b1={"Let us C", "Y. Kanetkar", 101};
	display(b1.name, b1.author, b1.callno);
	return 0;
}

void display(char *s, char *t, int n){
	printf("%s %s %d", s, t, n);
}
