#include <iostream>
#include <unistd.h>
#include <thread>
#include <time.h>
#include <mutex>
#include <condition_variable>

using namespace std;

int turn = 0;

void printFirst(){
    if(turn!=0)
    
    cout<<"Print First."<<endl;
}
void printSecond(){
    cout<<"Print Second."<<endl;
}
void printThird(){
    cout<<"Print Third."<<endl;
}

int main(void){
    thread t1(printFirst), t2(printSecond), t3(printThird);
    t1.join(); t2.join(); t3.join();
    
    return 0;
}