#include <iostream>

using namespace std;

int main(void){
    system("cls");
    char button='\0';
    int n=0; cout<<"Enter number of movers : "; cin>>n;
    for(int i=0; i<=n; i++){
        cout<<"Enter a char : ";
        cin>>button;
        switch(button){
            case 'f': cout<<"Move forward"<<endl; break;
            case 'b': cout<<"Move backward"<<endl; break;
            case 'l': cout<<"Move left"<<endl; break;
            case 'r': cout<<"Move right"<<endl; break;
            case 's': cout<<"Stop"<<endl; break;
            case 't': cout<<"turn over"<<endl; break;
            default: cout<<"still at same position."<<endl; break;
        }
        button='\0';
    }
    //typeid(s).name();

    return 0;
}