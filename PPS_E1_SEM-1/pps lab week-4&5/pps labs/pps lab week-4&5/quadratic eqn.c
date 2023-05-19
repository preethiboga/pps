#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,imaginary;
	float root1,root2;
	printf("enter a,b,c values:");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf(" two distinct real roots of quadratic eqn are:%.2f\n %.2f\n",root1,root2);
		
	}
	else if(d<0)
	{
		root1=root2=-b/(2*a);
		imaginary=sqrt(-d)/(2*a);
		printf(" two distinct imaginary roots of quadratic eqn are:%.2f+i%.2f\n %.2f-i%.2f\n",root1, imaginary,root2,imaginary);		
		
	}
	else if(d==0)
	{
		root1=(-b)/(2*a);
		root1=root2;
		printf("two equal  real roots of the quadratic eqn are:%.2f\n %.2f\n",root1,root2);
	}
	
}
