#include <iostream>
#include <fstream>

using namespace std;

int main(void){
	ifstream fin;
	fin.open("data/file05.txt", ios::in);
	cout<<fin.tellg()<<endl;
	
	fin.seekg(-2, ios_base::end);
	cout<<fin.tellg();
	cout<<(char)fin.get()<<endl;
	
	cout<<fin.tellg()<<endl;
	
	fin.seekg(8, ios_base::beg);
	cout<<fin.tellg();
	cout<<(char)fin.get()<<endl;
	
	cout<<fin.tellg()<<endl;
	
	return 0;
}
