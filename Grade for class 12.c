#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	float avg;
	printf("Enter your Language mark :");
	scanf("%d",&a);
	printf("\nEnter your English mark : ");
	scanf("\n%d",&b);
	printf("\nEnter your Maths mark :");
	scanf("\n%d",&c);
	printf("\nEnter your Physics mark :");
	scanf("\n%d",&d);
	printf("\nEnter your Chemistry mark :");
	scanf("\n%d",&e);
	printf("\nEnter your Computer Science mark :");
	scanf("%d",&f);
	g=a+b+c+d+e+f;
	printf("\nYour Total mark is :%d",g);
	avg =(float)g/6;
	printf("\nYour Average is : %.2f",avg);
}
