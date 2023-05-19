#include<stdio.h>
#include<string.h>
void main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array before sorted:\n");
	printarray(a,n);
	quicksort(a,0,n-1,n);
	printf("array after sorted:\n");
	printarray(a,n);
}
void quicksort(int a[],int first,int last,int n)
{
	if(first<last)
	{
		int i,j,pivot,t;
		i=first;
		j=last;
		pivot=first;
		while(i<j)
		{
			while(a[i]<=a[pivot]&&i<last)
			i++;
			while(a[j]>a[pivot])
			j--;
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				
			}
		}
	    t=a[pivot];
		a[pivot]=a[j];
		a[j]=t;
		printarray(a,n);
		quicksort(a,0,j-1,n);
		quicksort(a,j+1,last,n);
	}
	
}

void printarray(int a[],int n)
{
	static int i=0;
	printf("array status after each pass %d:",i);
	i++;
	int j;
	for(j=0;j<n;j++)
	{
		printf("%d ",a[j]);
	}
	printf("\n");
	
}

