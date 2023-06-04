#include <iostream>
using namespace std;
class Sample{
    private :
        int data1;
        float data2;
    public :
        Sample();
        void showData();
        void setData();
};
Sample::Sample(){
    data1 = 10;
    data2 = 20;
}
void Sample::showData(){
    cout<<data1<<", "<<data2<<endl;
}
void Sample::setData(){
    cout<<"Enter int and float value : ";
    cin>>data1>>data2;
}

int main(void){
    system("cls");
    Sample s, t;
    s.showData();
    t.setData();
    t.showData();
    
    return 0;
}
