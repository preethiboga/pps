#include<stdio.h>
#include<string.h>
void main()
{
	char country[]="indiaisgreatcountry";
	printf("%s",country);
	printf("\n");
	printf("%10.6s",country);//printf("w.ds",string name)
	//w==>reserving the no.of column spaces on the output screen
	//d==>printing that many no.of characters in the reserved space
	//+==>print from right side of reserved space default taken as +
	//-==>print from left side of reserved space
	printf("\n");
	printf("%-15.6s",country);
	printf("\n");
}
