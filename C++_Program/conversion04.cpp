// Class type to Primitive type
#include <iostream>
#include <string>
using namespace std;

template <class N> void print(N);
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
		
		template <class X> operator X(){
			return(a);
		}	
};

int main(void){
	int x=0;
	Complex c1(7,3);
	c1.showData();
	
	x=c1;
	cout<<x<<endl;
	
	float y;
	y=c1;
	print(y);
	
	print("Hello");
	char s[] = "Arjun";
	print(s);
	
	return 0;
}

template <class N> void print(N a){
	cout<<a<<endl;
}

