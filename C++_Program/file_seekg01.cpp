#include <iostream>
#include <fstream>

using namespace std;

int main(void){
	ifstream fin;
	fin.open("data/file05.txt", ios::in);
	cout<<fin.tellg()<<endl;
	
	cout<<(char)fin.get();
	cout<<fin.tellg()<<endl;
	
	fin.seekg(6);
	cout<<fin.tellg();
	cout<<(char)fin.get()<<endl;
	
	fin.seekg(0);
	cout<<fin.tellg();
	cout<<(char)fin.get()<<endl;
	
	fin.seekg(6);
	cout<<fin.tellg();
	cout<<(char)fin.get()<<endl;
	
	fin.seekg(4, ios_base::cur);
	cout<<fin.tellg();
	cout<<(char)fin.get()<<endl;
	
	cout<<fin.tellg()<<endl;
	
	return 0;
}
