#include <iostream>
using namespace std;
class Base;
class Derived;
class Base{
    public:
        Base(){cout<<"Base Constructor."<<endl;}
        Base(&Base){cout<<"Base Copy Constructor."<<endl;}
        ~Base(){cout<<"Base Destructor."<<endl;}
};
class Derived : public Base{
    public:
        Derived(){cout<<"Derived Constructor."<<endl;}
        ~Derived(){cout<<"Derived Destructor."<<endl;}
};
int main(void){
    
    Base *b;
    /*No constructor and destructor call for creating pointer of any class.*/
    b = new Derived;
    delete b; // early binding of destructor.
    /*call destructor befor the end the scope of object.*/
    
    return 0;
}
