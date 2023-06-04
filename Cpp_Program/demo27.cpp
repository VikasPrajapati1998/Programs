#include <iostream>
#include <typeinfo>
using namespace std;

class Sample{
    private:
        int i;
        float f;
    public:
        Sample(){ }
        void setData(int x, float y){
            i=x;
            f=y;
        }
        void displayData(){
            cout<<"Current address in this = "<<this<<endl;
            cout<<i<<", "<<f<<endl;
        }
};

int main(void){
    system("cls");
    Sample s1, s2;
    s1.setData(10, 3.14f);
    s1.displayData();
    cout<<&s1<<endl;
    return 0;
}