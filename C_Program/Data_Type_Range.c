#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main(void){
	
	printf("SCHAR_MIN = %d\t", SCHAR_MIN);
	printf("SCHAR_MAX = %d \t", SCHAR_MAX);
	printf("UCHAR_MAX = %u\n", UCHAR_MAX);
	printf("\n");
	
	printf("SHRT_MIN = %d\t", SHRT_MIN);
	printf("SHRT_MAX = %d\t", SHRT_MAX);
	printf("USHRT_MAX = %u\n", USHRT_MAX);
	printf("\n");
	
	printf("INT_MIN = %d\t", INT_MIN);
	printf("INT_MAX = %d\t", INT_MAX);
	printf("UINT_MAX = %u\n", UINT_MAX);
	printf("\n");
	
	printf("LONG_MIN = %Ld\t", LONG_MIN);
	printf("LONG_MAX = %Ld\t", LONG_MAX);
	printf("ULONG_MAX = %u\n", ULONG_MAX);
	printf("\n");
	
	return 0;
}
