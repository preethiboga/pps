#include<stdio.h>
int bubblesort(int arr[],int n);
main()
{
	int n,i;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n%d",a[n-1]*a[n-2]*a[n-3]);
	return 0;

}
int bubblesort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			  temp=arr[j];
		      arr[j]=arr[j+1];
			  arr[j+1]=temp;
		    }
		}
	}
	return 0;
}

