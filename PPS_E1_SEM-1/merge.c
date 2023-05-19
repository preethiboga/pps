#include<stdio.h>
void merge(int arr[],int p,int q,int r)
{
	int n1=q-p+1;
	int n2=r-q;
	int l[n1],m[n2];
	int i,j,k;
	for(i=0;i<n1;i++)
	{
		l[i]=arr[p+i];
	}
	for(j=0;j<n2;j++)
	{
		m[j]=arr[q+1+j];
	}
	i=0;
	j=0;
	k=p;
	while(i<n1 && j<n2)
	{
		if(l[i]<=m[j])
		{
			arr[k]=l[i];
			i++;
		}
		else
		{
			arr[k]=m[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k]=l[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=m[j];
		j++;
		k++;
	}
}
	void mergesort(int arr[],int l,int r)
	{
		if(l<r)
		{
			int m=l+(r-1)/2;
			mergesort(arr,l,m);
			mergesort(arr,m+1,r);
			merge(arr,l,m,r);
		}
	}
	void printarray(int arr[],int size)
	{
		int i;
		for(i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
	}
	int main()
	{
		int n;
		printf("enter size of an array:");
		scanf("%d",&n);
		int i,arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		printarray(arr,n);
		mergesort(arr,0,n-1);
		printf("sorted array:\n");
		printarray(arr,n);
		return 0;
	}

