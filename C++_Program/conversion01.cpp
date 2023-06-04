// Primitive type to Class type
#include <iostream>

using namespace std;

class Complex;

class Complex{
	private:
		int a, b;
	public:
		Complex(){ }
		Complex(int k){
			a=k; b=0;
		}
		void setData(int x, int y){
			a=x; b=y;
		}
		void showData(){
			cout<<a<<" "<<b<<endl;
		}
};

int main(void){
	Complex c1;
	int x=5;
	c1.setData(3, 7);
	c1.showData();
	c1 = x; //c1.Complex(x);
	c1.showData();
	
	return 0;
}

