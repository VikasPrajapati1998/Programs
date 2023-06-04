#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;

int main(int argc, char *argv[])
{
	char ch;
	ifstream infile("demo11.cpp");
	while(infile){
	    infile.get(ch);
	    cout<<ch;
	    //sleep(1);
	}
	infile.close();
}