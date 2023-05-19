#include<stdio.h>
void rev(int a);
main()
{
    int x;
    printf("enter x value:");
    scanf("%d",&x);
    rev(x);
}
void rev(int a)
{
	int rem;
	if(a==0)
	{
		return;
	}
	else
	{
		rem=a%10;
		printf("%d",rem);
		rev(a/10);
	}
	

}
