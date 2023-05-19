
#include<stdio.h>
union student
{
	char name[20];
	int age;
	float cgpa;
};
void main()
{
	union student std;
	char name[20]="preethi";
	std.age=18;
	std.cgpa=9.8;
	printf("name: %s \n",std.name);
	printf("age:%d \n",std.age);
	printf("cgpa:%f \n",std.cgpa);
	printf("size of union variable %u \n",sizeof(std));
}
	
