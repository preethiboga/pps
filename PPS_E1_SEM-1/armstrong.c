#include<stdio.h>
int main()
{
	int a,r,s=0,temp;
	scanf("%d",&a);
	temp=a;
	while(a!=0)
	{
		r=a%10;
		s=s+r*r*r;
		a=a/10;
	}

	if(temp==s)
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	}return 0;
}
