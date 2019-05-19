#include <stdio.h>
#include "phone.h"


extern int size;
void printAll()
{
	int i;
	printf("Print all contants in the PhoneBook\n");
	for(i=0;i<size;++i){
		printf("%s ",PhoneBook[i].Name);
		printf("%s\n",PhoneBook[i].PhoneNumber);
	}
}
