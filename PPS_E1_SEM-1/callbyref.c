#include<stdio.h>
void swap(int*a,int*b);
int main()
{
	int x=10;
	int y=20;
	printf("before swapping :%d%d",x,y);
	swap(&x,&y);
	printf("after swapping:%d%d",x,y);
}
void swap(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
