#include<stdio.h>
void main()
{
	int m,i,tm=0;
	for(i=0;i<5;i++)
	{
		printf("enter the marks subject wise\n");
		scanf("%d",&m);
		tm=tm+m;
		if((m>=90)&&(m<=100))
		{
			printf("A\n");
		}
		else if((m>=80)&&(m<=89))
		{
			printf("B\n");
		}
		else if((m>=70)&&(m<=79))
		{
			printf("C\n");
		}
		else if((m>=60)&&(m<=69))
		{
			printf("D\n");
		}
		else
		{
			printf("FAIL\n");
		}
	}
	printf("total marks scored is %d\n",tm);
}
