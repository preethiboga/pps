#include<stdio.h>
int sumarray(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
    }
    return sum;
}
int main()
{
	int n,sum,i,a[1000];
	printf("enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=sumarray(a,n);
	printf("%d",sum);

}

