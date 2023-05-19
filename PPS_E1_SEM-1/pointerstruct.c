#include<stdio.h>
struct dog
{
	char name[10];
	char breed[10];
	int age;
	char color[10];
};
int main()
{
	struct dog mydog={"tyke","bulding",5,"whilte"};
	struct dog*ptrdog;
	ptrdog=&mydog;
	printf("dogs name :%s\n",ptrdog->name);
	printf("dogs name :%s\n",(*ptrdog).name);//intsed of using * and . we use ->
	//*ptrdog.name is not valid becoz . have higher precedence so use of ()is must
	printf("dogs breed :%s\n",ptrdog->breed);
	printf("dogs breed :%s\n",(*ptrdog).breed);
	printf("dogs age:%d\n",ptrdog->age);
	printf("dogs color:%s\n",ptrdog->color);
	
}
