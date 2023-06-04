/*Test file to check your code.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void display(int **q);

int main(){
	int i = 7;
	int *p1 = &i;
	int **q1 = &p1;
	display(q1);
	display(&p1);
	
	return 0;
}

void display(int **q){
	printf("%d\n", **q);
}

