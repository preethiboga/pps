#include<stdio.h>
void main(){
int n,u,t;
printf("enter the three digit number");
scanf("%d",&n);
u=n%10;
n=n/10;
t=n%10;
n=n/10;
printf("%hundreds,%tens,%units",n,t,u);
}
