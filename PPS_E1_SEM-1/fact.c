#include<stdio.h>
int main( )
{
	int x;
	printf("enter x value:");
	scanf("%d",&x);
	fact(x);
}
int fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}

