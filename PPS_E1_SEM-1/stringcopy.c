#include<stdio.h>
#include<string.h>
void stringcopy(char str[]);
void main()
{
	char str[1000];
	printf("enter string:");
	gets(str);
	puts(str);
	stringcopy(str);
}
void stringcopy(char str[])
{
    int i;
    char cpy[1000];
    for(i=0;str[i]!='\0';i++)
    {
    	cpy[i]=str[i];
    	
	}
	printf("copy of string is %s",cpy);
	
}
