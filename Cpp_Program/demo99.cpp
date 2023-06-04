#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	ifstream infile("demo.txt");
	int pos = infile.tellg();
	cout<<pos<<endl;
	char ch;
	int i=0;
	while(infile){
	    infile.get(ch);
	    cout<<ch;
	    if(i++ == 50){
	        pos = infile.tellg();
	        cout<<endl<<pos<<endl;
	        i=0;
	    }
	}
	pos = infile.tellg();
	cout<<pos<<endl;
	infile.close();
	return 0;
}