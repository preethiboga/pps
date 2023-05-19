#include<stdio.h>
#include<string.h>
void stringreverse(char str[]);
void main()
{
	char str[1000];
	printf("enter string:");
	gets(str);
	puts(str);
	stringreverse(str);
}
void stringreverse(char str[])
{
	int i;
	char rev[1000];
	printf("reverse of string is:");
	for(i=strlen(str)-1;i>=0;i--)
    {
        rev[i]=str[i];
        printf("%c",rev[i]);
	}
	
}
