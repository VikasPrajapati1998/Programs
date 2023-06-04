#include <iostream>
#include <fstream>

using namespace std;

int main(void){
	ifstream fin;
	char ch;
	fin.open("data/demo.txt", ios::in);
	
	while(!fin.eof()){
		cout<<fin.tellg();
		fin>>ch;
		cout<<ch<<endl;
	}
	
	fin.close();
	return 0;
}
