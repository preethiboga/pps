#include<stdio.h>
void main()
{
	char str[100];
	char *p;
	int v=0,c=0;
	printf("enter string:");
	gets(str);
	puts(str);
	p=str;
	while(*p!='\0')
	{
		if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
		   v++;
		else
		   c++;
	  p++;
	}
	printf("no.of vowels in %s is %d\n",str,v);
	printf("no.of consonants in %s is %d",str,c);
}
