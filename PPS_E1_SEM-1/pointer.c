#include<stdio.h>
void main()
{
	int var=10;
	int*ptr1;
    ptr1=&var; 
	int**ptr2;
	ptr2=&ptr1;
	printf("%d\n",var);
	printf("%d\n",*ptr1);
	printf("%d\n",**ptr2);
}
