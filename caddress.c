#include<stdio.h>
void swap(int *a,int *b);
void main()
{
	int x,y;
	printf("Enter the number :");
	scanf("%d%d",&x,&y);
	swap(&x,&y);
	printf("The value after swapping :%d%d",x,y);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
}
