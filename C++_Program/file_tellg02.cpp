#include <iostream>
#include <fstream>

using namespace std;

int main(void){
	ifstream fin;
	char ch;
	fin.open("data/file04.txt", ios::in);
	
	while(!fin.eof()){
		cout<<fin.tellg();
		ch = fin.get();
		cout<<ch<<endl;
	}
	
	fin.close();
	return 0;
}
