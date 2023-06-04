// Abstract class
#include <iostream>
using namespace std;

class A;
class B;

class A{
	public:
		virtual void fun()=0; //pure virtual function
		
		void f1(){
			cout<<"Class A, function f1."<<endl;
		}
		
		void f2(){
			cout<<"Class A, function f2."<<endl;
		}
};

class B : public A{
	public:
		void fun(){
			cout<<"Class B, function fun."<<endl;
		}
		void f2(){
			cout<<"Class B, function f2."<<endl;
		}
};

int main(void){
	B b1;
	b1.f1();
	b1.fun();
	b1.f2();
	
	A *p;
	B b2;
	p = &b2;
	p->f2();
	
	return 0;
}
