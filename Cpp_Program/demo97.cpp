// Writing on file.
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
int main(int argc, char *argv[])
{
	string target;
	char data[50];
	char ch='y';
	cout<<"Enter target file name : ";
	cin>>target;
	ofstream outfile(target);
	
	while(ch=='y' || ch=='Y'){
	    cout<<"Enter data : ";
	    fflush(stdin);
	    gets(data);
	    outfile<<data<<endl;
	    fflush(stdin);    
	    cout<<"Do you want run again y/n : ";
	    cin>>ch;
	}
	outfile.close();
	cout<<"Program End"<<endl;
	return 0;	
}