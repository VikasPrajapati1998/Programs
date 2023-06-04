#include <iostream>
using namespace std;
class Base;
class Derived;
class Base{
    private :
        int i;
     public :
         Base(){
             i = 10;
         }
         Base(int j){
             i = j;
         }
         void setData(int var){
             i = var;
         }
         void showData(){
             cout<<"i = "<<i<<endl;
         }
};
class Derived : public Base{
    private :
        int j;
     public :
         Derived() : Base(20){
             j = 20;
         }
         void setData(int var){
             j = var;
         }
         void showData(){
             //Base::showData();
             cout<<"j = "<<j<<endl;
         }
};
int main(int argc, char *argv[])
{
	Base b;
	Derived d;
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
	
	Base b1;
	Derived d1;
	b1.setData(3);
	d1.setData(8);
	b1.showData();
	d1.showData();
	b1 = d1;
	b1.showData();
	d1.showData();
	cout<<"----------------------"<<endl;
	
	return 0;
}