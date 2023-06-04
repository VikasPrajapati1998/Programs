#include <stdio.h>
#include <conio.h>
int main(int argc, char argv[]){
	int x;
	float f;
	x = 10;
	f = x;
	printf("x=%d, f=%.2f\n", x, f);
	
	int y;
	float d;
	char ch;
	d = 7.23;
	y=d;
	printf("y=%d, d=%.2f\n", y, d);
	ch = (char)y;
	printf("%c", ch);
	
	return 0;
}
