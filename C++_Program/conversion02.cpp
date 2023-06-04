// Class type to Primitive type
#include <iostream>
using namespace std;

class Complex;
class Complex{
	private:
		int a, b;
	public:
		Complex(){ }
		Complex(int x){
			this->a = x;
			this->b = 0;
		}
		Complex(int a, int b){
			this->a = a;
			this->b = b;
		}
		void setData(int a, int b){
			this->a = a;
			this->b = b;
		}
		void showData(){
			cout<<a<<" "<<b<<endl;
		}
		
};

int main(void){
	int x;
	x = 7;
	Complex c1;
	c1=x;
	c1.showData();
	
	Complex c2=9;
	c2.showData();
	
	Complex c3(5,34);
	c3.showData();
	
	Complex c4;
	c4.setData(23,78);
	c4.showData();
	
	return 0;
}
