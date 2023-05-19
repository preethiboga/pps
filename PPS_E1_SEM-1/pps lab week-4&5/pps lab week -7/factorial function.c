#include<stdio.h>
void fact(int x);
main()
{
	int x;
	printf("enter x value:");
	scanf("%d",&x);
	fact(x);
}
void fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;++i)
	{
		fact=fact*i;
	}
	printf("factorial of %d is %d",n,fact);
}

