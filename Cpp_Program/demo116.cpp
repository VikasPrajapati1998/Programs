// Typecasting in c++
// dynamic_cast
#include <iostream>
#include <string>
using namespace std;
class Base{
    private:
        string name;
    public:
        Base(string n){name = n;}
        virtual void showData(){cout<<"Name : "<<name<<endl; }
};
class Derived : public Base{
    private:
        double commision;
    public:
        Derived(string n, double comm) : Base(n){commision = comm;}
        virtual void showData(){cout<<"Commision : "<<commision<<endl; }
};
int main(){
	bool condition;
	Base b1("Dinesh");
	Derived d1("Suresh", 3000.0);
	
	Base *bptr1, *bptr2;
	Derived *dptr;
	
	bptr1= &b1; // Base ptr = Base object
	bptr2 = &d1; // Base ptr = Derived object
	
	//------------------------------------------------------------------------------------------------------------------------
	cout<<"====================================="<<endl;
	cout<<"bptr1 = &b1"<<endl<<"dptr = bptr1"<<endl<<endl; 
	dptr = dynamic_cast<Derived*>(bptr1); // bptr1 is not pointing a Derived object so dptr=null
	cout<<"dptr = "<<dptr<<endl;
	condition = dptr; cout<<condition<<endl;
	if(dptr)
	    dptr->showData();
	else
	    cout<<"dptr contains null on downcasting."<<endl;
	
	//------------------------------------------------------------------------------------------------------------------------
	cout<<"====================================="<<endl;
	cout<<"bptr2 = &d1"<<endl<<"dptr = bptr"<<endl<<endl;
	dptr = dynamic_cast<Derived*>(bptr2); // bptr2 is pointing to the Derived object, So dptr=true
	cout<<"dptr = "<<dptr<<endl;
	condition = dptr; cout<<condition<<endl;
		if(dptr)
	    dptr->showData();
	else
	    cout<<"dptr contains null on downcasting."<<endl;
	
	return 0;
}