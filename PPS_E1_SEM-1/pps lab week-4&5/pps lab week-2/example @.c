#include<stdio.h>
void main()
{
	int a,b;
	float c;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	if(a<b)
	{
		c=(100*a)/b;
		printf("%d is %.2f%% of %d",a,c,b);
	}
	else if(a>b)
	{
		c=(100*b)/a;
		printf("%d is %.2f%% of %d",b,c,a);
	}
	else
	{
		printf("both are equal");
	}

}
