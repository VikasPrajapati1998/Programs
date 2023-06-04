#include <iostream>
using namespace std;
int main(void){
    system("cls");
    // LCM
    int arr_size=0;
    cout<<"How many numbers you want to Enter : ";
    cin>>arr_size;
    int num[arr_size]={};
    for(int var=0; var<arr_size; var++){
        printf("Enter %d number : ", (var+1));
        cin>>num[var];
    }
    //---------------------------------------------------------
    int n=2, count=0, lcm=1;
    for(int j=0; j<10; j++){
        count=0;
        for(int i=0; i<3; i++){
            if(num[i]%n==0){
                num[i]=num[i]/n;
                count=count+1;
            }
            else{
                num[i]=num[i];
            }
        }
        if(count==0){
            n=n+1;
        }
        else{
            lcm=lcm*n;
        }
    }
    cout<<lcm<<endl;

    cout<<"Program End"<<endl;
    return 0;
}