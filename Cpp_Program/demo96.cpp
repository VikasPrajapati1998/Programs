// Reading from file
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
int main(int argc, char *argv[])
{
    string source, target;
    char ch[50];
    cout<<"Enter source file name : ";
    cin>>source;
    ifstream infile(source);
    while(infile){
        infile.getline(ch, 49, '\n');
        cout<<ch;
        fflush(stdout);
    }
    return 0;
}