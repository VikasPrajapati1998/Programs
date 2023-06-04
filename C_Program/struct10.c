/*Passing hole structure as argument of function*/

#include<stdio.h>
#include<conio.h>

struct book{
	char name[30];
	char author[30];
	int callno;
};

void display(struct book);

int main(void){
	struct book b1={"Let us C", "YPK", 101};
	display(b1);
	return 0;
}

void display(struct book b){
	printf("%s %s %d", b.name, b.author, b.callno);
}
