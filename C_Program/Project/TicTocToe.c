// tic toc toe game
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void show(void);
void playerSymbol(void);
void start();

char a[9]={'1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main(void){
	system('cls');
	show();
	playerSymbol();
	return 0;
}

void show(void){
	printf("\n\n\n");
	printf("\t\t\t Tic-Tac-Toe Game\n\n");
	printf("\t\t\t-----|-----|-----\n");
	printf("\t\t\t  %c  |  %c  |  %c  \n", a[0], a[1], a[2]);
	printf("\t\t\t-----|-----|-----\n");
	printf("\t\t\t  %c  |  %c  |  %c  \n", a[3], a[4], a[5]);
	printf("\t\t\t-----|-----|-----\n");
	printf("\t\t\t  %c  |  %c  |  %c  \n", a[6], a[7], a[8]);
	printf("\t\t\t-----|-----|-----\n");
}
void playerSymbol(){
	printf("\n\n");
	printf("\t\t\tPlayer 1 symbol is : x\n");
	printf("\t\t\tPlayer 2 symbol is : o\n");
}
void start(){
	char p;
	printf("\nEnter who will start the game : " Player 1 or Player 2\n);
	scanf("%c", &p);
}
