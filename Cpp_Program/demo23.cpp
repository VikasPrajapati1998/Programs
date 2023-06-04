#include <iostream>
using namespace std;
int main(void){
    // Check a number is prime or not.
    int n=0;
    cout<<"Enter a number : ";
    cin>>n;
    int i=0;
    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<"Number is not prime."<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Number is prime."<<endl;
    }
    return 0;
}