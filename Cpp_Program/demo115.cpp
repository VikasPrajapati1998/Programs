// Typecasting in C++;
// static_cast
#include <iostream>
#include <string>
using namespace std;
class Base;
class Derived;
class Sample;

class Base{
    private:
        int b;
    public:
        Base(){ b = 0; }
        Base(int n){ b = n; }
        virtual void showData(){cout<<"b = "<<b<<endl;}
};

class Derived : public Base{
    private:
        int d;
    public:
        Derived(){ d = 0; }
        Derived(int n, int m) : Base(n){d = m; }
        virtual void showData(){cout<<"d = "<<d<<endl;}
};

class Sample{
            private:
                int s;
             public:
                 Sample(){ s = 0; }
                 Sample(int p){ s = p; }
                 virtual void showData(){cout<<"s = "<<s<<endl;}
};        
    
int main(void){
    int i = 10;
    long l = 100;
    float f = 1000.876f;
    char str[] = "Nagpur";
    char *s = "Ayodhya";
    cout<<"i = "<<i<<", "<<"l = "<<l<<", "<<"f = "<<f<<endl
            <<"str = "<<str<<", "<<"s = "<<s<<endl;
    
    // narrowing conversions
    i = static_cast<int>(l); cout<<"i = "<<i<<endl;
    i = static_cast<int>(f); cout<<"i = "<<i<<endl;
    
    // conversion to void pointer to print address
    void *vptr;
    vptr = static_cast<void*>(str); cout<<static_cast<char*>(vptr)<<endl;
    vptr = static_cast<void*>(s); cout<<static_cast<char*>(vptr)<<endl;
    
    // conversion of unrelated types
    Base *bptr, b1;
    Derived *dptr, d1;
    Sample *sptr, s1;
    bptr = &b1;
    sptr= (Sample*) bptr; // work
    //sptr = static_cast<Sample*>(bptr); // error, Because Sample and Base has no relation.
    dptr = static_cast<Derived*>(bptr); // work , Because Derived and Base is related
    return 0;
}