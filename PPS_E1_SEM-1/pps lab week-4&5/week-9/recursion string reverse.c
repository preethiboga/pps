#include<stdio.h>
void reverse(char *str);
main()
{
	char s[100];
	printf("enter string:");
	gets(s);
	puts(s);
	reverse(s);
	return 0;

}
void reverse(char*str)
{
	if((*str)!='\0')
	{
		reverse(str+1);
		printf("%c",*str);
		
	}
}
