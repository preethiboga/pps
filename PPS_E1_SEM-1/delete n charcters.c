#include<stdio.h>
#include<string.h>
void main()
{
	int p,i,n,l,j;
	char a[100],b[100];
	printf("enter any string:");
	gets(a);
	printf("enter postion to delete :");
	scanf("%d",&p);
	printf("enter number of characters to be deleted:");
	scanf("%d",&n);
	l=strlen(a);
	for(i=0;i<p;i++)
	{
		b[i]=a[i];
	}
	for(j=p+n;j<l;j++,i++)
	{
		b[i]=a[j];
	}
	puts(b);
}
