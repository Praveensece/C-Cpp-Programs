#include<stdio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
void main()
{
	int a,b,d;
	printf("Enter the values :");
	scanf("%d%d",&a,&b);
	d=add(a,b);
	printf("Sum of 2 numbers=%d",d);
}


