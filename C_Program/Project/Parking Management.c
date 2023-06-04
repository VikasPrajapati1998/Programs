// C Language based mini project
// Parking Project
#include <stdio.h>
#include <conio.h>

void Show(void);
int Menu(void);
void Delete(void);
void Bus(void);
void Car(void);
void Riksha(void);
void Cycle(void);

int bus=0, car=0, riksha=0, cycle=0, amount=0, count=0;

int main(void){
	switch(Menu()){
		case 0:
			exit(1);
			break;
		case 1:
			Bus();
			break;
		case 2:
			Car();
			break;
		case 3:
			Riksha();
			break;
		case 4:
			Cycle();
			break;
		case 5:
			Show();
			break;
		case 6:
			Delete();
			break;
		default:
			printf("\nInvailid Choice.");
			break;
	}
	main();
	return 0;
}
int Menu(void){
	printf("\n1. Enter 1 for Bus.");
	printf("\n2. Enter 2 for Car.");
	printf("\n3. Enter 3 for Riksha.");
	printf("\n4. Enter 4 for Cycle.");
	printf("\n5. Enter 5 to Show Data.");
	printf("\n6. Enter 6 to Delete Data.");
	printf("\n7. Enter 0 to Terminate Program.");
	printf("\n");
	int ch=0;
	printf("Enter Your Choice : ");
	scanf("%d", &ch);
	return(ch);
}
void Show(void){
	printf("\nNumber of Bus           : %d", bus);
	printf("\nNumber of Car           : %d", car);
	printf("\nNumber of Riksha        : %d", riksha);
	printf("\nNumber of Cycle         : %d", cycle);
	printf("\nNumber of Total Vehical : %d", count);
	printf("\nTotal Amount Gain       : %d", amount);
	printf("\n");
}
void Delete(void){
	bus=0; car=0; riksha=0; cycle=0;
	amount=0; count=0;
}
void Bus(void){
	bus++;
	amount+=100;
	count++;
}
void Car(void){
	car++;
	amount+=80;
	count++;
}
void Riksha(void){
	riksha++;
	amount+=50;
	count++;
}
void Cycle(void){
	cycle++;
	amount+=20;
	count++;
}
