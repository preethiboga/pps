#include<stdio.h>
void bubblesort(int arr[],int size);
main()
{
	int n,i;
	printf("enter size of an array:");
	scanf("%d",&n);
	int a[n];
	printf("enter elements in array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("unsorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n");
	bubblesort(a,n);
	
}
void bubblesort(int arr[],int size)
{
	int temp,i,j,c;
	for(i=0;i<size;i++)
	{
		c=0;
		for(j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				c=c+1;
			}
		
		}
		printf("array status after pass %d\n",i);
		printarray(arr,size);
		printf("no.of swappings are %d",c);
		printf("\n");
	}

}
void printarray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
