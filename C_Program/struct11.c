/*structure pointer*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct book{
	char name[30];
	char author[30];
	int callno;
};
typedef struct book book;
int main(void){
	book b1={"Let us C", "YPK", 101};
	book *ptr;
	ptr = &b1;
	printf("%s %s %d\n", b1.name, b1.author, b1.callno);
	printf("%s %s %d\n", ptr->name, ptr->author, (*ptr).callno);
	return 0;

}

