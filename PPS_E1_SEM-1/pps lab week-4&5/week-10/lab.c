#include<stdio.h>
struct student
{
	int rollnumber;
	char name[20];
	int marks;
	char grade[10];
	
};
void main()
{
	int n,i;
	printf("enter number of students:");
	scanf("%d",&n);
	struct student std[n];
	for(i=0;i<n;i++)
	{
	   printf("enter roll number:");
	   scanf("%d",&std[i].rollnumber);
	   printf("enter name:");
	   scanf("%s",std[i].name);
	   printf("enter marks:");
	   scanf("%d",&std[i].marks);
	   printf("enter grade:");
	   scanf("%s",std[i].grade);
    }
    for(i=0;i<n;i++)
    {
    	printf("%d\n%s\n%d\n%s\n",std[i].rollnumber,std[i].name,std[i].marks,std[i].grade);
	}
	int r,j;
	printf("enter rollnumber:");
	scanf("%d",&r);
	for(j=0;j<n;j++)
	{
		if(std[j].rollnumber==r)
		{
			printf("%d",std[j].marks);
			break;
		}
	}
	if(j==n)
	{
		printf("not found");
	}
}

