#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    struct Employee{
        string name;
        int age;
        float basic, gross;
    };
    Employee e;
    char ch = 'Y';
    // create file for output
    ofstream outfile; // write on file
    outfile.open("Employee.pdf", ios::out | ios::binary);
    while(ch=='Y' || ch=='y'){
        cout<<endl<<"Enter Name, Age, Basic Sal, Gross Sal : "<<endl;
        cin>>e.name>>e.age>>e.basic>>e.gross;
        outfile.write(reinterpret_cast<const char*>(&e), sizeof(e));
        cout<<"Record Loaded."<<endl;
        cout<<"Add another record (y/n) : ";
        cin>>ch;
    }
    outfile.close();
    
    // open file for input
    ifstream infile;
    infile.open("Employee.pdf", ios::in | ios::binary);
    cout<<endl;
    int count = 0;
    while(infile.read(reinterpret_cast<char*>(&e), sizeof(e))){
        if(count == 0){
            cout<<"Name"<<'\t'<<"Age"<<'\t'<<"Basic"<<'\t'<<"Gross"<<endl;
            count=1;
        }
        cout<<e.name<<'\t'<<e.age<<'\t'<<e.basic<<'\t'<<e.gross<<endl;
    }
    infile.close();    
    return 0;
}