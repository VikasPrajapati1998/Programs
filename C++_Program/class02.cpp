#include <conio.h>
#include <iostream>

using namespace std;

class Complex{
	int real, img;
		
	public:
		void input(int, int); //function declearation
		
		void display(){
			cout<<real<<" "<<img;
		}
};

int main(void){
	Complex c1; // c1 is, object of Complex class.
	c1.input(3, 4);
	c1.display();
	return 0;
}

//function definition
void Complex:: input(int x, int y){ // Complex::  is membership label
	real = x;
	img = y;
}
