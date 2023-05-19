#include<stdio.h>
void main()
{
	char str[100];
	char *ptr;
	printf("enter string:");
	gets(str);
	ptr=&str[0];
	printf("entered string is:");
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
		
	}
}
