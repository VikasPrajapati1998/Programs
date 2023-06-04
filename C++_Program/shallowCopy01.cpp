#include <iostream>

using namespace std;

class Complex;

class Complex{
	private:
		int a, b;
	public:
		void setData(int a, int b){
			this->a = a;
			this->b = b;
		}
		void showData(){
			cout<<"a="<<a<<" "<<"b="<<b<<endl;
		}
		
		Complex(){
		}
		Complex(Complex &d){
			a = d.a;
			b = d.b;
		}
};

int main(void){
	Complex c1;
	c1.setData(4, 7);
	
	Complex c2=c1; //copy constructor // c2.Complex(c1)
	c2.showData();
	
	Complex c3;
	c3=c1; // copy assignment operator
	c3.showData();
	
	c3.setData(9, 8);
	c3.showData();
	c1.showData();
	
	return 0;
}

