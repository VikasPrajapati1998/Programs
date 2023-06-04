#include <iostream>
using namespace std;
int main(void){
    system("cls");
    //Print all prime number between a and b.
    int a=0, b=0;
    cout<<"Enter the starting point of check : ";
    cin>>a;
    cout<<"Enter the ending point of check : ";
    cin>>b;
    int i=0;
    while(a<b){
        i=0;
        for(i=2; i<a; i++){
            if(a%i==0)
                break;
        }
        if(i==a)
            cout<<a<<endl;
        a++;
    }
    return 0;
}