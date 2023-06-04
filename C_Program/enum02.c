#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void){
	enum emp_dept{
		assembly=3, manufacturing, accounts, stores // assembly=0 : default value assigned by compiler
	};
	
	typedef struct employee{
		char name[30];
		int age;
		float bs;
		enum emp_dept department;
	} emp;
	
	emp e;
	strcpy(e.name, "Vikas Prajapati");
	e.age = 24;
	e.bs = 60000;
	e.department = accounts;
	
	printf("Name = %s\n", e.name);
	printf("Age = %d\n", e.age);
	printf("Basic Salary = %.2f\n", e.bs);
	printf("Dept = %d\n", e.department);
	
	return 0;
}
