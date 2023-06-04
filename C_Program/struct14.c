#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(){
	struct gospel{
		int num;
		char mess1[50];
	}m;
	m.num = 1;
	strcpy(m.mess1, "If all that you have is hammer");
	
	
	printf("%u %u", &m.num, m.mess1);
	printf("\n");
	printf("%d", sizeof(m));
	return 0;
}
