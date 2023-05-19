#include<stdio.h>
#include<string.h>
void main()
{
	char s1[1000],s2[100];
	gets(s1);
	puts(s1);
	gets(s2);
	puts(s2);
	int i,j,l;
	l=strlen(s1);
	for(i=0;i<strlen(s2);i++)
	{
		s1[l++]=s2[i];
	}
	puts(s1);
	
}
