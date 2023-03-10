#include<stdio.h>
int add()
{
	int a,b;
	printf("Enter the values :");
	scanf("%d%d",&a,&b);
	return a+b;
}
void main()
{
	int c;
	c=add();
	printf("Sum of 2 numbers=%d",c);
}

