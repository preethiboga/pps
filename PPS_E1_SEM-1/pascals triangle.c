#include<stdio.h>
void main()
{
	int n,j,i,k,p;
	printf("enter no.of:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=n-i;j>=1;j--)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
		    if(k==0||i==0)
		    {
		    	p=1;
			}
			else
			{
				p=p*(i-k+1)/k;
			}
			printf("%d ",p);
		}
		printf("\n");
	}
}
