#include<stdio.h>
void main()
{
	int arr[10];
	int i;
	for(i=1;i<=10;i++)
	{
		printf("enter %d element:",i);
		scanf("%d",&arr[i]);
	}
	printf("elements in array are:");
	for(i=1;i<=10;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	
}
