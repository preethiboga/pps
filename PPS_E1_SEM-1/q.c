#include<stdio.h>
void main()
{
	int i;
	char str[100];
	for(i=0;i<2;i++)
	{
		scanf("%[^\n]s",str);
		printf("%s",str);
		fflush(stdin);
	}
}
