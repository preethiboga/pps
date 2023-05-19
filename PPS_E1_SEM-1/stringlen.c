#include<stdio.h>
#include<string.h>
void main()
{
	char string[]="spark";
	int len;
	len=strlen(string);
	printf("length of %s is %d\n",string,len);
	printf("size of %s is %u\n",string,sizeof(string));
	printf("revrse of string is %s\n",strrev(string));
}
