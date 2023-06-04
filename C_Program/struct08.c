/* nested structure*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct emp{
	char name[25];
	struct address{
		char phone[15];
		char city[30];
		struct{
			int pin;
			char adhar[20];
		}p;
	}a;
};

int main(void){
	struct emp e1={"Arjun", "123456789", "Ayodhya", "224001", "987654321"};
	
	printf("name = %s, phone = %s, city = %s, pin = %d, ", e1.name, e1.a.phone, e1.a.city, e1.a.p.pin);
	printf("adhar = %s", e1.a.p.adhar);
	return 0;
}
