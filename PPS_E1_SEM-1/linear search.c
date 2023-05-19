#include<stdio.h>
void main()
{
	int a;
	printf("size of array:");
	scanf("%d",&a);
	int arr[a],i,key,comp=0;
	for(i=0;i<a;i++)
	{
		printf("enter %d element:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("enter key:");
	scanf("%d",&key);
	for(i=0;i<a;i++)
	{
		comp=comp+1;
		if (arr[i]==key)
		{    
			printf("found at postion %d\n",i+1);
			printf("no.of comparisions %d\n",comp);
			break;	
	    }
    
    
       if(comp==a)
	    {
	    	printf("key not found\n");
	    	printf("no.of comparisions %d",a);
		}
    }
			
	
    


    
	
}
