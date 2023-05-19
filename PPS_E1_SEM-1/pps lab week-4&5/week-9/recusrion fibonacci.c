#include<stdio.h>
int fib(int n);
main()
{
	int x,i;
	printf("enter no.of terms:");
	scanf("%d",&x);
	printf("fibonacci series is:\n");
	for(i=0;i<x;i++)
	{
		printf("%d\n",fib(i));
	}
	return 0;
	
}
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return(fib(n-1)+fib(n-2));
	}
	
}
