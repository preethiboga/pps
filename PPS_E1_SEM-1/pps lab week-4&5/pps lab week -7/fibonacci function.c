#include<stdio.h>
void main()
{
	int x;
	printf("enter x:");
	scanf("%d",&x);
	fib(x);
}
void fib(n)
{
	int i,n1=0,n2=1,nth;
	printf("%d\n%d\n",n1,n2);
	for(i=0;i<n-2;i++)
	{          
		nth=n1+n2;
		printf("%d\n",nth);
		n1=n2;
		n2=nth;
	}
}
		
	


	

