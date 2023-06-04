#include <iostream>
#include <typeinfo>
#include <string>
#include <string.h>
#include <cstdlib>

using namespace std;

// This is the conversion of a string number to a integer.

int Str2Int(char*);
int Str2Int(char* s){
    int l=strlen(s)-1, num=0, k=1;
    while(l>=0){
        num = num + (s[l]-48)*k;
        l--; k *= 10;
    }
    return num;
}

int main(void){
    system("cls");
    char str[10];
    cout<<"Enter a string number : "; cin>>str;
    cout<<typeid(str).name()<<endl;
    int num = Str2Int(str);
    cout<<num<<endl;
    cout<<typeid(num).name()<<endl;
    return 0;
}
// To see the conversion of a int variable to string variable go to demo52.cpp