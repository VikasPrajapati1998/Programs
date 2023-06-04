#include<stdio.h>
#include<conio.h>
int main(){
	char *mesh[]={
		"Hammer and tongs",
		"Tooth and nail",
		"Spit and polish",
		"You and C"
	};
	int len = sizeof(mesh);
	printf("Size of mesh %ld", len);
	printf("\n");
	char menu[4][17] = {
		"Hammer and tongs",
		"Tooth and nail",
		"Spit and polish",
		"You and C"
	};
	printf("Size of menu %d", sizeof(menu));
	return 0;
}
