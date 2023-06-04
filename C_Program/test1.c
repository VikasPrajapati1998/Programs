#include <stdio.h>
#include <conio.h>
int main(void){
	char ch;
	while((ch=getc(stdin))!=EOF){
		putc(ch, stdout);
	}
	return  0;
}
// You can terminate the program by pressing Ctrl+Z.
