#include<stdio.h>
#include<string.h>
void main()
{
	FILE*f;
	f=fopen("preethi.txt","a");
		if(f==NULL)
		{
			printf("not exist");
		}
		else
		{
			printf("opened");
			printf("enter content");
		    char c;
		    while(c=getchar()!='#')
	    	{
			    fputc(c,f);
		   }
		   fclose(f);
	   }
   f=fopen("preethi.txt","r");
   char ch=fgetc(f);
   while(ch!=EOF)
   {
   	  printf("%c",ch);
   	  ch=fgetc(f);
   }
}
