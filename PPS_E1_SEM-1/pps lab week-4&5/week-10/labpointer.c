#include<stdio.h>
struct details
{
	char name[20];
	int age;
	char city[20];
};
void main()
{
   int n,i;
   printf("enter n:");
   scanf("%d",&n);
   struct details a[n];
   struct details*p;
   p=&a[0];
   for(i=0;i<n;i++)
   {
   	 printf("enter name:\n");
   	 scanf("%s",(p+i)->name);
   	 printf("enter age:\n");
   	 scanf("%d",&(p+i)->age);
   	 printf("enter city:\n");
   	 scanf("%s",(p+i)->city);	 
   }
   p=&a[0];
   for(i=0;i<n;i++)
   {
   	printf("%s\t%d\t%s\t\n",(p+i)->name,(p+i)->age,(p+i)->city);
   }
   	
}
