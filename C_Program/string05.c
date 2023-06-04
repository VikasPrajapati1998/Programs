#include<stdio.h>
#include<conio.h>
#include<string.h>

#define FOUND 1
#define NOTFOUND 0

int main(){
    char *masterlist[]={
        "Akashy", "Parag", "Raman", "Srinivas", "Gopal", "Rajesh"
    };
    int i, flag, a;
    char yourname[10];
    printf("Enter Your Name : ");
    scanf("%s", yourname);
    
    flag=NOTFOUND;
    for(i=0; i<=5; i++){
        a = strcmp(masterlist[i], yourname);
        if(a==0){
            printf("Welcome, You can enter the place.");
            flag=FOUND;
        }
    }
    if(flag==NOTFOUND){
        printf("Sorry, You can't enter the place.");
    }
    printf("\n%d",sizeof(masterlist));
    return 0;
}
