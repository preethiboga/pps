#include<stdio.h>
int main()
{
	int n,i;
	int nth;
	int n1=0;
	int n2=1;
	printf("enter n:");
	scanf("%d",&n);
	printf("%d\n%d\n",n1,n2);
	for(i=0;i<n-2;i++)
	{          
		nth=n1+n2;
		printf("%d\n",nth);
		n1=n2;
		n2=nth;
		
	
	}
    return 0;
	
}
