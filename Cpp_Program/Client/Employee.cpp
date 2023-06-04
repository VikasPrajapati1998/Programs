// Employee.cpp - class implementation
// This file contains implementations of the member functions of Employee class
#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(){
    name = "";
    age = 0;
}
Employee::Employee(string n, int a){
    name = n;
    age = a;
}
void Employee::getData(){
    cout<<endl<<"Enter name and age : ";
    cin>>name>>age;
}
void Employee::showData(){
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
}
