# include<stdio.h>
int ackermani(int m,int n);
main()
{
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("%d",ackermani(a,b));
	return 0;
}
int ackermani(int m,int n)
{
	if(m==0)
	{
		return n+1;
	}
	else if((m>0)&&(n==0))
	{
		return ackermani((m-1),1);
	}
	else if((m>0)&&(n>0))
	{
		return ackermani((m-1),ackermani(m,(n-1)));
	}
}
