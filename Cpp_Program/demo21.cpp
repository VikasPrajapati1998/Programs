#include <iostream>
using namespace std;

int main(void){
    system("cls");
    void fun1(void);
    void fun2(void);
    fun1();
    fun2();
    cout<<endl<<"Program End"<<endl;
    return 0;
}

void fun1(void){
    // fun2()       -error, Because function declearation is local and call is not in that scope 
    cout<<endl<<"Hi...Hello";
}
void fun2(void){
    cout<<endl<<"to you";
}