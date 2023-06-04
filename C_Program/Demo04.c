/*Prime number logic 1 */
#include<stdio.h>
#include<conio.h>
int main(){
	int i, n, count=0;
	printf("Enter a number : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if(n%i==0)
			count++;
	}
	if(count==2)
		printf("%d is Prime Number.", n);
	else
		printf("%d is not Prime Number.", n);
	
	return 0;
}
