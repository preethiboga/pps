#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter a,b,c values:");
	scanf("%d%d%D",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("%d is greater",a);
	}
	else if((b>a)&&(b>c))
	{
		printf("%d is greater",b);
	}
	else
	{
		printf("%d is greater",c);
	}
}
