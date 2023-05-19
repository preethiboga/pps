#include<stdio.h>
#include<string.h>
main()
{
	FILE*fp;
	fp=fopen("employee.txt","w");
	if(fp==NULL)
	{
		printf("not exist");
		exit(0);
	}
	else
	{
		char name[20];
		int age;
		printf("sucessfully file opened\n");
		printf("enter name:");
		scanf("%s",name);
		fprintf(fp,"name:%s\n",name);
		printf("enter age:");
		scanf("%d",&age);
		fprintf(fp,"age:%d\n",age);
		fclose(fp);
	}
	fp=fopen("employee.txt","r");
	char ch;
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	
}
