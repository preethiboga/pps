#include<stdio.h>
struct std
{
	int id;
	char name[30];
	int hin;
	int eng;
	int maths;
	int science;
	int social;
};
int main()
{
	int n,i,j,sum;
	char g;
	scanf("%d",&n);
	struct std a[n];
	for(i=0;i<n;i++)
	{
		printf("enter id:");
		scanf("%d",&a[i].id);
		printf("enter name:");
		scanf("%s",a[i].name);
		printf("enter hindi marks:");
		scanf("%d",&a[i].hin);
		printf("enter english marks:");
		scanf("%d",&a[i].eng);
		printf("enter maths marks:");
		scanf("%d",&a[i].maths);
		printf("enter science marks:");
		scanf("%d",&a[i].science);
		printf("enter social marks:");
		scanf("%d",&a[i].social);
	}

	for(i=0;i<n;i++)
	{
		if((a[i].hin<=100)&&(a[i].eng<=100)&&(a[i].maths<=100)&&(a[i].science<=100)&& (a[i].social<=100))
		{
	        sum=0;
		    for(j=0;j<5;j++)
		    {
		     	sum=sum+a[j].hin+a[j].eng+a[j].maths+a[j].science+a[j].social;	
	     	}
		    if(sum>460)
		    {
     	        printf("A\n");
     	        g='A';
            }
    	    else if(sum<460 && sum>400)
	        {
	    	    printf("B\n");
	    	    g='B';	
	    	}
	        else
	        {
	           printf("remedial");
	           g="remedial\n";
	        }
     	}
     	else
     	printf("enter correct marks\n");
	}
	int r,c=0;
	printf("enter id:");
	scanf("%d",&r);
	for(i=0;i<n;i++)
	{
		c=c+1;
		if(a[i].id==r)
		{
			printf("%d\n%d\n%d\n%d\n%d\n",a[i].hin,a[i].eng,a[i].maths,a[i].science,a[i].social);
		}
	}

}
