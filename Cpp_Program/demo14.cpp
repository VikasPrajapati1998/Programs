#include <iostream>

using namespace std;

int abso(int);
long abso(long);
double abso(double);

int main(void){
    system("cls");
    int i = -25, j;
    long l = -100000L, m;
    double d = -12.34, e;
    j = abso(i);
    m = abso(l);
    e = abso(d);
    cout<<j<<endl<<m<<endl<<e<<endl;
    char ch = abso('A');
    float f = abso(3.14f);
    cout<<ch<<endl<<f<<endl;

    return 0;
}

int abso(int i){
    cout<<"INT"<<endl;
    return(i>0 ? i : i* -1);
}

long abso(long l){
    cout<<"LONG"<<endl;
    return(l>0 ? l : l* -1);
}

double abso(double d){
    cout<<"DOUBLE"<<endl;
    return(d>0 ? d : d* -1);
}
