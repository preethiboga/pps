#include<stdio.h>
void fact(int n);
main()
{
	int x;
	printf("enter x value:");
	scanf("%d",&x);
	fact(x);
}
void fact(int n)
{
	int i,fact;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of given number is:%d",fact);
}

