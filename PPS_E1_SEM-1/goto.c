#include<stdio.h>//goto is not used in loops
void main()
{
	printf("good morning");
	goto label;
	    printf("happy morning");//if label and gotolabel interchanged we get infinite loop
	label:
		printf("preethi");
	    
}
