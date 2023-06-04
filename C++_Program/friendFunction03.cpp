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
		
		friend Complex operator-(Complex x);
};

Complex operator-(Complex x){
	Complex temp;
	temp.real = -x.real;
	temp.img = -x.img;
	return temp;
}

int main(void){
	Complex c1, c2;
	c1.setData(4,5);
	c1.showData();
	
	c2 = -c1;
	c2.showData();
	
	return 0;
}
