#include<stdio.h>
#include<string.h>
void stringupper(char a[]);
void main()
{
	char a[100];
	printf("enter a string:");
	gets(a);
	puts(a);
	stringupper(a);
}
void stringupper(char a[])
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			printf("%c",a[i]-32);
		}
	}
}
