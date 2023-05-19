#include<stdio.h>
int main(int argc,char *argv[])
{
	int i;
	if(argc>=2)
	{
		printf("the number of arguments supplied are:%d\n",(argc-1));
		for(i=1;i<argc;i++)
		{
			printf("%s\t",argv[i]);
		}
	}
	else
	{
		printf("argument list is empty.\n");
	}
	return 0;
}   
