#include<stdio.h>
#include<stdlib.h>
int main()
{
	int*ptr;
	int i,n;
	n=5;
	printf("enter number of elements:%d\n",n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory is  not allocated\n");
		exit(0);
	}
	else
	{
		printf("memory successfully allocated using malloc.\n");
		for(i=0;i<n;i++)
		{
			ptr[i]=i+1;
		}
	}
	printf("elements of the array are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",ptr[i]);
	}
	return 0;
	
}
