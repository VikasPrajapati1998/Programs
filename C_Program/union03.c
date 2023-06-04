#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void){
	typedef struct a{
		int i;
		char c[2];
	}alpha;
	
	typedef struct b{
		int j;
		char d[2];
	}beta;
	
	typedef union z{
		alpha a1;
		beta b1;
	}zeta;
	
	zeta s;
	s.a1.i = 512;
	s.b1.d[0] = 'a';
	s.b1.d[1] = 'b';
	
	printf("%d\n", s.a1.i);
	printf("%d\n", s.b1.j);
	
	printf("%c\n", s.a1.c[0]);
	printf("%c\n", s.a1.c[1]);
	printf("%c\n", s.b1.d[0]);
	printf("%c\n", s.b1.d[1]);
	
	printf("%s\n", s.a1.c);
	printf("%s\n", s.b1.d);
	
	return 0;
}
