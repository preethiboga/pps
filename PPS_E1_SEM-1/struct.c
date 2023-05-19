//read and write data from structure
#include<stdio.h>
struct student
{
	char name[20];
	int id;
	float cgpa;
	char adress[30];
};
void main()
{
	struct student std1,std2;//instead writing std1,std2,std3....we can declare array like std[100] std[0],std[1]....std[100] is info of 100 students
	printf("enter student data");
	scanf("%s",std.name);
	scanf("%d",&std.id);
	scanf("%f",&std.cgpa);
	scanf("%s",std.adress);
	printf("%s \n %d \n %f \n %s",std.name,std.id,std.cgpa,std.adress);
}

