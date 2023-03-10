#include<stdio.h>
void add(int x,int y)
{
	int c;
	c=x+y;
	printf("Sum of 2 numbers=%d",c);
}
void main()
{
	int a,b;
	printf("Enter the values :");
	scanf("%d%d",&a,&b);
	add(a,b);
}

