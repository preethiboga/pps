#include<stdio.h>
void main()
{
	int r1,c1,i,j;
	printf("enter no.of rows of 1st matrix:");
	scanf("%d",&r1);
	printf("enter no.of columns of 1st matrix:");
	scanf("%d",&c1);
	int a[r1][c1];
	printf("enter elements of matrix a\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("enter element-%d%d:",i,j);
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
    int trans[100][100];
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	trans[i][j]=a[j][i];
	}
	printf("transpose of matrix is:\n");
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c1;j++)
		printf("%d ",trans[i][j]);
	}
}
