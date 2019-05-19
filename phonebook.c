#include <stdio.h>
#include "phone.h"
#include <string.h>

void registerPhoneData();
void printAll();
void searchByName();
void deleteByName();

static int count_service = 0;
extern int size;

int main(void)
{
	int size = 0;
	int service;
	do
	{
		printf("============ Telephone Book Management =========");
		printf("\n <<<1. Register\t 2. Print All \t 3. Search by ID \t 4. Delete \t 5. Exit >>>\n");
		printf("Please enter your service number (1-5)>");
		scanf("%d", &service);
		
		switch(service)
		{
			case 1: 
			{
				registerPhoneData();		
				count_service++;
				printf("You have recived %dtimes services\n",count_service);
				break;
			}	
			case 2: 
			{
				printAll();	
				count_service++;
				printf("You have recived %dtimes services\n",count_service);
				break;
			}	
			case 3: 
			{
				searchByName();	
				count_service++;
				printf("You have recived %dtimes services\n",count_service); 
			}	
			case 4: 
			{
				deleteByName();	
				count_service++;
				printf("You have recived %dtimes services\n",count_service);	
				break;
			}	
		}
	}while(service!=5);
	return 0;
}

