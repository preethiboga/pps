#include<stdio.h>
void main()
{
	const float pi=3.1415;
	float r,area,volume;
	printf("enter radius of the sphere:");
	scanf("%f",&r);
	area=4*pi*r*r;
	volume=(4*pi*r*r*r)/3;
	printf("area  sphere is %f",area);
	printf("\n");
	printf("volume of sphere is %f",volume);
}
