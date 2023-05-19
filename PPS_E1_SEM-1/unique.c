#include<stdio.h>
void main()
{
	int n,i;
	printf("enter size of an array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter %d element:",i);
		scanf("%d",&a[i]);
	}
	int *p;
	p=&a[0];
	int sum=0;
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
		sum=sum+*(p+i);
	}
	printf("\n");
	printf("sum of array elements is:");
	printf("%d",sum);
}
