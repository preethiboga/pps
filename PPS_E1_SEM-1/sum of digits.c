#include<stdio.h>
void main()
{
	int r,sum,n;
	printf("enter n:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum of digits is:%d",sum);
}
