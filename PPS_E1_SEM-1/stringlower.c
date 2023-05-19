#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	printf("enter a string:");
	gets(a);
	puts(a);
	stringlower(a);
}
void stringlower(char a[])
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			printf("%c",a[i]+32);
		}
	}
}
