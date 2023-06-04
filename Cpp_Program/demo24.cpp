#include <iostream>
using namespace std;

int main(void){
    system("cls");
    int n=0;
    cout<<"Enter a number : ";
    cin>>n;
    int count=0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"Number is not Prime."<<endl;
            count++;
            break;
        }
    }
    if(count==0){
        cout<<"Number is Prime."<<endl;
    }
}