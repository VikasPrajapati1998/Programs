#include <stdio.h>
#include <conio.h>
#include <string.h>

char* copy(char*, char*);

int main(void){
	char *str;
	char source[] = "Jaded";
	char target[30];
	
	str = copy(target, source);
	printf("%s\n", str);
	return 0;
}

char* copy(char *t, char *s){
	char *r;
	r = t;
	while(*s != '\0'){
		*t = *s;
		t++;
		s++;
	}
	*t = '\0';
	return (r);
}
