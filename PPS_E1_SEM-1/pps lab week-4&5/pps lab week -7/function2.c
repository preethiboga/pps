#include<stdio.h>
void swap(int,int);
main()
{
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	swap(a,b);
}
void swap(int x,int y)
{
	printf("before swapping:\n a is %d\n b is %d\n",x,y);
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("after swapping:\n a is %d\n b is %d\n",x,y);
}

