#include<stdio.h>
#include<string.h>
char del(char s1[],int,int,int);
int main()
{
	char s1[100];
	int loc,n,len;
	printf("enter string:\n");
	gets(s1);
	printf("enter location:\n");
	scanf("%d",&loc);
	printf("enter no.of characters to delete:\n");
	scanf("%d",&n);
	len=strlen(s1);
	del(s1,loc,n,len);
}
char del(char s1[],int loc,int n,int len)
{
	int i,j;
	if(loc>len)
	{
		printf("invalid location\n");
	}
	else
	{
		char s2[100];
		for(i=0;i<loc;i++)
		{
			s2[i]=s1[i];
		}
		for(j=loc+n;j<len;j++,i++)
		{
			s2[i]=s1[j];
		}
		s2[i]='\0';
		puts(s2);
	}
}


