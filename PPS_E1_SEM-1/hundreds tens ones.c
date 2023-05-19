#include<stdio.h>
void main()
{
	int n,h,u,t;
	printf("enter 3 digit number:\n");
	scanf("%d",&n);
	u=n%10;
	n=n/10;
	t=n%10;
	n=n/10;
	h=n%10;
	n=n/10;
	printf("%d hundreds %d tens %d units",h,t,u);
}
