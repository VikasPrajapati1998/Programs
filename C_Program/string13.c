/*Test file to check your code.*/
#include<stdio.h>
int main(){
	printf("%d", ' ');
	printf("\n");
	printf("%d", '\0');
	printf("\n");
	printf("%d", '0');
	
	printf("\n");
	printf("Taking inputs : ");
	char c1[20];
	scanf("%s", c1);
	printf("%s", c1);
	
	fflush(stdin);
	printf("\n");
	printf("Taking inputs : ");
	char c2[20];
	scanf("%[^\n]s", c2);
	printf("%s", c2);
}
