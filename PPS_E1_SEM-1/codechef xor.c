#include<stdio.h>
#include<math.h>
int power(long long x,unsigned int y,int p);
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		long long modulo=pow(10,9)+7;
		int ans=power(2,n-1,modulo);
		printf("%d",ans);
		return 0;
	}
}
int power(long long x,unsigned int y,int p)
{
	int res=1;
	x=x%p;
	if(x==0)
	return 0;
	while(y>0)
	{
		if(y & 1)
		res=(res*x)%p;
		y=y>>1;
		x=(x*x)%p;
	}
	return res;
}
