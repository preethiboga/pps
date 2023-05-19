#include<stdio.h>
#include<string.h>
void stringlen(char string1[]);
void main()
{
	char string1[1000];
	printf("enter string:");
	gets(string1);
	puts(string1);
	stringlen(string1);
}
void stringlen(char string1[])
{
	int i,len=0;
	for(i=0;string1[i]!='\0';i++)
	{
		len=len+1;
	}
	printf("length of %s is %d",string1,len);
	  
	
}
