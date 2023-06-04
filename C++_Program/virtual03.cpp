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
	void f1(){
		cout<<"Class B, Function f1."<<endl;
	}
	void f2(){
		cout<<"Class B, Virtual Function f2."<<endl;				//vtable
	}
	void f4(int x){
		cout<<"Class B, Virtual Function f4."<<endl;
	}
};

int main(void){
	A *p;
	A obj;
	p = &obj;
	p->f1(); // A
	p->f2(); // A
	p->f3(); // A
	p->f4(); // A
	// p->f4(5);
	
	return 0;
}
