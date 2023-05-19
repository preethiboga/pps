#include<stdio.h>
void main()
{
	int n,i,b[n-1],c;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	  printf("enter %d element:",i);	
	  scanf("%d",&a[i]);		
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i+1]-a[i];
	}
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	int max=b[0];
	for(i=1;i<n-1;i++)
	{
		if(max<b[i])
		{
			max=b[i];
		}
		
	}
	printf("%d",max);

}
	

