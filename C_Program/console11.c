/*Test file to check your code.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	/*
	char text[50];
	sprintf(text, "%10d %2.2f %s", 12, 3.452, "Merry Go Round");
	printf("%s\n", text);
	printf("%d\n", strlen(text));
	*/
	
	
	char buffer[50];
	int no = 97;
	double val = 2.34174;
	char name[10] = "Shweta";
	
	sprintf(buffer,"%d %lf %s", no, val, name);
	printf("%s\n", buffer);
	
	sscanf(buffer, "%4d %2.2lf %s", &no, &val, name);
	printf("%s\n", buffer);
	
	printf("%d %lf %s\n", no, val, name);
	
	return 0;
}

