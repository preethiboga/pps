#include<stdio.h>
#include<math.h>
void main()
{
	int n,x,p,fact,i,sign=-1;
	float sum=0.0;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter x value:");
	scanf("%d",&x);
	for(p=1;p<=n;p=p+2)
	{
		fact=1;
		for(i=1;i<=p;i++)
		{
			fact=fact*i;
		}
		sign=sign*-1;
	   sum=sum+(sign*(pow(x,p))/fact);
	  
	}
	printf("the value of series is %f",sum);
}

