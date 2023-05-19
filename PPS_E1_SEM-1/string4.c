#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="SPARK";
	char str2[]="programming";
	strcat(str1,str2);
	//printf("string conctenation is %s",string);
	int comp;
	comp=strcmp(str1,str2);
	printf("%d\n",comp);
	strcmpi(str1,str2);
	strlwr(str1);
	printf("lower case %s\n",str1);
	strupr(str2);
	printf("upper case %s",str2);
	
	
}
