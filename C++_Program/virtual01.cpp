/*The compiler will consider the type of pointer as base.*/
#include <iostream>
using namespace std;

class A{
	public:
		void fun1(){
			cout<<"Class A, Function fun1."<<endl;
		}
};
class B: public A{
	public:
		void fun1(){ // method hiding
			cout<<"Class B, Function fun1."<<endl;
		}
		void fun2(){
			cout<<"Class B, Function fun2."<<endl;
		}
};

int main(void){
	A *p;
	B o2;
	p = &o2;
	p->fun1(); // A
	
	return 0;
}

