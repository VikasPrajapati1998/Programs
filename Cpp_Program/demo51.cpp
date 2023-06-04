#include <iostream>
using namespace std;
class Control;
class Control{
    public :
        Control(){
            calculate();
            cout<<"Constructor"<<endl;
        }
        void calculate(){
            display();
            cout<<"Calculator"<<endl;
        }
        void display(){
            cout<<"Displayed"<<endl;
        }
};

int main(void){
    system("cls");
    Control c1;
    return 0;
}