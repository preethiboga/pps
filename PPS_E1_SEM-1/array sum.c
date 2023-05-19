#include <stdio.h>
void main()
{
	int a;
	printf("enter size:");
	scanf("%d",&a);
	int arr[a],sum=0,i;
	for(i=0;i<a;i++)
	{
		printf("enter %d element:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++)
	{
		printf("%d ",arr[i]);
		sum=sum+arr[i];
	}
	printf("\nsum is%d",sum);
	
}
