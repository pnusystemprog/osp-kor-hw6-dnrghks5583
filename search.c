#include <stdio.h>
#include "phone.h"

extern int size;
void searchByName()
{
	int i,k;
	struct Contact c1;
	printf("Search by name\n");
	scanf("%s",c1.Name);

	for(i=0;i<size;++i){
		for(k=0;k<10&&!(c1.Name[k]!=PhoneBook[i].Name[k]);++k)
			;
		break;
	}
	if(k=10){
		printf("%s ",PhoneBook[i].Name);
		printf("%s \n",PhoneBook[i].PhoneNumber);
	}
	if(k<10){
		printf("Oohs %s is not in PhoneBook\n",c1.Name);
	}
}
	
	
