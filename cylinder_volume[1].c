#include<stdio.h>
#define PI 3.14
int main()
{
	float r,h;
	printf("enter the values of r,h");
	scanf("%f%f",&r,&h);
	float v=PI*r*h;
	printf("volume of cylinder is:%f",v);
	return 0;
}
