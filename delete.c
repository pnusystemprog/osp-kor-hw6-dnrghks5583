#include <stdio.h>
#include "phone.h" 

extern int size;
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
		printf("Deletion is done\n");
	}
	else{
		printf("Oohs %s is not in PhoneBook\n",c2.Name);
	}
}

