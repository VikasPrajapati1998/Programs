#include <iostream>
#include <fstream>

using namespace std;

int main(void){
	ofstream fout;
	fout.open("data/file05.txt", ios::app);
	cout<<fout.tellp()<<endl;
	fout.seekp(0, ios_base::end);
	cout<<fout.tellp()<<endl;
	fout<<"Hello ";
	cout<<fout.tellp()<<endl;
	fout.close();
	return 0;
}
