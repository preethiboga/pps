#include<stdio.h>
main()
{
	FILE*fp;
	struct emp
	{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;
	fp=fopen("employee.txt","r");
	if(fp==NULL)
	{
		puts("cannot open file");
		exit(0);
	}
	while(fscanf(fp,"%s%d%f",e.name,&e.age,&e.bs)!=EOF)
	{
	     printf("%s%d%f",e.name,e.age,e.bs);
	}
	fclose(fp);
}
