#include<stdio.h>
void main()
{
	int d,m,y;
	printf("enter date :");
	scanf("%d",&d);
	printf("enter month:");
	scanf("%d",&m);
	printf("enter year:");
	scanf("%d",&y); 	
   if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
    
		if(d>=1&&d<31)
		{
			printf("date following %d:%d:%d is %d:%d:%d\n",d,m,y,d+1,m,y);
		}
		else if(d==31&&m!=12)
		{
			printf("date following %d:%d:%d is %d:%d:%d\n",d,m,y,1,m+1,y);	
		}
		else if(d==31&&m==12)
		{
			printf("date following %d:%d:%d is %d:%d:%d\n",d,m,y,1,1,y+1);	
		}
	}
	else if(m==2)
	{
		if((y%4==0&&y%100!=0)||y%400==0)
		{
			if(d>=1&&d<29)
			{
				printf("date following %d:%d:%d is %d:%d:%d\n",d,m,y,d+1,m,y);		
			}
			else if(d==29)
			{
				printf("date following %d:%d:%d is %d:%d:%d\n",d,m,y,1,m+1,y);	
			}
		}
		else
		{
			if(d>=1&&d<28)
			{
				printf("date following %d:%d:%d is %d:%d:%d\n",d,m,y,d+1,m,y);
			}
			else if(d==28)
			{
				printf("date following %d:%d:%d is %d:%d:%d\n",d,m,y,1,m+1,y);	
			}
			
		}
	}
	else if(m==4||m==6||m==9||m==11)
	{
		if(d>=1&&d<30)
		{
			printf("date following %d:%d:%d is %d:%d:%d\n",d,m,y,d+1,m,y);	
		}
		else if(d==30)
		{
			printf("date following %d:%d:%d is %d:%d:%d\n",d,m,y,1,m+1,y);	
		}
	}
   else
     {
		printf("entered wrong month");
     }
 
}
