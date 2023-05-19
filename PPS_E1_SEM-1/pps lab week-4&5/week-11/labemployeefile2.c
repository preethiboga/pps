#include<stdio.h>
#include<stdio.h>
int main()
{
	FILE*fpointer;
	char hobbies[100];
	char strengths[100];
	fpointer=fopen("username.txt","r++");
	fpointer=fopen("username.txt","a");
	if(fpointer==NULL)
	{
		printf("file does not exists\n");
		return 0;
	}
	printf("enter your hobbies:");
	scanf("%s",hobbies);
	fprintf(fpointer,"\nhobbies:%s",hobbies);
	printf("enter your strengths:");
	scanf("%s",strengths);
	fprintf(fpointer,"\nstrengths:%s",strengths);
	remove(strengths);
	return 0;
}
