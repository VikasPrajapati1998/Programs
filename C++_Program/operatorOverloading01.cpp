#include <iostream>

using namespace std;

class Student;

void input(int& , int&, int&);
void roll(int&);

class Student{
	private:
		static int roll;
		int p, c, m;
		
	public:
		static setRoll(int r){
			roll = r;
		}
		void setData(int x, int y, int z){
			p = x; c = y; m = z;
		}
		void showData(){
			cout<<roll<<"\n";
			cout<<p<<" "<<c<<" "<<m<<"\n";
		}
		
		Student operator+(Student s){
			Student temp;
			temp.p = p+s.p;
			temp.c = c+s.c;
			temp.m = m+s.m;
			return temp;
		}
		
		check(){
			if(p>=145 && c>=145 && m>=145){
				cout<<"Eligible\n";
			}
			else{
				cout<<"Not Eligible\n";
			}
		}
};

int Student::roll=0;

void input(int &p, int &c, int &m){
	cout<<"Enter Marks of Physics Chemistry Mathematics : ";
	cin>>p>>c>>m;
}

void roll(int &r){
	cout<<"Enter Roll Number : ";
	cin>>r;
}

int main(void){
	int r;
	int p, c, m;
	
	Student s1, s2, s3;
	
	cout<<"\nEnter Data of Class 11th : \n";
	roll(r);
	Student::setRoll(r);
	input(p, c, m);
	s1.setData(p, c, m);
	s1.showData();
	
	cout<<"\nEnter Data of Class 12th : \n";
	roll(r);
	Student::setRoll(r);
	input(p, c, m);
	s2.setData(p, c, m);
	s2.showData();
	
	cout<<"\nEnter Data of JEE : \n";
	roll(r);
	Student::setRoll(r);
	s3 = s1+s2;
	s3.showData();
	
	s3.check();
	
	Student s4;
	s4 = s1.operator+(s2);
	s4.showData();
	
	return 0;
}
