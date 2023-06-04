#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    union{
    int i;
    char ch[2];
};
    // Anonymous unions and enums
    i = 10;
    cout<<i<<endl;
    ch[0] = 'A';
    ch[1] = 'T';
    cout<<ch<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<i<<endl;
    cout<<ch<<endl;
    cout<<"==============================="<<endl;
    i = 47;
    cout<<i<<endl;
    cout<<ch<<endl;

    return 0;
}