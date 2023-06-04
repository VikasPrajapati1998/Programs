#include <iostream>
using namespace std;

int CallByValue(int i);
int* CallByAddress(int *i);
int& CallByReference(int &i);

int main(void){
    system("cls");
    int a=0;
    cout<<"Enter a number : ";
    cin>>a;
    int &r=a;
    cout<<"In main() : "<<endl;
    cout<<"a="<<a<<" "<<"r="<<r<<endl;

    // Call By Value
    cout<<"----------------------------------------------------"<<endl;
    int i1 = CallByValue(a);
    cout<<"In main() : "<<endl;
    cout<<"a="<<a<<" "<<"r="<<r<<" "<<"i="<<i1<<endl;

    // Call By Reference
    cout<<"----------------------------------------------------"<<endl;
    int *i2 = CallByAddress(&a);
    cout<<"In main() : "<<endl;
    cout<<"a="<<a<<" "<<"r="<<r<<" "<<"i="<<*i2<<endl;

    // Call By Reference
    cout<<"----------------------------------------------------"<<endl;
    int &i3 = CallByReference(a);
    cout<<"In main() : "<<endl;
    cout<<"a="<<a<<" "<<"r="<<r<<" "<<"i="<<i3<<endl;

    return 0;
}

int CallByValue(int i){
    cout<<"Call By Value "<<endl;
    cout<<"i = "<<i<<endl;
    i=7;
    cout<<"i = "<<i<<endl;
    return i;
}

int* CallByAddress(int *i){
    cout<<"Call By Address "<<endl;
    cout<<"i = "<<*i<<endl;
    *i = 10;
    cout<<"i = "<<*i<<endl;
    return i;
}

int& CallByReference(int &i){
    cout<<"Call By Reference "<<endl;
    cout<<"i = "<<i<<endl;
    i = 20;
    cout<<"i = "<<i<<endl;
    return i;
}

