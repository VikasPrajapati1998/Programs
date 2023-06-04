#include <iostream>
using namespace std;
class Sample{
    private:
        int i; float a;
    public:
        Sample(){
            i=10; a=3.14f;
        }
        void showData(){
            cout<<i<<", "<<a<<endl;
        }
        void getData(){
            cout<<"Enter int i and float a : "; cin>>i>>a;
        }
        void getData(int x, float y){
            i=x; a=y;
        }
        ~Sample(){
            cout<<"Reached Destructor"<<endl;
        }
};
int main(void){
    system("cls");
    int i=7; float f=4.9234f;
    cout<<sizeof(Sample)<<endl;
    // static object
    Sample s1;
    cout<<"size of s1 : "<<sizeof(s1)<<endl;
    cout<<"s1 : "; s1.showData();
    s1.getData();
    cout<<"s1 : "; s1.showData();
    s1.getData(i, f);
    cout<<"s1 : "; s1.showData();

    // dynamic object
    Sample *ptr;
    ptr = new Sample();
    cout<<"size of ptr : "<<sizeof(ptr)<<endl;
    cout<<"ptr : "; ptr->showData();
    ptr->getData();
    cout<<"ptr : "; ptr->showData();
    ptr->getData(i, f);
    cout<<"ptr : "; ptr->showData();
    delete ptr;

    return 0;
}