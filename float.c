#include<stdio.h>
int main()
{
	float a;
	float f1,f2;
	printf("Enter the value of f1 :");
	scanf("%f",&f1);
	printf("Enter the value of f2 :");
	scanf("\n%f",&f2);
	a = (int)f1+f2;
	printf("The value = %f",a);
	return 0;
}
