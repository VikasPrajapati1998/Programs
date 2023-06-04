#include <iostream>
using namespace std;

// types of function calls

// prototype declarations
void swapv(int, int);
void swapr(int &, int &);
void swapa(int *, int *);
int main() {
    int a=10, b=20;
    cout<<"Real Value of a and b : "<<a<<" "<<b<<endl;
    cout<<"----------------------------------------------------------------------------------"<<endl;

    cout<<"Call By Value : ";
    swapv(a, b); // call by value
    cout<<endl<<a<<"\t"<<b<<endl;
    cout<<"----------------------------------------------------------------------------------"<<endl;

    cout<<"Call By Address : ";
    swapa(&a, &b); // call by address
    cout<<endl<<a<<"\t"<<b<<endl;
    cout<<"----------------------------------------------------------------------------------"<<endl;

    cout<<"Call By Reference : ";
    swapr(a, b); // call by reference
    cout<<endl<<a<<"\t"<<b<<endl;
    cout<<"----------------------------------------------------------------------------------"<<endl;

    return 0;
}

void swapv(int i, int j) {
    int t;
    t=i;
    i=j;
    j=t;
    cout<<endl<<i<<"\t"<<j<<endl;
}

void swapa(int *i, int *j) {
    int t;
    t = *i;
    *i = *j;
    *j = t;
}

void swapr(int &i, int &j) {
    int t;
    t=i;
    i=j;
    j=t;
    cout<<endl<<i<<"\t"<<j<<endl;
}
