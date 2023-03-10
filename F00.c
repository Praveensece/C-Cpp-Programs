#include<stdio.h>
void add();
void main()
{
	 add();
}
void add()
{
	int a,b,c;
	printf("Enter the 2 numbers :");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Sum of 2 numbers= %d",c);
}
