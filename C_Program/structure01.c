#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct emp{
	char name[30];
	int age;
	float salary;
};

int main(){
	struct emp e1;
	printf("Enter name : ");
	scanf("%[^\n]", e1.name);
	fflush(stdin);
	printf("Enter age : ");
	scanf("%d", &e1.age);
	fflush(stdin);
	printf("Enter salary : ");
	scanf("%f", &e1.salary);
	
	printf("Name	Age 	Salary\n");
	printf("%s %d %.2f", e1.name, e1.age, e1.salary);
	
	return 0;
}

