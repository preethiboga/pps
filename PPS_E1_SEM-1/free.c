#include<stdio.h>
#include<stdlib.h>
int main()
{
	int*ptr1,*ptr;
	int i,n;
	n=5;
	printf("enter number of elements:%d\n",n);
	ptr=(int*)malloc(n*sizeof(int));
	ptr1=(int*)calloc(n,sizeof(int));
	if(ptr==NULL||ptr1==NULL)
	{
		printf("memory is  not allocated\n");
		exit(0);
	}
	else
	{
		printf("memory successfully allocated using malloc.\n");
		free(ptr);
		printf("malloc memory is succesfully freed.\n");
		printf("memory successfully allocated using calloc.\n");
		free(ptr1);
		printf("calloc memory is succesfully freed.\n");
	
	}
	return 0;
	
}
