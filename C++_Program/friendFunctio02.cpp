#include <iostream>

using namespace std;

class Complex;

class Complex{
	private:
		int real, img;
	public:
		void setData(int x, int y){
			real = x; img = y;
		}
		void showData(){
			cout<<real<<" "<<img<<"\n";
		}
		
		friend Complex operator+(Complex x, Complex y);
};

Complex operator+(Complex x, Complex y){
	Complex temp;
	temp.real = x.real + y.real;
	temp.img = x.img + y.img;
	return temp;
}

int main(void){
	Complex c1, c2, c3;
	c1.setData(4,5);
	c1.showData();
	
	c2.setData(6,7);
	c2.showData();
	
	c3 = c1+c2;
	c3.showData();
	return 0;
}
