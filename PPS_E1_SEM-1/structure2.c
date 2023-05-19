//read and write data from structure
#include<stdio.h>
struct student//typedef struct student      if typedef is not used s becomes variable   
{
	char name[20];
	int id;
	float cgpa;
	char adress[30];
};//s;    which is new tag name for student
void main()
{
	struct student std[3];//typedef int x==> x i   typedef is just aliasing    s std[3]
	printf("enter student data");//typedef float y==>y j    y is treated as float so instaed writing float j we write y j
	int i;
	for(i=0;i<3;i++)
	{
	
	scanf("%s",std[i].name);
	scanf("%d",&std[i].id);
	scanf("%f",&std[i].cgpa);
	scanf("%s",std[i].adress);
   }
   student(std);
}
void student(struct student s[3])
{
   int i;
   for(i=0;i<3;i++)
   {
	printf("%s \n %d \n %f \n %s",s[i].name,s[i].id,s[i].cgpa,s[i].adress);
   }
}


