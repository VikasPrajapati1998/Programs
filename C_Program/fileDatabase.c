#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct emp{
	char name[40];
	int age;
	float bs;
}emp;

int main(void){
	// File opening process
	FILE *fp, *ft;
	fp = fopen("data/Emp.txt", "r+");
	if(fp==NULL){
		fp = fopen("data/Emp.txt", "w+");
		if(fp==NULL){
			printf("File cann't open");
			exit(1);
		}
	}
	
	// Declearation of variables
	char another, choice;
	char empname[40];
	emp e;
	long int recsize = sizeof(e);
	
	// Taking choice of user
	while(1){
		printf("1. Add Records.\n");
		printf("2. List Records.\n");
		printf("3. Modify Records.\n");
		printf("4. Delete Records.\n");
		printf("0. Exit.\n\n");
		
		printf("Your Choice : ");
		fflush(stdin);
		choice = fgetchar();
		
		// Switch Cases
		switch(choice){
			//---------------------------------------------------------------------
			case '1':
				fseek(fp, 0, SEEK_END);
				another = 'y';
				while(another == 'y'){
					printf("\nEnter name, age and basic salary : ");
					scanf("%s %d %f", e.name, &e.age, &e.bs);
					fwrite(&e, recsize, 1, fp);
					printf("Add another Record (y/n) : ");
					fflush(stdin);
					another = getchar(); //macro
				}
				printf("\n");
				
				break;
			
			//-----------------------------------------------------------------------
				
			case '2':
				rewind(fp);
				while(fread(&e, recsize, 1, fp)==1){
					printf("\n%s %d %.2f", e.name, e.age, e.bs);
				}
				printf("\n\n");
				
				break;
				
			//-----------------------------------------------------------------------
				
			case '3':
				another = 'y';
				while(another == 'y'){
					printf("\nEnter name of employee to modify : ");
					scanf("%s", empname);
					
					rewind(fp);
					while(fread(&e, recsize, 1, fp)==1){
						if(strcmp(e.name, empname)==0){
							printf("\nEnter New name, age and bs : ");
							scanf("%s %d %f", e.name, &e.age, &e.bs);
							fseek(fp, -recsize, SEEK_CUR);
							fwrite(&e, recsize, 1, fp);
							break;
						}
					}
					printf("\nModify another Record (y/n) : ");
					fflush(stdin);
					another = fgetchar(); //function
				}
				
				break;
				
			//--------------------------------------------------------------------------
			
			case '4':
				another = 'y';
				while(another == 'y'){
					printf("\nEnter name of employee to delete : ");
					scanf("%s", empname);
					
					ft = fopen("data/temp.txt", "w+");
					if(ft==NULL){
						printf("Temp file cann't open.");
						break;
					}
					
					rewind(fp);
					while(fread(&e, recsize, 1, fp)==1){
						if(strcmp(e.name, empname) != 0)
							fwrite(&e, recsize, 1, ft);
					}
					fclose(fp);
					fclose(ft);
					
					remove("data/Emp.txt");
					rename("data/temp.txt", "data/Emp.txt");
					
					fp = fopen("data/Emp.txt", "r+");
					if(fp==NULL){
						printf("Sorry Again Emp.txt file cann't open.\n");
						break;
					}
					
					printf("Delete another Record (y/n) : ");
					fflush(stdin);
					another == fgetchar();
				}
				
				break;
				
			//--------------------------------------------------------------------------
				
			case '0':
				fclose(fp);
				exit(0);
				
				break;
				
			//--------------------------------------------------------------------------
			
			default:
				printf("\nWrong Choice Entered.\n");
				
				break;
				
			//==========================================================================
		}
		
		printf("---------------------------------------------------------------\n");
	}
	
	
	return 0;
}

