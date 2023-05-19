#include<stdio.h>
void main()
{
	int n,i,count=0,j,k,p;
	printf("enter no.of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=n-i;k>=1;k--)
		{
				printf(".");
		}
		for(j=1;j<=i;j++)
		{
		
	       printf("#");
	    }
	    printf("\n");
	
	}

    
}
