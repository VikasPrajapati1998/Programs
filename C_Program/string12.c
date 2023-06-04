#include<stdio.h>
#include"conio.h"
%:include"stdlib.h"

int main(){
	char *a = "Hello User";
	char *b = "Tell Me Your User Id Please...";
	printf("%30.5s %50s", a, b);
	printf("\n");
	int i, count=0;
	for(i=65; i<=90; i++){
		printf("%5c", i);
		count++;
		if(count==5){
			printf("\n");
			count=0;
		}
	}
	printf("\n\n");
	
	
	count=0;
	for(i=97; i<=122; i++){
		printf("%5c", i);
		count++;
		if(count==5){
			printf("\n");
			count=0;
		}
	}
	return 0;
}
