#include<stdio.h>
int fact(int n);
int main()
{
	int x;
	printf("enter number:");
	scanf("%d",&x);
	fact(x);
	printf("factorial of number is:%d",fact(x));
	return 0;
}
int fact(int n)
{
	if(n>=1)
	{
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
	
}
