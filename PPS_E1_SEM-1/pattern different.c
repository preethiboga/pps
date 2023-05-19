#include <stdio.h>

int main(void) {
    
        int n,i,j,s;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<2;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    s=a[i];
                    a[i]=a[j];
                    a[j]=s;
                }
            }
       }
       for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
	// your code goes here
	return 0;
}


