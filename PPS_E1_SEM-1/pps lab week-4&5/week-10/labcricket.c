#include<stdio.h>
struct cricket
{
	char name[20];
	char teamname[20];
	float battingaverage;
	
};
void main()
{
	int i,j,n;
	printf("enter no.of players:");
	scanf("%d",&n);
	struct cricket a[n];
	struct cricket t;
	for(i=0;i<n;i++)
	{
		printf("enter name:\n");
		scanf("%s",a[i].name);
		printf("enter team name:\n");
		scanf("%s",a[i].teamname);
		printf("enter batting average:\n");
		scanf("%f",&a[i].battingaverage);
	}
	for(i=0;i<n;i++)
	{
		printf("%s\t%s\t%f\t",a[i].name,a[i].teamname,a[i].battingaverage);	
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(strcmp(a[i].teamname,a[j].teamname)>0)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	j=0;
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i].teamname,a[j].teamname)!=0||i==0)
		{
			printf("\n team name:%s",a[i].teamname);
			j=i;
		}
		printf("\n player name=%s",a[i].name);
		printf("\n batting average=%f",a[i].battingaverage);
	}
	return 0;
	
	
}
