#include<stdio.h>
void main()
{
	FILE*fp;
	fp=fopen("employee.txt","r");
	if(fp==NULL)
	{
		printf("not exist");
		exit(0);
	}
	FILE*fp2;
	fp2=fopen("preethi.txt","w");
	if(fp2==NULL)
	{
		printf("not exist");
		exit(0);
	}
	else
	{
		char ch=fgetc(fp);
		while(ch!=EOF)
		{
			fputc(ch,fp2);
			ch=fgetc(fp);
		}
		fclose(fp);
		fclose(fp2);
	}
	fp2=fopen("preethi.txt","r");
	char c=fgetc(fp2);
	while(c!=EOF)
	{
		printf("%c",c);
		c=fgetc(fp2);
	}
}
