#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Employees{
	char name[50];
	int age;
	float salary;
};
typedef struct Employees emp;

int main(void){
	emp e[5];
	int i;
	for(i=0; i<5; i++){
		printf("Enter name : ");
		gets(e[i].name);
		printf("Enter age and salary : ");
		scanf("%d %f", &e[i].age, &e[i].salary);
		printf("\n");
		fflush(stdin);
	}
	
	printf("Employees Details :- \n");
	for(i=0; i<5; i++){
		printf("%s, %d, %.2f\n", e[i].name, e[i].age, e[i].salary);	
	}
	return 0;
}

