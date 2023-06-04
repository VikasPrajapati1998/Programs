#include <iostream>

using namespace std;

class Dummy;

class Dummy{
	private:
		int a, b;
		int *p;
	public:
		Dummy(){
			p = new int;
		}
		void setData(int x, int y, int z){
			a=x; b=y; *p=z;
		}
		void showData(){
			cout<<a<<" "<<b<<" "<<*p<<endl;
		}
		Dummy(Dummy &d){
			a = d.a;
			b = d.b;
			p = new int;
			*p = *(d.p);
		}
};

int main(void){
	Dummy d1;
	d1.setData(4,5,7);
	d1.showData();
	
	Dummy d2=d1;
	d2.showData();
	d2.setData(1,2,3);
	d2.showData();
	
	
	return 0;
}
