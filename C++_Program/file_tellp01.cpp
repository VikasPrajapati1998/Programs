#include <iostream>
#include <fstream>

using namespace std;

int main(void){
	ofstream fout;
	fout.open("data/demo.txt",ios::app);
	cout<<fout.tellp()<<endl;
	fout<<"Arjun ";
	cout<<fout.tellp()<<endl;
	
	fout.close();
	return 0;
}
