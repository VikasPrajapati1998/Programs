#include <stdio.h>
#include <conio.h>

void display(int *p);
void show(int **p);

int main(){
	int i=7;
	display(&i);
	int *p1 = &i;
	display(p1);
	int *p2 = p1;
	display(p2);
	// ----------------------------------------------------------------------------
	puts("------------------------------------");
	int **q1 = &p1;
	display(*q1); // p1 = *q1;
	show(q1);
	// ----------------------------------------------------------------------------
	puts("------------------------------------");
	int ***r = &q1;
	display(**r);
	show(*r);
	
	return 0;
}

void display(int *p){
	printf("%d\n", *p);
}
void show(int **p){
	printf("%d\n", **p);
}
