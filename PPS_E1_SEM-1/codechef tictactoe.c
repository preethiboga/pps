#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char arr[3][3];
        int a=0,b=0,cx=0,co=0,c_=0,i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
            	scanf("%s",&arr[i][j]);
                if(arr[i][j]=='X')
				cx++;
                else if(arr[i][j]=='O')
				co++;
                else if(arr[i][j]=='_')
				c_++;
            }
        }
    
       for(i=0;i<3;i++)
       {
           if(arr[i][0]==arr[i][1] && arr[i][2]==arr[i][1])
           {
              if(arr[i][0]=='X')
              a++;
              else if(arr[i][0]=='0')
              b++;
           }
        }
        for(i=0;i<3;i++)
        {
           if(arr[0][i]==arr[1][i] && arr[2][i]==arr[1][i])
           {
              if(arr[0][i]=='X')
              a++;
              else if(arr[0][i]=='0')
              b++;
            }
        }
        for(i=0;i<3;i++)
        {
            if(arr[0][0]==arr[1][1] && arr[2][2]==arr[1][1])
            {
               if(arr[0][0]=='X')
               a++;
               else if(arr[0][0]=='0')
               b++;
            }
        }
        if(arr[0][2]==arr[1][1] && arr[2][0]==arr[1][1])
            {
               if(arr[1][1]=='X')
               a++;
               else if(arr[1][1]=='0')
               b++;
            }
        if(co>cx)printf("3\n");
        else if(cx-co>1)printf("3\n");
        else if((cx>co) && a==1 && b==0)printf("1\n");
        else if((cx==co) && a==0 && b==1)printf("1\n");
        else if((c_==0) && (a+b==0))printf("1\n");
        else if((c_==0) && (a==2))printf("1\n");
        else if((c_>0) && (a+b==0))printf("2\n");
        else printf("3\n");
    }    
	    return 0;
    
}


