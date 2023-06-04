#include <iostream>
using namespace std;

class Sample{
    private:
        int i; float a;
    public:
        Sample(){
            i=10; a=3.14f;
        }
        void getData(int x, float y){
            i=x; a=y;
        }
        void showData(){
            cout<<i<<endl<<a<<endl;
        }
        ~Sample(){
            cout<<"Reached Destructor"<<endl;
        }
};

int main(void){
    system("cls");
    Sample *ptr, *ptr1;
    ptr = new Sample();
    ptr1 = new Sample();
    
    ptr->showData();
    cout<<endl;

    ptr1->getData(5, 48.57);
    ptr1->showData();
    cout<<endl;

    delete ptr;
    delete ptr1;

    return 0;
}