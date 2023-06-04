#include <stdio.h>
#include <conio.h>
#include <stdarg.h>
#include <stdlib.h>

int max(int, ...);

int main(void){
	int i=0, n;
	printf("Enter the number of values you want enter : ");
	scanf("%d", &n);
	if(n>10){
		printf("Sorry!, Maximum limit for 10 numbers.");
		exit(1);
	}
	
	static int a[10];
	for(i=0; i<n; i++){
		printf("Enter number %d : ", i+1);
		scanf("%d", &a[i]);
		fflush(stdin);
	}
	
	int m;
	m = max(10, a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
	printf("Maximum Number : %d", m);
	return 0;
}

int max(int n, ...){
	int i=0, m, num;
	va_list ptr;
	va_start(ptr, n);
	m = va_arg(ptr, int);
	for(i=0; i<n; i++){
		num = va_arg(ptr, int);
		if(num>m){
			m=num;
		}
	}
	va_end(ptr);
	return(m);
}
