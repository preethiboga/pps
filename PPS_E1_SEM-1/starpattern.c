#include<stdio.h>
#include<string.h>
void main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");	
	}
	for(i=n-1;i>=1;i--)
	{
		for(k=1;k<n-i+1;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");	
	}
}
