#include<stdio.h>
void main()
{
	int t,i,j,l,c,n;
	scanf("%d",&t);
	while(t--)
	{
		char ch[1000];
		scanf("%s",&ch);
		l=strlen(ch);
		if(l%2==0)
		  n=(l/2);
		else
		   n=(l/2)+1;
		i=0;c=0;
		while(i<l/2)
		{
			j=n;
			while(j<l)
			{
				if(ch[i]==ch[j])
				{
				  c++;
			    }
			    j++;
			}
			i++;
		
	    }    
		if(c==l/2)
		printf("yes\n");
		else
		printf("no\n");	
	}
}
