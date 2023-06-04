#include <iostream>
using namespace std;
class Circle{
    private:
        char color='a';
        float radius=0.0f;
        static int count;
    public:
        Circle(){ };
        Circle(char c, float r){
            color=c;
            radius=r;
            count++;
        }
        static void showCount(){
            cout<<"count = "<<count<<endl;
        }
        static void resetCount(){
            count=0;
        }
        static void setCount(int x){
            count = x;
        }
        static void setCount(){
            int x;
            cout<<"Enter a number : ";
            cin>>x;
            count=x;
        }
};
int Circle::count=0;

int main(void){
    system("cls");
    Circle c1('R', 1.2f);
    c1.showCount();
    Circle::showCount();
    Circle c2('G', 2.2f);
    c2.showCount();
    Circle::showCount();
    Circle c3('B', 3.2f);
    c3.showCount();
    Circle::showCount();
    Circle::resetCount();
    Circle::showCount();
    c3.showCount();
    c3.setCount(5);
    c3.showCount();
    Circle::setCount(7);
    c3.showCount();
    Circle::showCount();
    Circle::setCount();
    Circle::showCount();
    c1.showCount();
    c2.resetCount();
    Circle::showCount();

    return 0;
}