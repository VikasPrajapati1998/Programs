/*Factorial Using function*/
#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	int f = fact(n);
	printf("Factorial of %d is %d", n, f);
	return 0;
}
int fact(n){
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
