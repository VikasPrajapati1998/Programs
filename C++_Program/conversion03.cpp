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
		
		operator int(){
			return(a);
		}
		
		operator float(){
			float c;
			c = (float)a/b;
			return c;
		}
		
};

int main(void){
	int x=0;
	Complex c1(7,3);
	c1.showData();
	
	x=c1;
	cout<<x<<endl;
	
	float y;
	y = c1;
	cout<<y<<endl;
	
	return 0;
}
