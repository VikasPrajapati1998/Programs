#include <iostream>
using namespace std;

struct Complex{
    // By default the members of structure are public and class are private
    double real, img;
};
Complex setComplex(double r, double i);
void printComplex(Complex c);
Complex operator + (Complex c1, Complex c2);
Complex operator - (Complex c1, Complex c2);
Complex operator * (Complex c1, Complex c2);
Complex operator / (Complex c1, Complex c2);
// Complex operator << (Complex c);     Error

int main(void){
    system("cls");
    // Operator overloading
    Complex a, b, c, d;
    a = setComplex(7.0, 5.0);
    b = setComplex(2.0, 9.0);
    cout<<"a = ";
    printComplex(a);
    cout<<"b = ";
    printComplex(b);
    c = a+b;
    cout<<"c = ";
    printComplex(c);
    d = a-b;
    cout<<"d = ";
    printComplex(d);
    Complex p, q;
    p = a*b;
    cout<<"p = ";
    printComplex(p);
    q = a/b;
    cout<<"q = ";
    printComplex(q);
    return 0;
}

Complex setComplex(double r, double i){
    Complex temp;
    temp.real = r;
    temp.img = i;
    return temp;
}

void printComplex(Complex c){
    cout<<"("<<c.real<<", "<<c.img<<")"<<endl;
}

Complex operator + (Complex c1, Complex c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

Complex operator - (Complex c1, Complex c2){
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.img = c1.img - c2.img;
    return temp;
}

Complex operator * (Complex c1, Complex c2){
    Complex temp;
    temp.real = c1.real * c2.real;
    temp.img = c1.img * c2.img;
    return temp;
}

Complex operator / (Complex c1, Complex c2){
    Complex temp;
    temp.real  = c1.real / c2.real;
    temp.img = c1.img / c2.img;
    return temp;
}