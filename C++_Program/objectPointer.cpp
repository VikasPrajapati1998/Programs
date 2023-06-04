//Object pointer

#include <iostream>
using namespace std;

class Box;

class Box{
	private:
		int l, b, h;
	public:
		void setDim(int x, int y, int z){
			l=x; b=y; h=z;
		}
		void showDim(){
			cout<<"length = "<<l<<endl<<"breadth = "<<b<<endl<<"height = "<<h<<endl;
		}
};

int main(void){
	Box b1;
	Box *p;
	p = &b1;
	
	p->setDim(12, 19, 21);
	p->showDim();
	cout<<"---------------------\n";
	(*p).setDim(2,5,8);
	(*p).showDim();
	
	return 0;
}

