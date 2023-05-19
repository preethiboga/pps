#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,j,k,i,sum,s;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        s=a[0]+a[1];
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                sum=a[j]+a[k];
                if(sum<s)
                {
                    s=sum;
                }
            }
        }
        printf("%d\n",s);
    }
	// your code goes here
	return 0;
}


