#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[]){
	int i=0;
	for(i=1; i<argc; i++){
		char *s=argv[i];
		printf("%s\n", s);
	}
	getch();
	return 0;
}
