#include<stdio.h>//if break is not included cases after matched also excuted before matched no cases are excuted
void main()
{
	switch(2)
	{
		case 1:printf("choice is 1");
		break;
		case 2:printf("choice is 2");
		break;
		case 3:printf("choice is 3");
		break;
		default:printf("choice other than 1,2 and 3 \n");//no matter where the default is it checks for cases
	}
}
