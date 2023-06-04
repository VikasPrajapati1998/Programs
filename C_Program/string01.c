#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char *s="Humpty Dumpty";
	int i=0;
	while(s[i] != '\0'){
		printf("%c", s[i]);
		i++;
	}
	
	printf("%d", strlen(s));
}
