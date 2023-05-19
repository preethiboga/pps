#include<stdio.h>
 void main()
{
	int rows,columns,i,j;
	printf("enter no.of rows:\n");
	scanf("%d",&rows);
	printf("enter no.of columns:\n");
	scanf("%d",&columns);
	printf("enter elements in 1st matrix");
	int a[rows][columns];
 	for(i=0;i<rows;i++)
 	{
 		for(j=0;j<columns;j++)
 		{ 
 		    printf("element-%d%d:",i,j);
 			scanf("%d",&a[i][j]);
		}
    }
    int b[rows][columns];
    printf("enter elements in 2nd matrix");
	for(i=0;i<rows;i++)
	{
	   for(j=0;j<columns;j++)
	   {
	   	printf("element-%d%d:",i,j);
	   	scanf("%d",&b[i][j]);
	   }	
    }
    int sub[rows][columns];
    for(i=0;i<rows;i++)
    {
    	for(j=0;j<columns;j++)
    	{
    		sub[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("subtraction of two matrices is:");
	for(i=0;i<rows;i++)
	{
		printf("\n");
		for(j=0;j<columns;j++)
		{
			printf("%d ",sub[i][j]);
		}
	}
}
