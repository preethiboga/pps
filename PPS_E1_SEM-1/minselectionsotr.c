#include<stdio.h>
#include<stdio.h>
void selectionsort(int a[],int n);
 main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	selectionsort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
void selectionsort(int a[],int n)
{
	int i,j,min,t;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
			    t=a[i];
			    a[i]=a[j];
			    a[j]=t;
				
			}
		}
		
	}


}
