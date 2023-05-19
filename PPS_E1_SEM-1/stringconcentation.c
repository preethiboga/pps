#include<stdio.h>
#include<string.h>
void stringcat(char str1[],char str2[]);
main()
{
	char str1[1000];
	char str2[1000];
	printf("enter str1:");
    gets(str1);
    puts(str1);
    printf("enter str2:");
	gets(str2);
	puts(str2);
	stringcat(str1,str2);
}
void stringcat(char str1[],char str2[])
{
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	while(str2[j]!='\0')
	{
		str1[i++]=str2[j];
		j++;
	}
	str1[strlen(str1)]='\0';
	printf("%s",str1);
	puts(str1);
		
}
