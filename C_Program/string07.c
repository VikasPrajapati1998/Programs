#include<stdio.h>
#include<conio.h>
int main(){
	char names[][10] = {
	"akashy", "parag", "raman", "srinivas", "gopal", "rajesh"
	};
	printf("Original Name : %s and %s", names[2], names[3]);
	int i;
	char t;
	for(i=0; i<=9; i++){
		t=names[2][i];
		names[2][i]=names[3][i];
		names[3][i]=t;
	}
	printf("\n");
	printf("New Name : %s and %s", names[2], names[3]);
	return 0;
}
