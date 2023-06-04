/*Factorial Programs*/
#include<stdio.h>
#include<conio.h>

int main(){
	int i, n, fact=1;
	printf("Enter a number : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
		fact = fact*i;
	
	printf("Factorial of number : %d", fact);
	return 0;
}
