#include<stdio.h>
#include<string.h>
void main()
{
	char mainstr[100],substr[50];
	int p;
	gets(mainstr);
	gets(substr);
	scanf("%d",&p);
	int l=strlen(mainstr);
	insert(mainstr,substr,p);
}
void insert(char mainstr[100],char substr[50],int p)
{
	int i,j,k;
	char c[50],s[50];
	int m=strlen(mainstr);
	int n=strlen(substr);
	for(i=0;i<p;i++)
	{
		c[i]=mainstr[i];	
	}
	strcat(c,substr);
	for(j=p,k=0;j<m,k<=m-p;j++,k++)
	{
		s[k]=mainstr[j];
	}
	strcat(c,s);
	puts(c);
}

