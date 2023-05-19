#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE*fptr;
	char ch;
	fptr=fopen("username.txt","w");
	printf("enter text:");
	while((ch=getchar())!='#')
	{
		fputc(ch,fptr);
	}
	fclose(fptr);
	fopen("usename.txt","r");
	printf("\nfile content:\n");
	while(ch=fgetc(fptr)!=EOF)
	{
		printf("%c",ch);
	}
}
