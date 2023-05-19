#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		div(a[i]);
    }
    return 0;
}
int div(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==3)
	printf("yes\n");
	else
	printf("no\n");
	return 0;
}
