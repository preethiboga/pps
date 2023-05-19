#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*pointer;
	int empid,salary,adress,experience;
	char empname[100];
	char designation[100];
	char qualification[100];
	char researchwork[100];
	long phone;
	char city[100];
	pointer=fopen("username.txt","w");
	if(pointer==NULL)
	{
		printf("file doesn't exist\n");
		return 0;
	}
	
		printf("enter employee ID:");
		scanf("%d",&empid);
		fprintf(pointer,"\nemployee ID:%d",empid);
		printf("enter employee name:");
		scanf("%s",empname);
		fprintf(pointer,"\nemployee name:%s",empname);
		printf("enter designation:");
		scanf("%s",designation);
		fprintf(pointer,"\ndesignation:%s",designation);
		printf("enter qualification:");
		scanf("%s",qualification);
		fprintf(pointer,"\nqualification:%s",qualification);
		printf("enter salary:");
		scanf("%d",&salary);
		fprintf(pointer,"\nsalary:%d",salary);
		printf("enter experience:");
		scanf("%d",&experience);
		fprintf(pointer,"\nexperince:%d",experience);
		printf("enter researchwork:");
		scanf("%s",researchwork);
		fprintf(pointer,"\nresearchwork:%s",researchwork);
		printf("enter adress:");
		scanf("%d",&adress);
		fprintf(pointer,"\nadress:%d",adress);
		printf("enter city:");
		scanf("%s",city);
		fprintf(pointer,"\ncity:%s",city);
		printf("enter phone:");
		scanf("%ld",phone);
		fprintf(pointer,"\nphone:%ld",phone);
		fclose(pointer);
		return 0;
	
}
