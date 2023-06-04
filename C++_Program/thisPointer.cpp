//this pointer

#include <iostream>
using namespace std;

class Box;

class Box{
	private:
		int l, b, h;
	public:
		void setDim(int l, int b, int h){
			this->l = l;
			this->b = b;
			this->h = h;
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
	cout<<"---------------------\n";
	
	Box b2;
	b2.setDim(45, 65, 34);
	b2.showDim();
	
	return 0;
}

