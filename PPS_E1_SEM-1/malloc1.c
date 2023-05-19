#include<stdio.h>
#include<stdlib.h>
int main()
{
	int*ptr;
	int i,n;
	printf("enter no.of elements:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr == NULL)
	{
		printf("memory not allocted\n");
		exit(0);
	}
	else
	{
		printf("memory is successfully alloted using malloc\n");
		for(i=0;i<n;++i)
		{
			ptr[i]=i+1;
		}
		printf("the elements of the array are:");
		for(i=0;i<n;++i)
		{
			printf("%d ",ptr[i]);
		}
	}
}
