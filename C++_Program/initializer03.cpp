#include <iostream>

using namespace std;

class Dummy;

class Dummy{
	private:
		const int c;
	public:
		Dummy(int x):c(x){ }
		
		void showData(){
			cout<<c<<endl;
		}
};

int main(void){
	int p = 7;
	Dummy d1(p);
	d1.showData();
}
