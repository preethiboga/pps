#include<stdio.h>
int main()
{
	int n,i,temp,rem,c,t,j,rev;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp=i;
		c=0;
		rev=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c==2)
		{
			while(temp!=0)
			{
		       rem=temp%10;
			   rev=rev*10+rem;
			   temp=temp/10;
		    }
		}
		if(i==rev)
		printf("%d ",i);
		
		
	}
}
