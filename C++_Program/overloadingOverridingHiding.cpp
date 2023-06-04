#include <iostream>
using namespace std;

class A{
	public:
		void f1(){
			cout<<"Class A, Function f1."<<endl;
		}
		
		void f2(){
			cout<<"Class A, Function f2."<<endl;
		}
		
		void f3(){
			cout<<"Class A, Function f3."<<endl;
		}
		void f3(int x){ // method overloading
			cout<<x<<" "<<"Class A, Function f3."<<endl;
		}
};

class B: public A{
	public:
		void f1(){ //method overriding
			cout<<"Class B, Function f1."<<endl;
		}
		
		void f2(int x){ //method hiding
			cout<<x<<" "<<"Class B, Function f2."<<endl;
		}
};

int main(void){
	B obj;
	obj.f1();
	obj.f2(5);
	obj.f3();
	obj.f3(7);
	
	return 0;
}
