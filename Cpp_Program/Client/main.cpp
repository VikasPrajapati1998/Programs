#include <iostream>
#include "Employee.cpp"
using namespace std;

int main(void){
    system("cls");
    cout<<"Hello Programmer"<<endl;
    Employee e1;
    e1.getData();
    e1.showData();
    Employee e2("Sanjay", 28);
    e2.showData();

   
    return 0;
}