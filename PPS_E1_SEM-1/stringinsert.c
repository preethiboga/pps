#include<stdio.h>
#include<string.h>
void insert(char mainstr[100],char substr[100],int p);
main()
{
	char mainstr[100];
	char substr[100];
	int p;
	printf("enter main string:");
	gets(mainstr);
	printf("enter substring:");
	gets(substr);
	printf("enter position where to insert substring:");
	scanf("%d",&p);
	insert(mainstr,substr,p);
}
void insert(char mainstr[100],char substr[100],int p)
{
	int i,j,k,m,n;
	char newstr[200];
	char str[100];
	m=strlen(mainstr);
	n=strlen(substr);
	for(i=0;i<p;i++)
	{
		newstr[i]=mainstr[i];
	}
	strcat(newstr,substr);
	for(j=p,k=0;j<m,k<=m-p;j++,k++)
	{
		str[k]=mainstr[j];
	}
	strcat(newstr,str);
	newstr[strlen(newstr)]='\0';
	puts(newstr);
}
