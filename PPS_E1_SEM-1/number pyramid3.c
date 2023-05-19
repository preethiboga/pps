#include<stdio.h>
main()
{
	int i,space=1,j,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(space=n-i;space>=1;space--)
		printf("  ");
		for(j=1;j<=i;j++)
		printf("%d   ",i);
	    printf("\n");
		
	}
	
}
