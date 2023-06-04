#include <iostream>
using namespace std;

class A{
	protected:
		int a;
	public:
		virtual void setData(int a, int b)=0;
		virtual void showData()=0;	
};

class B : public A{
	private:
		int b;
	public:
		void setData(int a, int b){
			this->a = a;
			this->b = b;
		}
		void showData(){
			cout<<a<<" "<<b<<endl;
		}
};

int main(void){
	B obj;
	obj.setData(4, 8);
	obj.showData();
	
}
