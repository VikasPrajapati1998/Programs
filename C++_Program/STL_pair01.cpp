#include <iostream>

using namespace std;

class student;

class student{
	private:
		string name;
		int age;
	public:
		void setStudent(string s, int a){
			name=s; age=a;
		}
		void showStudent(){
			cout<<"Name : "<<name<<" "<<"Age : "<<age<<endl;
		}
};

int main(void){
	pair <string, int>p1;
	pair <string, string>p2;
	pair <string, float>p3;
	pair <int, student>p4;
	
	// putting values 
	p1 = make_pair("Rahul", 16);
	p2 = make_pair("India", "New Delhi");
	p3 = make_pair("Drilling", 254.45f);
	
	student s1;
	s1.setStudent("Aishwarya", 25);
	p4 = make_pair(18256, s1);
	
	//accesing the value
	cout<<"p1 = "<<p1.first<<", "<<p1.second<<endl;
	cout<<"p2 = "<<p2.first<<", "<<p2.second<<endl;
	cout<<"p3 = "<<p3.first<<", "<<p3.second<<endl;
	
	student s2;
	s2 = p4.second;
	cout<<"p4 = "<<p4.first<<", "; s2.showStudent();
		
	return 0;
}





