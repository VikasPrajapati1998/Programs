#include<stdio.h>
#include<conio.h>
int main(){
	printf("%d %d %d", sizeof('3'), sizeof("3"), sizeof(3)); // 4, 2, 4
	printf("\n");
	printf("%d %d %d", sizeof(char), sizeof(char[2]), sizeof(int)); // 1, 2, 4
	return 0;
}
