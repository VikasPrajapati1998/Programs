// reading from a file
#include <iostream>
#include <fstream>

using namespace std;

int main(void){
	ifstream fin;
	fin.open("data/file03.txt", ios::in);
	char ch;
	fin>>ch;
	while(!fin.eof()){
		cout<<ch;
		fin>>ch;
	}
	fin.close();
	cout<<"Done..!";
	return 0;
}
