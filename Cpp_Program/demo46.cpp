#include <iostream>
using namespace std;

int main(void){
    system("cls");
    int n=0, t=0, sum=0, num=0;
    cout<<"Enter a number : ";
    cin>>n;
    t = n;
    int i=0;
    while(n){
        num = n%10;
        sum = sum + num;
        n = n/10;
    }
    t%sum==0 ? cout<<"It is a Harshad Number." : cout<<"It is not a Harshad Number.";
    return 0;
}
