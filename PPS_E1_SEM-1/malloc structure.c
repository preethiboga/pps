#include<stdio.h>
#include<stdlib.h>
struct course
{
	int marks;
	char subject[30];
};
int main()
{
	struct course*ptr;
	int n,i;
	printf("enter the no.of records:");
	scanf("%d",&n);
	ptr=(struct course*)malloc(n*sizeof(struct course));
	for(i=0;i<n;++i)
	{
		printf("enter marks and subject:");
		scanf("%s %d",(ptr+i)->subject,&(ptr+i)->marks);
	}
	printf("displaying information:\n");
	for(i=0;i<n;++i)
	{
		printf("%s\n%d\n",(ptr+i)->subject,(ptr+i)->marks);
	}
	free(ptr);
	return 0;
	
	
}
