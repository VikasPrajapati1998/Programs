#include <iostream>
using namespace std;

class Circle{
    private:
        int radius;
        float x, y;
    public:
        Circle(){ }
        Circle(int rr, float xx, float yy){
            radius=rr;
            x=xx;
            y=yy;
        }
        Circle& operator=(Circle& c){   // operator overloading
            cout<<"Assignment operator invoked"<<endl;
            radius=c.radius;
            x=c.x;
            y=c.y;
        }
        Circle(Circle& c){  // copy constructor
            cout<<"Copy constructor invoked"<<endl;
            radius=c.radius;
            x=c.x;
            y=c.y;
        }
        void showData(){
            cout<<"Radius = "<<radius<<endl;
            cout<<"X-Coordinate = "<<x<<endl;
            cout<<"Y-Coordinate = "<<y<<endl;
        }
};

int main(void){
    system("cls");
    Circle c1(10, 2.5f, 7.3f);
    Circle c2, c3;
    c3 = c2 = c1;   // operator overload ;
    Circle c4 = c1;     // copy constructor ;
    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();

    return 0;
}
