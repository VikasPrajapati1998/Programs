#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	void *p;
	p = (void*)malloc(40);
	int l = sizeof(p);
	printf("%d", l);
	return 0;
}
