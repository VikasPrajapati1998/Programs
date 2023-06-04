#include <iostream>
using namespace std;
class Date;
class Date{
    private:
        int day, mon, year;
    public:
        Date(int d=0, int m=0, int y=0){
            day=d;
            mon=m;
            year=y;
        }
        friend ostream& operator<<(ostream &o, Date &dt);
};

ostream& operator<<(ostream &o, Date &dt){
    o<<dt.day<<"/"<<dt.mon<<"/"<<dt.year;
    return o;
}

template<class T>
void mySwap(T &a, T &b){
    T c;
    c = a;
    a = b;
    b = c;
}

int main(int argc, char *argv[]){
	int i=10, j=20;
	mySwap(i, j);
	cout<<i<<'\t'<<j<<endl;
	return 0;	
}