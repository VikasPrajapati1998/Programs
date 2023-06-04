#include<stdio.h>
#include<conio.h>
int main(){
	char *names[] = {
	"akashy", "parag", "raman", "srinivas", "gopal", "rajesh"
	};
	char *t;
	printf("Original Names : %s and %s", names[2], names[3]);
	t = names[2];
	names[2] = names[3];
	names[3] = t;
	printf("\n");
	printf("New Names : %s and %s", names[2], names[3]);
	return 0;
}
