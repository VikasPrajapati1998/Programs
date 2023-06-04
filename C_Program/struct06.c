/* copy a stuct variable to a another struct variable. */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char name[50];
	int age;
	float salary;
} emp;

int main(){
	emp e1={"Sanjay", 34, 55000};
	emp e2, e3;
	/*Copy by element wise*/
	strcpy(e2.name, e1.name);
	e2.age = e1.age;
	e2.salary = e1.salary;
	
	/*Copy by direct struct element*/
	e3 = e1;
	
	printf("%s, %d, %.2f\n", e1.name, e1.age, e1.salary);
	printf("%s, %d, %.2f\n", e2.name, e2.age, e2.salary);
	printf("%s, %d, %.2f\n", e3.name, e3.age, e3.salary);
	
	return 0;
}
