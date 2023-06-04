#include <iostream>
using namespace std;
class Date;

class Date{
    private:
        int dd, mm, yy;
    public:
        Date(){
            cout<<"default ctor"<<endl;
            dd = 0; mm = 0; yy = 0;
        }
        Date(int dd, int mm, int yy){
            cout<<"arg ctor."<<endl;
            this->dd = dd;
            this->mm = mm;
            this->yy = yy;
        }

        Date(Date &d){
            cout<<"copy ctor."<<endl;
            dd = d.dd;
            mm = d.mm;
            yy = d.yy;
        }
        
        void setData(int dd, int mm, int yy){
            this->dd = dd;
            this->mm = mm;
            this->yy = yy;
        }
        void showData(){
            cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
        }
};

int main(void){
    system("cls");
    Date t1(19, 11, 1998), t2=t1; // arg ctor and copy ctor run
    cout<<"t1 : "; t1.showData();
    cout<<"t2 : "; t2.showData();
    Date t3(t1); // copy ctor run
    cout<<"t3 : "; t3.showData();
    t1.setData(13, 9, 2019);
    Date t4;
    t4 = t1;    // copy ctor
    cout<<"t4 : "; t4.showData();
    cout<<"--------------------------------------"<<endl;
    t4.setData(18, 7, 1998);
    Date t5;
    t5 = t4; // copy ctor
    cout<<"t5 : "; t5.showData();

    return 0;
}
// To get more knowledge see the demo48.cpp.