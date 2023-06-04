#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char masterlist1[6][10]={
        "Akashy", "Parag", "Raman", "Srinivas", "Gopal", "Rajesh"
    };
    int i;
    for(i=0; i<=5; i++){
    	printf("%d %s\n", &masterlist1[i], &masterlist1[i]);
	}
	printf("\nTotla Size of Array : %d", sizeof(masterlist1));
	
	printf("\n");
	printf("\n----------------------------------------------------------------\n");
	printf("\n");
	
	//----------------------------------------------------------------------
	char *masterlist2[]={
        "Akashy", "Parag", "Raman", "Srinivas", "Gopal", "Rajesh"
    };
    int j;
    for(j=0; j<=5; j++){
    	printf("%d %s\n", masterlist2[j], masterlist2[j]);
	}
	printf("\nTotal Size of Array : %d", sizeof(masterlist2));
	return 0;
}
