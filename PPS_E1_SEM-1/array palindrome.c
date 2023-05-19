#include<stdio.h>
int palindrome(int arr[],int start,int end);
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(palindrome(a,0,n-1))
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
	
}
int palindrome(int arr[],int start,int end)
{
	if(start>=end)
	return 1;
	else if(arr[start]==arr[end])
	return(palindrome(arr,start+1,end-1));
	else
	return 0;
	
}
