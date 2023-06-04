#include <iostream>
using namespace std;
class Date{
    private:
        int day, mon, year;
    public:
        Date(int d=0, int m=0, int y=0){
            day = d;
            mon = m;
            year = y;
        }
        bool operator<(Date dt){
            if(year<dt.year)
                return 1;
            if(year==dt.year && mon<dt.mon)
                return 1;
            if(year==dt.year && mon==dt.mon && day<dt.day)
                return 1;
            return 0;
        }
        friend ostream& operator<<(ostream &o, Date &dt);
};
ostream& operator<<(ostream &o, Date &dt){
    o<<dt.day<<"/"<<dt.mon<<"/"<<dt.year;
    return o;
}
template<class T>
T myMin(T a, T b){ return (a<b) ? a : b; }

int main(void){
    int i=10, j=20;
    cout<<myMin(i, j)<<endl;
    Date dt1(17, 11, 1962), dt2(23, 12, 1965);
    cout<<dt1<<'\t'<<dt2<<endl;
    Date t=myMin(dt1, dt2);
    cout<<t<<endl;
    //cout<<myMin(dt1, dt2)<<endl;
    return 0;
}