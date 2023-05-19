#include<stdio.h>
void add(int x,int y)//int is used instead of void
{
	int c;
	c=x+y;
    printf("%d",c);//return c is used
}
void main()
{
	
	int a=10,b=20;
	add(a,b);//again another variable is used to print the returned value
}
