#include<stdio.h>
float arravg(int arr[]);
main()
{
	float avg;
	int arr[]={50,40,60,30,20};
	avg=arravg(arr);
	printf("average is:%.1f%",avg);
	
}
float arravg(int arr[])
{
	int i,sum=0;
	float average;
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	average=(sum/5);
	return average;
}
