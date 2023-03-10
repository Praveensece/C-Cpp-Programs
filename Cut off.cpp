#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter your maths mark :");
	scanf("%f",&a);
	printf("\nEnter your physics mark :");
	scanf("\n%f",&b);
	printf("\nEnter your Chemistry mark :");
	scanf("\n%f",&c);
	d = a+(b/2+c/2);
	printf("your cut of is :%.2f",d);
	return 0;
}
