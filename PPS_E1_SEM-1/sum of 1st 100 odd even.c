#include<stdio.h>
void main()
{
	int i,j,k,odd=0,even=0;
	for(i=1;i<=200;i=i+2)
	{
		even=even+i;
	}
	for(i=1;i<=200;i=i+2)
	{
		odd=odd+i;
	}
	printf("sum of 1st 100 odd numbers:%d\nsum of 1st 100 even numbers:%d\n",odd,even);
	
}
