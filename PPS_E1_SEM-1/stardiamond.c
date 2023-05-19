# include<stdio.h>
main()
{
	int i,n,j,space;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(space=1;space<=n-i;space++)
		printf("  ");
		for(j=1;j<=2*i-1;j++)
		printf("* ");
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(space=1;space<=i;space++)
		printf("  ");
		for(j=1;j<=2*(n-i)-1;j++)
		printf("* ");
		printf("\n");
		
	}
}
