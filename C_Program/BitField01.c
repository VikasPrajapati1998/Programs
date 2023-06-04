#include <stdio.h>
#include <conio.h>

#pragma pack(1)

int main(void){
	typedef struct Bit{
		int a : 1 ;
		int b : 1 ;
	}Bit;
	
	Bit var;
	printf("Size of var : %d\n", sizeof(var));
	
	return 0;
}
