#include <stdio.h>
#include <conio.h>

int main(void){
	int a[5], *p;
	int i;
	for(i=0; i<5; i++){
		scanf("%d", a);
	}
	printf("%d", *a);
	return 0;
}
