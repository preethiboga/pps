#include<stdio.h>
void main()
{
	int n,rem,rev,temp,num,i;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp=i;
		rev=0;
		while(temp!=0)
		{
			rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		if(i==rev)
		printf("%d ",i);
	}
}
