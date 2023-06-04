#include <iostream>
#include <fstream>

using namespace std;

int main(void){
	ofstream fout;
	fout.open("data/file05.txt", ios::out);
	cout<<fout.tellp()<<endl;
	fout.seekp(6);
	cout<<fout.tellp()<<endl;
	fout<<"Hello ";
	cout<<fout.tellp()<<endl;
	fout.close();
	return 0;
}
