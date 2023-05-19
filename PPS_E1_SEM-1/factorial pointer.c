#include<stdio.h>
int main()
{
	int num,factorial,c;
	printf("enter num");
	scanf("%d",&num);
	c=fact(&num);
	printf("%d",c);
	return 0;
}
int fact(int*a)
{
	int factorial=1;
	while(*a>1)
	{
		factorial=factorial*a;
		*a=*a-1;
	}
}
