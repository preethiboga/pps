#include<stdio.h>
main()
{
	int i=1;
	display(i);
}
void display(int i)
{
	if(i<=10)
	{
		printf("preethi\n");
		display(i+1);
	}
}
