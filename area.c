#include<stdio.h>
#define pi 3.14
void main()
{
	float rad,area;
	printf("Enter the radius of a circle :");
	scanf("%f",&rad);
	area=pi*rad*rad;
	printf("Area=%f",area);
}
