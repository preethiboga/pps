#include<stdio.h>
void main()
{
	int i,m,tm=0;
	for(i=0;i<5;i++)
	{
	  printf("enter subject wise marks");
	  scanf("%d",&m);
	  tm=tm+m;
	  if(m>=90&&m<=100)
	  printf("A\n");
	  else if(m>=80&&m<=89)
	  printf("B\n");
	  else if(m>=70&&m<=79)
	  printf("C\n");
	  else if(m>=51&&m<=69)
	  printf("D\n");
	  else
	  printf("fail\n");
	  
    }
    printf("total marks:%d",tm);	 
}
