#include <stdio.h>
#include <conio.h>
int main(int argc, int *argv[]){
	int i=0;
	for(i=1; i<argc; i++){
		puts(argv[i]);
	}
	return 0;
}
