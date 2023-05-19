#include<stdio.h>
void main()
{
	int i,j,r1,c1,r2,c2,sum=0,k,multiply[100][100];
	printf("enter rows for 1st matrix:");
	scanf("%d",&r1);
	printf("enter columns for 1st matrix:");
	scanf("%d",&c1);
	int a[r1][c1];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("enter %d%d element:",i,j);
		     scanf("%d",&a[i][j]);
		}	
	}
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c1;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
	printf("\n");
	printf("enter rows for 2nd matrix:");
	scanf("%d",&r2);
	printf("enter columns for 2nd matrix:");
	scanf("%d",&c2);
	int b[r2][c2];
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("enter %d%d element:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		printf("\n");
		for(j=0;j<c2;j++)
		{
			printf("%d ",b[i][j]);
		}
		
	}
	printf("\n");
	if(c1!=r2)
	{
		printf("can't multiplied");
	}
	else
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<r2;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
			    multiply[i][j]=sum;
			    sum=0;
			}
		}
		printf("\n");
		printf("product of entered matrices:\n");
		for(i=0;i<r1;i++)
		{
			printf("\n");
			for(j=0;j<c2;j++)
			{
				printf("%d ",multiply[i][j]);
			}
		}
	}

}
