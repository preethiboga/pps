#include<stdio.h>
int insertionsort(int*p,int n);
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int*p;
	p=&a[0];
	insertionsort(p,n);
}
int insertionsort(int*p,int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		t=*(p+i);
		for(j=i;j>0&&(*(p+j-1)>t);j--)
		{
			*(p+j)=*(p+j-1);
		}
		*(p+j)=t;
		printf("array status after each pass %d:",i);
		int k;
		for(k=0;k<n;k++)
		{
			printf("%d ",*(p+k));
		}
		printf("\n");
	}
	
}
