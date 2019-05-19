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
			case 1: registerPhoneData(); break;
			case 2: printAll(); break;
			case 3: searchByName(); break;
			case 4: deleteByName(); break;
		}
	}while(service!=5);
	return 0;
}

void registerPhoneData()
{
	char my_passward[10]="rladnrghks";
	char passward[10];
	int i=0, j=0;
	int k=0;

	printf("Registration\n");

	while(i!=10 && j!=4){
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
			printf("Passward : ");
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
		scanf("%s", PhoneBook[size].Name);
		k++;	
	}
	while(getchar()!='\n');
	if(k==1){		
		printf("Phone Number : ");
		scanf("%s", PhoneBook[size].PhoneNumber);
		printf("Registered..\n");
		size++;
	}
	count_service++;
	printf("You have received %dtimes services\n",count_service);	
}

void printAll()
{
	int i;
	printf("Print all contants in the PhoneBook\n");
	for(i=0;i<size;++i){
		printf("%s ",PhoneBook[i].Name);
		printf("%s\n ",PhoneBook[i].PhoneNumber);
	}
	count_service++;	
	printf("You have received %dtimes services\n",count_service);
}

void searchByName()
{
	int i,k;
	struct Contact c1;
	printf("Search by Name\n");
	scanf("%s",c1.Name);

	for(i=0;i<size;++i){
		for(k=0;k<10&&!(c1.Name[k]!=PhoneBook[i].Name[k]);++k)
			;
		break;
	}
	if(k=10){
		printf("%s ",PhoneBook[i].Name);
		printf("%s\n",PhoneBook[i].PhoneNumber);
	}
	if(k<10){
		printf("Oohs %s is not in PhoneBook\n",c1.Name);
	}
	count_service++;
	printf("You have received %dtimes services\n",count_service);
}

void deleteByName()
{
	int i,j,k;
	struct Contact c2;
	printf("Name : ");
	scanf("%s",c2.Name);
	for(i=0;i<size;++i){
		for(k=0;k<10&&!(c2.Name[k]!=PhoneBook[i].Name[k]);++k)
			;
		break;
	}
	if(i<size){
		for(i,j=i+1;i<size-2;++i){
			for(k=0;k<10;++k){
				PhoneBook[i++].Name[k]=PhoneBook[j].Name[k];
			}
		}
		size--;
		printf("Deletion is Done\n");
	}
	else{
		printf("Oohs %s is not in PhoneBook\n",c2.Name);
	}
	count_service++;
	printf("You have received %dtimes services\n",count_service);	
}

