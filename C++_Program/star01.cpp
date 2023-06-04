#include <iostream>
using namespace std;

int main(void){
	cout<<"Read this message before use this code."<<endl;
	cout<<"Enter 0 to exit the program."<<endl;
	cout<<"To see the result enter a odd number."<<endl;
	cout<<endl<<endl;
	//---------------------------------------------------------------------------------------------
	int n;
	cout<<"Enter a odd number : ";
	cin>>n;
	int m=n;
	if(n%2!=0){
		for(int i=1; i<=(n-1); i++){
			for(int j=m; j>=(i+1); j--){
				cout<<" ";
			}
			for(int k=1; k<=i; k++){
				cout<<"@";
			}
			for(int l=1; l<=(m+2); l++){
				cout<<" ";
			}
			for(int p=1; p<=m; p++){
				if(i==1)
					continue;
				cout<<"@";
			}
			cout<<endl;
		}	
		
		for(int i=1; i<=n; i++){
			cout<<"@";
		}
		for(int i=1; i<=(n+2); i++){
			cout<<"*";
		}
		for(int i=1; i<=n; i++){
			cout<<"@";
		}
		cout<<endl;
		
		for(int a=1; a<(m-1); a++){
			for(int b=1; b<=a; b++){
				cout<<" ";
			}
			for(int c=m; c>a; c--){
				cout<<"@";
			}
			for(int l=1; l<=(m+2); l++){
				cout<<" ";
			}
			for(int p=1; p<=m; p++){
				cout<<"@";
			}
			cout<<endl;
		}
		for(int a=1; a<=(m-1); a++){
			cout<<" ";
		}
		cout<<"@";
	}
	//-------------------------------------------------------------------------------------
	else if(n==0){
		exit(1);
	}
	else{
		cout<<"Sorry This is not odd number please try again."<<endl;
		main();
	}
	cout<<endl<<endl;
	//cout<<"Do You Want Run Again. (y/n)"<<endl;
	
	
	return 0;
}
