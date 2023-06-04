#include <iostream>
using namespace std;

class User{
    private:
        int i;
        float f;
        char c;
    public:
        User(){
            i=7; f=3.14; c='a';
        }
        void displayData(){
            cout<<i<<'\n'<<f<<"\n"<<c<<endl;
        }
};

int main(void){
    system("cls");
    cout<<"Size of User class : "<<sizeof(User)<<endl;
    User u1;
    cout<<"Size of User object u1 : "<<sizeof(u1)<<endl;
    u1.displayData();
    User *ptr;
    cout<<"Size of User pointer ptr : "<<sizeof(ptr)<<endl;
    User *ptrUser = new User();
    cout<<"Size of User dynamic pointer : "<<sizeof(ptrUser)<<endl;

    return 0;
}