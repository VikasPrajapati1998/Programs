#include <iostream>

using namespace std;

int SQR(int);
long int SQR(int, int);

int main(void){
    system("cls");
    int p = SQR(25);
    cout<<p<<endl;
    long int l = SQR(25, 1);
    cout<<l<<endl;

    return 0;
}

int SQR(int i){
    cout<<"INT"<<endl;
    return (i*i);
}

long int SQR(int a, int i){
    cout<<"LONG"<<endl;
    long l = a*a;
    return l;
}