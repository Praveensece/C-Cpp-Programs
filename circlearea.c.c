#include<stdio.h>
int main()
{
	float pi=3.14,rad,area;
	printf("Enter the radius :");
	scanf("%f",&rad);
	area =(float)pi*rad*rad;
	printf("The area is :%f",area);
	return 0;
}
