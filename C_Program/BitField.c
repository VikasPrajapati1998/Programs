#include <stdio.h>
#include <conio.h>

#define Male 0;
#define Female 1;

#define Single 0;
#define Married 1;
#define Divorced 2;
#define Widowed 3;

#pragma pack(1)

int main(void){
	typedef struct employee{
		unsigned gender : 1;
		unsigned mar_stat : 2;
		unsigned hobby : 3;
		unsigned scheme : 4;
	}emp;
	
	emp e;
	e.gender = Male;
	e.mar_stat = Divorced;
	e.hobby = 5;
	e.scheme = 9;
	
	printf("Gender = %d\n", e.gender);
	printf("Marital Status = %d\n", e.mar_stat);
	printf("Hobby = %d\n", e.hobby);
	printf("Scheme = %d\n", e.scheme);
	
	printf("Byte Occupied by e : %d", sizeof(e));
	
	return 0;
}
