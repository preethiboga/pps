#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int tablebooking(void);
int menu(void);
int roombooking(void);
int bill(int arr[],int m);
int offer(int mill);
void review(void);

static int h;
int m,arr[20],i,g,x;

int main()
{
	while(1)
	{
		int s;
                printf("\n");
                printf("<<WELCOME TO STAR LIGHT HOTEL>>\n");
                printf("\n");
		printf("press 1 for table booking:\n");
		printf("press 2 for menu:\n");
		printf("press 3 for room booking:\n");
		printf("press 4 for bill:\n");
		printf("press 5 for offer:\n");
                printf("press 6 for review:\n");
	 	printf("enter your choice:\n");
		scanf("%d",&x);
	        
               switch(x)
	      {
		case 1: tablebooking();
                        break;
                case 2: menu();
                        break;
                case 3: roombooking();
                        break;
                case 4: s=bill(arr,m);
                        printf("your bill before any offer is %dRs/-\n",s);
                        break;
                case 5: offer(s);
                        break;
                case 6: review();
                        break;
                default : printf("sorry!! invalid input,try again:\n");


	     }
       }
		
  }

 int tablebooking()
 {      printf("\n");
	static int t;
        printf("<<2 tables are available in our hotel>>\n");
        printf("At present only %d vacant tables are availabe in our hotel:\n",2-t);
	printf("\n");

       if(t<2)
       { printf("your table is booked at table number %d:\n",t);
           t++;
       }

        else
        printf("sorry to say!! table is not available:\n");	
  }	

int menu()
{
        FILE*fp;
	fp=fopen("menu2.txt","r");
	char ch;
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
	}
        fclose(fp);
  
        printf("\n");
       
        char text[]="yes";
        
        while(!strcmp(text,"yes"))
        {
	
	  printf("enter number of food items to order:\n");
	  scanf("%d",&m);
          printf("enter item number given in menu to order food:\n");
          for(i=0;i<m;i++)
          {
             
              printf("item number: %d\n",i+1);
              scanf("%d",&arr[i]);
          }
          int j;
   
          for(i=0;i<m-1;i++)
           {                          
            for(j=0;j<m-1-i;j++)
             {
                if(arr[j]>arr[j+1])
                 {
                   int temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
                 }
               }
           }       
                 
                printf("\n");
                int p;
                for(i=0;i<m;i++)
                 {  if(arr[i]<=13&&(i+1)==m)
                      {  printf("your order is placed!! kindly wait for few minutes...\n");
                         p=0;
                         break;
                      }
                 }
         
                     if(p!=0)
                     {
                     printf("sorry to say!! your order is not placed....\n");
                     printf("requesting you to enter food items within the menu:\n");
                     printf("enter \'yes\' if you want place the order:\n");
                     printf("enter \'no\' if you don't want to place the order:\n");
                     scanf("%s",text);
                         if(strcmp(text,"no")==0)
                          {    review();
                               break;
                           }
                           else
                         {  menu();
                            break;
                         }
                    }
                   else
                  { if(p==0)
                    
                    break;

                 }
   }
}



int roombooking()
    {   printf("\n");
        char text[]="yes";
        g=0;
        while(strcmp(text,"yes")==0)
        {  
            printf("enter \'yes\' to book the room:\n");
            printf("enter \'no\' to deny the room booking:\n");
        
           scanf("%s",text);
           if(strcmp(text,"yes")==0)
           {
              printf("<<3 Rooms are available in our hotel>>\n");
              printf("At present Just %d vacant rooms are availabe in our hotel:\n",3-h);
	      printf("\n");
               if(h<3)
               {  printf("your Room is booked at room number %d:\n",h);
                    h++;
                    g++;
                   break;
               }

               else
               {   printf("sorry to say!! room is not available:\n");	
                   break;
                    
               }
         }

         else
         {   
             printf("its okay!! thanks for your visit to roombooking section:\n");
             
             break;
         }
     
   }
}

int bill(int arr[],int m)
{   
      int bill=0;
      printf("\n");
     int a[13]={225,225,225,160,325,325,325,525,600,575,525,625,900};
     
      for(i=0;i<m;i++)
        {    
         bill=bill+a[arr[i]-1];
        }  

    if(g!=0)
    {  printf("bill for room charge is 4500Rs/-\n");
    
       bill=bill+4500;
    }
  
     return bill;  
}
     

 
int offer(int mill)
{  int discount;
   printf("\n");
   if(mill>=1500&&mill<2000)
   {
      printf("congratulations!! you have got 5%% discount on your bill:\n");
     
      discount=mill*5/100;
      printf("your bill is %dRs/-,kindly pay at reception counter:\n",discount);
   }

   else if(mill>=2000&&mill<4500)
   {  
       printf("congratulations!! you have got 10%% discount on your bill:\n");
    
       discount=mill*10/100;
       printf("your bill is %dRs/-,kindly pay at reception counter:\n",discount);
   }
   else
   {
      printf("sorry to say!! your not eligible for any offer:\n");
      printf("your bill is %dRs/-\nkindly pay at reception counter:\n",mill);
   }
}
 

void review()
{   
    char c;
    printf("\n");
    printf("Hope you have enjoyed our service:\n");
    printf("Requesting you to give an feedback on our service terminated by '#':\n");
    printf("\n");
    while((c=fgetc(stdin))!='#');
   
    FILE *fp1;
    fp1=fopen("feedback.txt","r");
    char ch;
    while(1)
    {
       ch=fgetc(fp1);
       if(ch==EOF)
        break;
       printf("%c",ch);
    }
   fclose(fp1);
  printf("\n");
}


     






