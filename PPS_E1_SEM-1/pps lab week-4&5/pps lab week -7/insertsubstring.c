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
	int i,m,n;
	m=strlen(mainstr);
	n=strlen(substr);
	for(i=m-1;i>=p;i--)
	{
		mainstr[i+n]=mainstr[i];
	}
	for(i=0;i<n;i++)
	{
		mainstr[i+p]=substr[i];
	}
	mainstr[m+n]='\0';
	puts(mainstr);
	
}
