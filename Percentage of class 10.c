#include<stdio.h>
int main()
{
	float a,b,c,d,e,f,g;
	printf("Enter your language mark :");
	scanf("%f",&a);
	printf("\nEnter your English mark :");
	scanf("\n%f",&b);
	printf("\nEnter your Maths mark :");
	scanf("\n%f",&c);
	printf("Enter your Science mark :");
	scanf("\n%f",&d);
	printf("\nEnter your Social mark :");
	scanf("\n%f",&e);
	f= a+b+c+d+e;
	g= (f/500)*100;
	printf("\nYour Total is : %.2f",f);
	printf("\nYour percentage of 10th grade is :%.2f",g);
	return 0;
	
}
