#include<stdio.h>
#include<string.h>
void main()
{
	char string[1000];
	printf("enter any string:");
	gets(string);
	puts(string);
	int i,len,count=0;
	len=strlen(string);
	for(i=0;i<len;i++)
	{
		if(string[i]==string[len-i-1])
		count=count+1;
	} 
	if(count==len)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
	
}
