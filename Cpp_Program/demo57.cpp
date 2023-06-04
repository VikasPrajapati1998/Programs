#include <iostream>
#include <pthread.h>

using namespace std;

class base;
class derived;

class base{
    private :
        int i;
    public :
        base(int i){
            this->i = i;
        }
        void setData(){
            cout<<"Enter i = "; cin>>i;
        }
        virtual void showData(){
            cout<<"i = "<<i<<endl;
        }
};

class derived : public base{
    private :
        int j;
    public :
        derived(int i, int j) : base(i){
            this->j = j;
        }
        void setData(){
            cout<<"Enter j = "; cin>>j;
        }
        void showData(){
            base::showData();
            cout<<"j = "<<j<<endl;
        }
};

int main(void){
    base b(10);
    derived d(15, 20);

    // binding using pointer
    cout<<"Pointer Binding : -"<<endl;
    base *ptr1 = &b;
    ptr1->showData(); //EB

    base *ptr2 = &d;
    ptr2->showData(); //EB
    
    // binding using reference
    cout<<"Reference Binding : -"<<endl;
    base &ref1 = b;
    ref1.showData(); //EB

    base &ref2 = d;
    ref2.showData(); //EB

    // object slicing
    cout<<"Object Slicing : -"<<endl;
    b = d;
    b.showData();

    return 0;
}