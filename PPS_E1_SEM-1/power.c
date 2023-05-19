#include<stdio.h>
#include<math.h>
main()
{
	int x,i,power,f;
	scanf("%d%d",&x,&i);
	power=pow(x,i);
	f=fact(x);
	printf("%d",power*f);
}
int fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact*i;
	}
	return fact;
}
