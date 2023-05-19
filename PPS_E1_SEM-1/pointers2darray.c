#include<stdio.h>
void main()
{
	int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,0,1,2}},i,j;
	int*ptr=&arr[0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d ",*((ptr+i*4)+j));
	}
}
