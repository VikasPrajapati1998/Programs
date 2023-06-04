#include<stdio.h>
#include<conio.h>

#pragma pack(1) /* pack(1) means read one byte at a time*/

struct emp{
	int a;
	char ch;
	float s;
	char c;
};

int main(){
	struct emp e;
	printf("int = %d, char = %d, float = %d\n", sizeof(int), sizeof(char), sizeof(float));
	printf("%u %u %u %u\n", &e.a, &e.ch, &e.s, &e.c);
	printf("%d", sizeof(e));
	return 0;
}
