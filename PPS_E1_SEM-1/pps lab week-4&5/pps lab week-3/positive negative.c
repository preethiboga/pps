#include<stdio.h>
void main()
{
	int a;
	printf("enter a value:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("positive");
	}
	else if(a<0)
	{
		printf("negative");
	}
	else
	{
		printf("0");
	}
}
