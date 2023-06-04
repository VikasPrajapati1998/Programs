#include<iostream>
using namespace std;

void fun(int = 10, int = 20, int = 30);
void fun(int, int);

int main(void){
    system("cls");
    //fun(1, 2); // function is confuse to call which fun both are satifing the call condition
    return 0;
}

// function ovreloading is correct but the default value make both function callable.
void fun(int x, int y, int z){
    cout<<"I'm three input type fun."<<endl;
    cout<<endl<<x<<endl<<y<<endl<<z<<endl;
}
void fun(int x, int y){
    cout<<"I'm two input type fun."<<endl;
    cout<<endl<<x<<endl<<y<<endl;
}