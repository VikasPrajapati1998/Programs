#include <iostream>

using namespace std;

class Complex{
	private:
		int real, img; // by default the all member of class are private
	public:
		void set_data(int, int);
		
		void show_data(){
			cout<<real<<" "<<img<<"\n";
		}
		
		Complex add(Complex);
};

int main(void){
	Complex c1;
	c1.set_data(3,4);
	c1.show_data();
	
	Complex c2;
	c2.set_data(5,6);
	c2.show_data();
	
	cout<<"\n";
	Complex c3;
	c3 = c1.add(c2);
	c3.show_data();
	return 0;
}

void Complex:: set_data(int x, int y){
	real = x;
	img = y;
}

Complex Complex:: add(Complex c){
	Complex temp;
	temp.real = real + c.real;
	temp.img = img + c.img;
	return temp;
}
