#include<stdio.h>
void main()
{
	char c;
	printf("enter any character:");
	scanf("%c",&c);
	switch(c)
	{
		case '+':
			{
				int a[20][30],b[10][20],c[10][30],i,j,m1,n1,m2,n2;
				printf("enter the size of the matrix 1:");
				scanf("%d%d",&m1,&n1);
				printf("enter elements:");
				for(i=0;i<m1;i++)
				{
					for(j=0;j<n1;j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
				printf("enter the size of matrix 2:");
				scanf("%d%d",&m2,&n2);
				printf("enter the elements:");
				for(i=0;i<m2;i++)
				{
					for(j=0;j<n2;j++)
					{
						scanf("%d",&b[i][j]);
					}
				}
				printf("the resultant matrix is:");
				printf("\n");
				if(m1==n1 && m2==n2)
				{
					for(i=0;i<m1;i++)
					{
						for(j=0;j<n2;j++)
						{
							c[i][j]=a[i][j]+b[i][j];
						}
					}
					for(i=0;i<m1;i++)
					{
						for(j=0;j<n2;j++)
						{
							printf("%d ",c[i][j]);
							
						}
						printf("\n");
					}
				}
				else
				{
					printf("matrix addition is not possible");
				}
				break;
			}
    	case '-':
			{
				int a[20][30],b[10][20],c[10][30],i,j,m1,n1,m2,n2;
				printf("enter the size of the matrix 1:");
				scanf("%d%d",&m1,&n1);
				printf("enter elements:");
				for(i=0;i<m1;i++)
				{
					for(j=0;j<n1;j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
				printf("enter the size of matrix 2:");
				scanf("%d%d",&m2,&n2);
				printf("enter the elements:");
				for(i=0;i<m2;i++)
				{
					for(j=0;j<n2;j++)
					{
						scanf("%d",&b[i][j]);
					}
				}
				printf("the resultant matrix is:");
				printf("\n");
				if(m1==n1 && m2==n2)
				{
					for(i=0;i<m1;i++)
					{
						for(j=0;j<n2;j++)
						{
							c[i][j]=a[i][j]-b[i][j];
						}
					}
					for(i=0;i<m1;i++)
					{
						for(j=0;j<n2;j++)
						{
							printf("%d ",c[i][j]);
							
						}
						printf("\n");
					}
				}
				else
				{
					printf("matrix substraction is not possible");
				}
				break;
			}
			case '*':
				{
					int a[20][30],b[10][20],c[10][30],i,j,m1,n1,m2,n2,k;
			    	printf("enter the size of the matrix 1:");
				    scanf("%d%d",&m1,&n1);
				    printf("enter elements:");
				    for(i=0;i<m1;i++)
			    	{
					    for(j=0;j<n1;j++)
				     	{
						   scanf("%d",&a[i][j]);
					    }
			    	}
				    printf("enter the size of matrix 2:");
				    scanf("%d%d",&m2,&n2);
				    printf("enter the elements:");
				    for(i=0;i<m2;i++)
				    {
					    for(j=0;j<n2;j++)
					    {
						  scanf("%d",&b[i][j]);
				     	}
				    }
				    printf("resultant matrix is:");
				    printf("\n");
				    if(n1==m1)
				    {
				    	for(i=0;i<m1;i++)
				    	{
				    		for(j=0;j<n2;j++)
				    		{
				    			c[i][j]=0;
				    			for(k=0;k<n1;k++)
				    			{
				    				c[i][j]=c[i][j]+a[i][k]*b[k][j];
								}
							}
						}
						for(i=0;i<m1;i++)
						{
							for(j=0;j<n2;j++)
							{
								printf("%d ",c[i][j]);
							}
							printf("\n");
						}
					}
					else
					{
						printf("matrix multiplication is not possible\n");
					}
					break;
				}
				case 't':
					{
						int a[20][30],b[10][20],c[10][30],i,j,m1,n1,m2,n2;
			    	    printf("enter the size of the matrix 1:");
				        scanf("%d%d",&m1,&n1);
				        printf("enter elements:");
				        for(i=0;i<m1;i++)
			    	    {
					        for(j=0;j<n1;j++)
				     	    {
						        scanf("%d",&a[i][j]);
					        }
			        	}
			        	printf("transpose of matrix is:\n");
			        	for(i=0;i<n1;i++)
			        	{
			        		for(j=0;j<m1;j++)
			        		{
			        			b[i][j]=a[j][i];
							}
						}
						for(i=0;i<n1;i++)
						{
							for(j=0;j<m1;j++)
							{
								printf("%d ",b[i][j]);
							}
							printf("\n");
						}
						break;
					}
					default:
						{
							printf("invalid entry\n");
						}
				
	}
}
