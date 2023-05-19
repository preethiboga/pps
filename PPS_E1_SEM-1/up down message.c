#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a,b values:");
	scanf("%d %d",&a ,&b);
	if(a<b)
	  {
	    	printf("up");
	  }
    else if(b<a)
      {
		  printf("down");
	  }
	else if(b==a)
	    {
	    	printf("equal");
        }
    else
      {
      	printf("error");
	  }
	
}
