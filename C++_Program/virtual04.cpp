//virtual function
#include <iostream>
using namespace std;

class A{
	// *vptr;
	public:
		void f1(){
			cout<<"Class A, Function f1."<<endl;
		}
		virtual void f2(){
			cout<<"Class A, Virtual Function f2."<<endl;
		}															//vtable
		virtual void f3(){
			cout<<"Class A, Virtual Function f3."<<endl;
		}
		virtual void f4(){
			cout<<"Class A, Virtual Function f4."<<endl;
		}
};
class B : public A{
	// *vptr;
	public:
		void f1(){ // method hiding
			cout<<"Class B, Function f1."<<endl;
		}
		void f2(){
			cout<<"Class B, Virtual Function f2."<<endl;			//vtable
		}
		void f4(int x){
			cout<<"Class B, Function f4."<<endl;
		}
};

int main(void){
	A *p;
	B obj;
	p = &obj;
	p->f1(); // A
	p->f2(); // B
	p->f3(); // A
	p->f4(); // A
	
	B obj2;
	obj2.f4(3);
	// obj2.f4();
	obj2.f3();
	
	return 0;
}

