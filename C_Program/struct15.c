#include<stdio.h>
#include<conio.h>

struct virus{
	char signature[25];
	char status[20];
	int size;
} v[2]={
	"Yankee Doodle", "Deadly", 1813,
	"Dark Avenger", "Killer", 1795
};

int main(void){
	int i;
	for(i=0; i<=1; i++){
		printf("%s %s\n", v[i].signature, v[i].status);
	}
	
	printf("%d", sizeof(v[0]));
	return 0;
}
