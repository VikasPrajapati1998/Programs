// Virtual Base Classes
#include <iostream>

using namespace std;

class Base{
    protected:
        int data;
    public:
        Base(){
            data = 500;
        }
        void fun(){
            cout<<"Fun function"<<endl;
        }
};
class Derived1 : virtual public Base{ };
class Derived2 : virtual public Base{ };
class Derived3 : public Derived1, public Derived2{
    public:
        int getData(){return data;}
};

int main(int argc, char *argv[])
{
    Derived3 d3;
    int a;
    a = d3.getData();
    cout<<a<<endl;
    d3.fun();            
    return 0;
}