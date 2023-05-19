#include<stdio.h>
void stringcomp(char a[],char b[]);
void main()
{
	char a[100],b[100];
	printf("enter a string:");
	gets(a);
	puts(a);
	printf("enter b string:");
	gets(b);
	puts(b);
	stringcomp(a,b);
}
void stringcomp(char a[],char b[])
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
			printf("not equal");
			exit(0);
		}
		else
		{
			printf("equal");
			break;
		}
		
		
	}
}
