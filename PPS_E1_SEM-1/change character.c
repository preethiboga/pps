#include <stdio.h>
void main()
{
	char c;
	printf("enter alphabet");
	scanf("%c",&c);
	if(c>="A" && c<="Z")
	{
		printf("%c",c+32);
	}
	else
	{
		printf("%c",c-32);
	}
	
	
}
