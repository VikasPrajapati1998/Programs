#include <iostream>
#include <conio.h>

using namespace std;

class Complex{
	private:
		int real, img;
	public:
		Complex(int x, int y){
			real = x;
			img = y;
		}
		Complex(int k){
			real = k;
		}
		Complex(){}
		
		void display(){
			cout<<real<<" "<<img<<"\n";
		}
};

int main(void){
	Complex c1(4,5), c2(3), c3;
	c1.display();
	c2.Complex::display();
	c3.display();
	
	Complex c4, c5;
	c4.display();
	c5.Complex::display();
	
	return 0;
}

