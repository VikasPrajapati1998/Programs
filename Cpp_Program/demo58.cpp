#include <iostream>
using namespace std;
class Student;
class Date;
class Date{
    private:
        int d;
        int m;
        int y;
    public:
        Date(){
            d=0; m=0; y=0;
        }
        Date(int p, int q, int r){
            d=p; m=q; y=r;
        }
        void setData(int dd, int mm, int yy){
            d=dd; m=mm; y=yy;
        }
};
class Student{
    private:
        long int roll_no;
        string name;
        string fname;
        string mname;
        string address;
        string email;
        string mobile;
        Date dob;
        long int pin;
    public:
        Student(){
            roll_no=0;
            name="Name";
            fname="Father Name";
            mname="Mother Name";
            address="Address";
            email="abcd@gmail.com";
            mobile="1234567890";
            dob.setData(01, 01, 2001);
            pin=000000;
        }
        Student(long int rn, string n, string fn, string mn, string ad, string em, string mo, Date db, long int pi){
            roll_no=rn;
            name=n;
            fname=fn;
            mname=mn;
            address=ad;
            email=em;
            mobile=mo;
            dob=db;
        }

};

int main(void){
	cout<<"Program done."<<endl;
	return 0;
}