#include <iostream>
using namespace std;

class Complex{
    private:
        float real, imag;
    public:
        // Constructor
        Complex(){ }
        Complex(float r, float i){
            real=r;
            imag=i;
        }

        void Display_Data(){
            cout<<"("<<real<<", "<<imag<<")"<<endl;
        }

        void Add_Complex(Complex x, Complex y){
            real = x.real + y.real;
            imag = x.imag + y.imag;
        }
        Complex Add_Complex(Complex y){
            Complex t;
            t.real = real + y.real;
            t.imag = imag + y.imag;
            return t;
        }
        Complex operator+(Complex y){
            Complex t;
            t.real = real + y.real;
            t.imag = imag + y.imag;
            return t;
        }

        void Multi_Complex(Complex x, Complex y){
            real = x.real * y.real;
            imag = x.imag * y.imag;
        }
        Complex Multi_Complex(Complex y){
            Complex t;
            t.real = real * y.real;
            t.imag = imag * y.imag;
            return t;
        }
        Complex operator*(Complex y){
            Complex t;
            t.real = real * y.real;
            t.imag = imag * y.imag;
            return t;
        }
};

int main(void){
    system("cls");
    cout<<"Actual Value of c1 & c2 : "<<endl;
    Complex c1(1.1f, 2.2f), c2(3.5f, 4.4f), c3, c4, c5;
    c1.Display_Data();
    c2.Display_Data();
    cout<<endl;

    cout<<"Addition : "<<endl;
    c3.Add_Complex(c1, c2);
    c3.Display_Data();

    c4 = c1.Add_Complex(c2);
    c4.Display_Data();

    c5 = c1 + c2;
    c4.Display_Data();
    cout<<endl;

    cout<<"Multiplication : "<<endl;
    Complex m1, m2, m3;
    m1.Multi_Complex(c1, c2);
    m1.Display_Data();
    
    m2 = c1.Multi_Complex(c2);
    m2.Display_Data();

    m3 = c1 * c2;
    m3.Display_Data();
    cout<<endl;
    
    Complex t1(1.2f, 2.6f), t2(4.3f, 9.3f), t3(5.8f, 7.3f), t4;
    cout<<"Actual Data : "<<endl;
    t1.Display_Data();
    t2.Display_Data();
    t3.Display_Data();
    cout<<endl;

    t4 = t1+t2*t3;
    cout<<"t1+t2*t3 = ";
    t4.Display_Data();
    cout<<endl;

    return 0;
}