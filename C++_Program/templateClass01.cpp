#include <iostream>

using namespace std;

template <class X> class AddNumber;

template <class X> class AddNumber{
	private:
		X a;
	public:
		setData(X p){
			a = p;
		}
		showData(){
			cout<<a<<endl;
		}
	
};

int main(void){
	
	AddNumber <int>a1;
	a1.setData(4);
	a1.showData();
	
	AddNumber <float>a2;
	a2.setData(7.34);
	a2.showData();
	
	return 0;
}
