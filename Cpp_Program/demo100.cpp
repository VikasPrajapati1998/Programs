#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    char ch;
    string source, target;
    cout<<"Enter source file name : ";
    cin>>source;
    cout<<"Enter target file name : ";
    cin>>target;
    
    ifstream infile(source);
    ofstream outfile(target);
    
    while(infile){
        infile.get(ch);
        outfile.put(ch);
     }
     
     infile.close();
     outfile.close();
     
     return 0;  	
}