#include <iostream>
#include <cstdlib>
#include <typeinfo>

using namespace std;

// This program convert int variable to string(array of char).
// basically stor a int variable value into the string.

int main(void){
    system("cls");
    int a=0;
    char num[10]="\0";
    cout<<"Enter a integer number : "; cin>>a;
    cout<<"Enter a string number : "; cin>>num;
    cout<<"a = "<<a<<", "<<"num = "<<num<<endl;
    cout<<"a = "<<typeid(a).name()<<", "<<"num = "<<typeid(num).name()<<endl;
    itoa(a, num, 10); // convert the int to string and assigns it to string using itoa() function.
    // a = int, num = char[], 10 = Decimal value store in int a;
    // itoa(a, num, 2); // binary number store in int a;
    cout<<"a = "<<a<<", "<<"num = "<<num<<endl;
    cout<<"a = "<<typeid(a).name()<<", "<<"num = "<<typeid(num).name()<<endl;

    return 0;
}
// To see the conversion of a string to a int in demo54.cpp.