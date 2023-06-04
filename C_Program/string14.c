/*Test file to check your code.*/
#include<stdio.h>
#include<conio.h>

int main(){
	int i;
	char *a="hello";
	while(*a !='\0'){
		printf("%c", *a);
		a++;
	}
	
//---------------------------------------------------------
	/*
#include<stdio.h>
#include<conio.h>

int main(){
	int i;
	char a[]="hello";
	while(a !='\0'){
		printf("%c", *a);
		a++;
	}
	
	return 0;
	
	"This code will work. We can't change a string constant."
}
	*/
//--------------------------------------------------------
	return 0;
}
