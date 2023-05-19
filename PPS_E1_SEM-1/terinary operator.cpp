#include <stdio.h>
int main()
{
	int a,b,c ,greatest;
	printf("enter 3 digits:");
	scanf("%d%d%d",&a,&b,&c);
	greatest=((a>b)&&(a>c))?a:((b>a)&&(b>c)?b:c);
	printf("the greatest no is : %d",greatest);
	return 0;
}
