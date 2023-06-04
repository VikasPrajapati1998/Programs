#include <stdio.h>
#include <conio.h>
int main(void){
	int a=0;
	printf("Enter a number : ");
	scanf("%d", &a);
	printf("Decimal Value : %d\n", a);
	int b = printf("Hello Students\t");
	printf("Length of string : %d\n", b);
	printf("Ocatal Value : %o\n", a);
	printf("Hexadecimal Value : %X\n", a);
	printf("%Hexadecimal Value : %x\n", a);
	
	printf("Binary : %d\n", 0b1010);
	printf("Ocatal : %d\n", 075);
	printf("Hexadeciaml : %d\n", 0x1D3);
	getch();
	
	return 0;
}
