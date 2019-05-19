#include <stdio.h>
#include "phone.h"
#include <string.h>

extern int size;
void registerPhoneData()
{
	char my_passward[]="rladnrghks";
	char passward[10];
	int i=0,j=0,k=0;
	printf("Registration\n");

	while(i!=10&&j!=4){
		if(j==1){
			printf("Not matched\n");
		}
		if(j==2){
			printf("Not matched(twice)!\n");
		}
		if(j==3){
			printf("Not matched(3times)!\n");
			printf("You are not allowed to access PhoneBook.\n");
			j++;
			break;
		}
		if(j<3){
			printf("passward: ");
			scanf("%s",passward);
		}
		for(i=0;i<10&&!(my_passward[i]!=passward[i]);++i)
			;
		if(i<10){
			j++;
		}
	}
	if(j!=4){
		printf("New User Name : ");
		scanf("%s",PhoneBook[size].PhoneNumber);
		k++;
	}
	getchar();
	if(k==1){
		printf("Phone Number : ");
		scanf("%s",PhoneBook[size].PhoneNumber);
		printf("Registered..\n");
		size++;
	}
}	
