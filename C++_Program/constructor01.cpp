/* Constructor */
#include <conio.h>
#include <iostream>

using namespace std;

class Complex{
	private:
		int real, img;
	public:
		Complex(int x, int y){ // Constructor
			real = x;
			img = y;
		}
		
		void display(){
			cout<<real<<" "<<img<<"\n";
		}
};

int main(void){
	Complex c1(3, 4);
	c1.Complex::display();
	
	Complex c2(7,4);
	c2.display();
	
	Complex c3 = Complex(6,7);
	c3.display();
	
	return 0;
}
