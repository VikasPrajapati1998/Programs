#include <iostream>

using namespace std;

class Complex;

class Complex{
	private:
		int real, img;
		
	public:
		void setData(int x, int y){
			real = x;
			img = y;
		}
		void showData(){
			cout<<real<<" "<<img<<"\n";
		}
		
		Complex(){
			cout<<"This is constructor.\n";
		}
		Complex(int a, int=0){
			real = a;
			img = 0;
		}
		~Complex(){
			cout<<"This is destructor.\n";
		}
};

int main(void){
	cout<<"c1 : ---------------------------------\n";
	Complex c1;
	c1.setData(4, 5);
	c1.showData();
	cout<<"c2 : ---------------------------------\n";
	Complex c2(2);
	c2.showData();
	
	cout<<"\nThis is the end of objects.\n";
}


