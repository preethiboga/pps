#include<stdio.h>
#include<stdlib.h>
int tablebooking();
int menu();
int roombooking();
int offerdetails();
int bill();
main()
{
	printf("welcome to STAR LIGHT HOTEL\n");
	while(1)
	{
		int x;
		printf("press 1 for table booking\n");
		printf("press 2 for menu\n ");
		printf("press 3 for room booking\n");
		printf("press 4 for offer details\n");
		printf("press 5 for bill\n");
		printf("enter your choice:\n");
		scanf("%d",&x);
	switch(x)
	{
		case 1:tablebooking();
		break;
		case 2:menu();
		break;
		case 3:roombooking();
		break;
		case 4:offer();
		break;
		case 5:bill();
		break;
		default:printf("sorry\n");
	}
    }
		
}
int tablebooking()
{
	int t,i;
	printf("enter table number for table booking:\n");
	scanf("%d",&t);
	for(i=1;i<=10;i++)
	{
		if(t==i)
		{
			printf("your table is booked\n");
			break;
		}
		else
		{
			printf(" sorry! table is not available\n");
			break;
		}
	}	
}
int menu()
{
	FILE*fp;
	fp=fopen("menu.c","r");
	char ch;
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
	}
	int m;
	printf("enter your food item:\n");
	scanf("%d",&m);
	switch(m)
	{
		case 1:printf("pasta-50/-\n");
		break;
		case 2:printf("pizza-80/-\n");
		break;
		case 3:printf("biryani-150/-\n");
		break;
		case 4:printf("burger-100/-\n");
		break;
		case 5:printf("ice-cream-50/-\n");
		break;
		case 6:printf("water bottle-30/-\n");
		break;
		case 7:printf("sandwich-70/-\n");
		break;
		case 8:printf("soups-100/-\n");
		break;
		case 9:printf("noodles-50/-\n");
		break;
		case 10:printf("dosa-30/-\n");
		break;
		default:printf("sorry! your order not available\n");
	}
}
int roombooking()
{
	int r,i;
	scanf("%d",&r);
	for(i=1;i<=10;i++)
	{
		if(r==i)
		{
			printf("your room is booked\n");
			break;
		}
		else
		{
			printf("sorry! room not available\n");
			break;
		}
	}	
}
int bill()
{
	int b;
	int i;
	for(i=1;i<=10;i++)
	{
		if(i<=10)
		{
			b=50+200;
			printf("%d",b);
			break;
		}
	}	
}
int offer()
{
	printf("%d",100);
}
