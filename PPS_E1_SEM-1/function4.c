#include<stdio.h>
void dispaly(char ch)
{
	printf("%c",ch);
}
int main()
{
	int i;
	char arr[]={'a','b','c','d','e'};
	for(i=0;i<5;i++)
	{
		display(arr[i]);
	}
	return 0;
}
