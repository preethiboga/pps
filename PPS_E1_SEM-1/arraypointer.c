#include<stdio.h>
void main()
{
	int a[]={10,20,30,40,50},i;
	int*p;
	p=&a[0];
	for(i=0;i<5;i++)
	{
		printf("%d",*(p+i));
	}
}
