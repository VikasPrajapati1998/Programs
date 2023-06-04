/*
This is a program to find out the mysterious number. This mysterious number was given by an Indian
mathematician D. R. Kaprekar. 6174 is known as Kaprekar Constant.
1. Take a four-digit number, using at least two different digits (leading zeros are allowed).
2. Arrange the digits in descending and ascending order to get two four-digit numbers, adding leading
zeros if necessary.
3. Substract the smaller number from the bigger number.
4. Go back to step 2 and repeat.
*/
#include <iostream>
using namespace std;

void mysteriousNumber(long int &num);
long int& makeLarge(long int &num);
long int& makeSmall(long int &num); 

int main(void){
    system("cls");
    long int num=0;
    cout<<"Caution : Please enter a integer number.\nif you want to see the Kaprekar's Constant then enter a 3 or 4 digit number."<<endl;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Caution : Please enter the number of steps in inter format\nand enter a number less than 1000."<<endl;
    cout<<"Geting Mysterious Number : "<<endl;
    if(num>=100)
        mysteriousNumber(num);
    return 0;
}

// This function will give you mysterious number.
void mysteriousNumber(long int &num){
    long int large=0, small=0, sub=0;
    large = makeLarge(num);
    small = makeSmall(num);
    long int step=0;
    cout<<"Enter the number of steps you want : ";
    cin>>step;
    for(int n=1; n<step+1; n++){
        sub = large-small;
        cout<<sub<<"  ";
        if(n%10==0)
            cout<<endl;
        large = makeLarge(sub);
        small = makeSmall(sub);
    }
}

// This function is make the number in descending order
long int& makeSmall(long int &num){
    int numSize = 0;

    // How many digit number num is : 
    for(int n=1; n<=num; n*=10){
        if(num>n)
            numSize++;
    }

    // create a dynamic array of numSize
    int *arr = new int{numSize};    // for deallocate : delete [] arr;
    
    // putting value in array
    int r=0;
    for(int n=0; n<numSize; n++){
        r = num%10;
        arr[n] = r;
        num = num/10;
        r = 0;
    }

    // sorting of array
    for(int i=0; i<numSize; i++){
        for(int j=0; j<numSize; j++){
            if(arr[i]<arr[j]){
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    if(arr[0]==0){
        arr[0]=arr[1];
        arr[1]=0;
    }
    // create small number
    num = 0;
    for(int n=0; n<numSize; n++){
        num = num*10+arr[n];
    }
    delete [] arr;
    return num;
}

// This function is to make number in ascending order.
long int& makeLarge(long int &num){
    int numSize = 0;

    // How many digit number num is : 
    for(int n=1; n<=num; n*=10){
        if(num>n)
            numSize++;
    }

    // create a dynamic array of numSize
    int *arr = new int{numSize};    // for deallocate : delete [] arr;
    
    // putting value in array
    int r=0;
    for(int n=0; n<numSize; n++){
        r = num%10;
        arr[n] = r;
        num = num/10;
        r = 0;
    }

    // sorting of array
    for(int i=0; i<numSize; i++){
        for(int j=0; j<numSize; j++){
            if(arr[i]>arr[j]){
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    
    // create large number
    num = 0;
    for(int n=0; n<numSize; n++){
        num = num*10+arr[n];
    }
    delete [] arr;
    return num;
}
