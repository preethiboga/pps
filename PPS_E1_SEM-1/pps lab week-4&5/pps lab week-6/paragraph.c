#include<stdio.h>
#include<string.h>
void main()
{
	char s[100];
	int i,line=0,word=0,ch=0;
	printf("enter paragraph terminated with ~:");
	scanf("%[^~]",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='\n')
		{
			line++;
			word++;
		}
		else
		{

			if(s[i]==' '||s[i]=='\t')
		    {
		    	word++;
		    	ch++;
		    	
		    }	   	
		
		else
		{ 
		   ch++;
		}
	   }
	
	    
	}
	printf("no.of lines is:%d\n",line+1);
	printf("no.of characters are:%d\n",ch);
	printf("no.of words are :%d\n",word);
}
