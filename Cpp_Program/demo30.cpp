#include <iostream>
//#include <typeinfo>

using namespace std;

class Arjun{
    private:
        int a;
    private:
        Arjun(){ };
    public:
        Arjun(int i){
            a=i;
        }
        void Set_Data(){
            cout<<"Enter a number : ";
            cin>>a;
        }
        void Show_Data(){
            cout<<endl<<a<<endl;
        }
};

int main(void){
    system("cls");
    Arjun a(4);
    a.Show_Data();
    // Arjun b;     // A default constructure is private so you can not make a object of this class that use that constructore.

    cout<<"Program Done..."<<endl;
    return 0;
}