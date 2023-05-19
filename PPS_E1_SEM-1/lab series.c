#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,fact=1,sign=-1;
	float x,sum=0.0,result;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter x value:");
	scanf("%f",&x);
	for(i=2;i<(2*n);i=i+2)
	{
		fact=fact*i*(i-1);
		sum=sum+(sign*(pow(x,i))/fact);
		sign=sign*(-1);
	}
	result=1+sum;
	printf("the value of series is %f",result);
}

