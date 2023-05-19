#include<stdio.h>
struct s
{
	char name[20];
	int age;
}
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int i;
	struct s a[n];
	struct s*p;
	p=&a[0];
	for(i=0;i<n;i++)
	{
		printf("enter name:");
		scanf("%s",(p+i)->name);
		printf("enter age:");
		scanf("%d",&(p+i)->age);
	}
	int j;
	p=&a[0];
	for(j=0;j<n;j++)
	{
		printf("%s\n%d\n",(p+j)->name,(p+j)->age);
	}
	char str[100];
	printf("enter str:");
	scanf("%s",str);
	int k;
	for(k=0;k<n;k++)
	{
		if(strcmp((p+k)->name,str)==0)
		{
			printf("%d",(p+k)->age);
		}
	}
}
