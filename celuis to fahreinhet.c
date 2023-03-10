#include<stdio.h>
void main()
{
	float ce,fe;
	printf("Enter the value of fahreinheit :");
	scanf("%f",&fe);
	ce=(fe-32)*(5/9.0);
	printf("celsius = %.2f",ce);
}
