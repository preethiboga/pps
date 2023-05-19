#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100],c[100],d[100];
	int i;
	printf("enter a string:");
	gets(a);
	puts(a);
	printf("enter b string:");
	gets(b);
	puts(b);
	c[100]=(strlwr(a));
	d[100]=(strlwr(b));
	puts(c);
	puts(d);
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]!=d[i])
		{
			printf("not equal");
			exit(0);
		}
		else
		{
			printf("equal");
			break;
		}
	}

}
