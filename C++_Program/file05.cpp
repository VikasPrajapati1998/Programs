#include <iostream>
#include <fstream>

using namespace std;

int main(void){
	ifstream fin;
	fin.open("data/file03.txt", ios::in);
	char ch;
	ch = fin.get();
	while(!fin.eof()){
		cout<<ch;
		ch = fin.get();
	}
	fin.close();
	cout<<"Done..!";
	return 0;
}

