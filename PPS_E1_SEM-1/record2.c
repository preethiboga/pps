#include<stdio.h>
struct marks
{
	int maths;
	int science;
	int telugu;
	int social;
	int english;	
};
main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	struct marks a[n];
	for(i=0;i<n;i++)
	{
		printf("enter maths marks:");
		scanf("%d",&a[i].maths);
		printf("enter science marks:");
		scanf("%d",&a[i].science);
		printf("enter telugu marks:");
		scanf("%d",&a[i].telugu);
		printf("enter social marks:");
		scanf("%d",&a[i].social);
		printf("enter english marks:");
		scanf("%d",&a[i].english);
	}
	
}
