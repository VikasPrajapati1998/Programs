#include <iostream>
using namespace std;
class Base;
class Derived;
class Base{
    private :
        int i;
     public :
         Base(int i){
             this->i = i;
         }
         void showData(){
             cout<<"i = "<<i<<endl;
         }
};
class Derived : public Base{
    private :
        int j;
     public :
         Derived(int i, int j) : Base(i){
             this->j = j;
         }
         void showData(){
             Base::showData();
             cout<<"j = "<<j<<endl;
         }
};
int main(int argc, char *argv[])
{
	Base b(10);
	Derived d(15, 20);
	cout<<"----------------------"<<endl;
	b.showData();
	d.showData();
	cout<<"----------------------"<<endl;
	
	Base *ptr1 = &b;
	ptr1->showData();
	
	Base *ptr2 = &d;
	ptr2->showData();
	cout<<"----------------------"<<endl;
	
	Base &ref1 = b;
	ref1.showData();
	
	Base &ref2 = d;
	ref2.showData();
	cout<<"----------------------"<<endl;
	
	Base b1(5);
	Derived d1(25, 45);
	b1 = d1;
	b1.showData();
	d1.showData();
	cout<<"----------------------"<<endl;
	
	return 0;
}