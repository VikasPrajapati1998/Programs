#include <iostream>
using namespace std;

int main(void){
    system("cls");
    int n; cout<<"Enter the size of array : "; cin>>n;
    // dynamic array initialization
    int *p = new int[n];
    int num=0; cout<<"Enter a number : "; cin>>num;
    for(int i=0; i<n; i++){
        *(p+i) = (i+1)*num;
    }
    for(int i=0; i<n; i++){
        if(i%10==0)
            cout<<endl;
        cout<<*(p+i)<<"\t";
    }

    return 0;
}