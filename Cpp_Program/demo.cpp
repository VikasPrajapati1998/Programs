#include <iostream>
#include <stdio.h>
using namespace std;
float divide(float, float);
int get_sqrt(float);
int main(void){
    system("cls");
    //system("clear");
    float a, b, sqr;
    int var;
    printf("Enter numbers a&b : ");
    scanf("%f %f", &a, &b);
    sqr=divide(a, b);
    var = get_sqrt(sqr);
    printf("The division of number is %f\n", sqr);
    printf("The squire of number is : %d\n", var);
    return 0;
}
// This function is return the division of two float numbers
float divide(float a, float b){
    float s = a/b;
    return(s);
}
// This function is to get the squire of a number
int get_sqrt(float r){
    int d = (int)r;
    int s = d*d;
    return(s);
}