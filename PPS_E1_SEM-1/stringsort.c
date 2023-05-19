#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	char temp;
	int l,i,j;
	gets(s);
	puts(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=0;j<l-1;j++)
		{
			if(s[j]>s[j+1])
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}	
	
	}
	printf("%s",s);	
}
