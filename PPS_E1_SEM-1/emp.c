#include<stdio.h>
struct emp
{
	int id;
	char name[30];
	char designation[30];
	int salary;
};
void main()
{
	struct emp a[10];
	int n=10,i;
	for(i=0;i<n;i++)
	{
		printf("enter id:");
		scanf("%d",&a[i].id);
		printf("enter name:");
		scanf("%s",a[i].name);
		printf("enter designation:");
		scanf("%s",a[i].designation);
		printf("enter salary:");
		scanf("%d",&a[i].salary);
	}	
	int j,k;
	struct emp temp;
	for(j=0;j<n;j++)
	{
		for(k=0;k<n-1;k++)
		{
			if(a[k].salary>a[k+1].salary)
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
	printf("highest salary is:%d\n",a[n-1].salary);
	printf("lowest salary is:%d\n",a[0].salary);
	int p,sum=0;
	for(p=0;p<n;p++)
	{
		sum=sum+a[p].salary;
		
	}
	printf("sum of salaries is:%d\n",sum);
	
}
