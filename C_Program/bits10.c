#include <stdio.h>
#include <conio.h>
#define BV(x) (1<<x)

int main(int argc, char *argv[]){
	unsigned char a;
	a = BV(3);
	printf("a = %02x", a);
	return 0;
}
