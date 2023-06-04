/*Number is Even or Odd*/

#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	if(n%2==0)
		printf("Even\n");
	else
		printf("Odd\n");
	return 0;	
}
