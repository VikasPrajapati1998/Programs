#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char *names[5];
	char n[30];
	char *p;
	int i, len;
	for(i=0; i<=4; i++){	
		printf("Enter Name : ");
		scanf("%[^\n]s", n);
		fflush(stdin);
		len = strlen(n);
		printf("Lenght : %d\n", len);
		p = (char*)malloc(len+1);
		printf("\nSize of P : %ld\n", sizeof(p));
		strcpy(p, n);
		names[i] = p;
	}
	
	printf("=================================================\n");
	printf("Now printing the names : \n");
	for(i=0; i<=4; i++){
		puts(names[i]);
	}
	
	printf("\nSize of names : %ld\n", sizeof(names));
	return 0;
}
