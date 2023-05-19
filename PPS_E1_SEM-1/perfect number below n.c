#include<stdio.h>
void main()
{
	int i,n,sum,j;
	printf("enter n:");
	scanf("%d",&n);
	printf("perfect numbers below %d are:\n",n);
	for(i=1;i<=n;i++)
	{ 
	  sum=0;
 	  for(j=1;j<i;j++)
 	    {
		   if(i%j==0)
		   sum=sum+j;
 	    }
 	    if(sum==i)
 	    {
 	    	printf("%d\n",i);
		 }
 	    	
    }
     
	
}

