#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Student{
	private:
		unsigned int rollno;
		char name[50];
		char fname[50];
		
		class Address{
			private:
				int house_no;
				char street[100];
				char dist[100];
				char pin[7];
				char state[50];
				char country[50];
			public:
				void setAdd(int hn, char *s, char *d, char *p, char *st, char *c){
					house_no = hn;
					strcpy(street, s);
					strcpy(dist, d);
					strcpy(pin, p);
					strcpy(state, st);
					strcpy(country, c);
				}
				void showAdd(){
					cout<<"Address : ";
					cout<<house_no<<", "<<street<<","<<endl;
					cout<<dist<<", "<<pin<<","<<endl;
					cout<<state<<", "<<country<<endl;
				}
		};
		Address add;
	
	public:
		void setData(unsigned int rn, char *n, char *fn){
			rollno = rn;
			strcpy(name, n);
			strcpy(fname, fn);
		}
		void setAddress(int hn, char *s, char *d, char *p, char *st, char *c){
			add.setAdd(hn, s, d, p, st, c);
		}
		void showData(){
			cout<<"Roll No. : "<<rollno<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Father Name : "<<fname<<endl;
			add.showAdd();
		}
};

int main(void){
	int rn;
	char name[50], fname[50];
	cout<<"Enter Roll No. : ";
	cin>>rn;
	fflush(stdin);
	cout<<"Enter Name : ";
	gets(name);
	fflush(stdin);
	cout<<"Enter Father Name : ";
	gets(fname);
	Student s1;
	s1.setData(rn, name, fname);
	
	int hn;
	char street[100], dist[100], pin[7], state[50], country[50];
	fflush(stdin);
	cout<<"Enter Houser No. : ";
	cin>>hn;
	fflush(stdin);
	cout<<"Enter Street : ";
	gets(street);
	fflush(stdin);
	cout<<"Enter District : ";
	gets(dist);
	fflush(stdin);
	cout<<"Enter Pin Code : ";
	gets(pin);
	fflush(stdin);
	cout<<"Enter State : ";
	gets(state);
	fflush(stdin);
	cout<<"Enter Country Name : ";
	gets(country);
	s1.setAddress(hn, street, dist, pin, state, country);
	
	cout<<endl;
	s1.showData();
	
	return 0;
}
