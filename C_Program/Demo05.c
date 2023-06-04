#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct emp{
	char *name;
	int age;
	float salary;
};

int main(){
	struct emp e1;
	printf("Enter name : ");
	scanf("%[^\n]s", &e1.name);
	fflush(stdin);
	printf("Enter age : ");
	scanf("%d", &e1.age);
	fflush(stdin);
	printf("Enter salary : ");
	scanf("%f", &e1.salary);
	
	printf("Name : %s, Age : %d, Salary : %.2f", e1.name, e1.age, e1.salary);
	return 0;
}
