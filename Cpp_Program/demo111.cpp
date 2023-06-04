#include <iostream>
#include <typeinfo>
using namespace std;
class Base{
    public:
        virtual void fun(){ };
};
class Derived1 : public Base{ };
class Derived2 : public Base{ };

int main(int argc, char *argv[])
{
    Base *b1, *b2;
    Derived1 d1;
    Derived2 d2;
    b1 = &d1;
    b2 = &d2;
    cout<<typeid(b1).name()<<endl;
    cout<<typeid(b2).name()<<endl;
    cout<<typeid(*b1).name()<<endl;
    cout<<typeid(*b2).name()<<endl;
    
    cout<<"----------------------------"<<endl;
    cout<<typeid(45).name()<<endl;
    cout<<typeid(45L).name()<<endl;
    cout<<typeid(45.57).name()<<endl;
    cout<<typeid(45.57f).name()<<endl;
    cout<<typeid('c').name()<<endl;
    cout<<typeid("array").name()<<endl;
    cout<<typeid(char[6]).name()<<endl;
    cout<<typeid(int [6]).name()<<endl;
    return 0;   	
}