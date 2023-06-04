//Writing in file
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(void){
	ofstream fout;
	fout.open("data/file03.txt", ios::app);
	char message[100], another='y';
	while(another=='y'){
		cout<<"Message : ";
		fflush(stdin);
		gets(message);
		fout<<message<<"\n";
		cout<<"\n";
		cout<<"Do you want add more message y/n : ";
		fflush(stdin);
		another = fgetchar();
		cout<<"\n";
	}
	fout.close();
	cout<<"Done..!";
	
	return 0;
}
