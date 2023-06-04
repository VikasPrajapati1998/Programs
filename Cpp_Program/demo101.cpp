#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string file_name;
    cout<<"Enter the file name : ";
    cin>>file_name;
    ifstream infile(file_name);
    cout<<endl;
    char ch;
    while(infile){
        infile.get(ch);
        cout<<ch;
    }
    cout<<endl;
    int  pos = infile.tellg();
    cout<<pos<<endl;
   
    return 0;	
}