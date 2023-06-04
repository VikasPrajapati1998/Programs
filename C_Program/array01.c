#include <stdio.h>
#include <conio.h>

int main(void){
	int a[] = {11, 22, 36, 5, 2};
	int sum=0, *p;
	for(p=&a[0]; p<=&a[4]; p++){
		sum += *p;
	}
	printf("%d", sum);
	
	return 0;
}
