#include<stdio.h>
int main()
{
	FILE*fmenu;
	char ch;
	fmenu=fopen("hotel menu.txt","w");
	printf("enter text:");
	while((ch=fgetc(fmenu))!=EOF)
	{
		putc(ch,fmenu);
	}
	fclose(fmenu);
	fopen("hotel menu.txt","r");
	printf("menu:\n");
	while((ch=fgetc(fmenu))!=EOF)
	{
		printf("%c",ch);
	}
	
}
