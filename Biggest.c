#include<stdio.h>
int main()
{
	int a,b;
	print("Enter the First number :");
	scanf("%d",&a);
	printf("\nEnter the second number :");
	scanf("\n%d",&b);
	if(a>b)
	  printf("a is bigger : %d",a);
	else 
	  printf("b is bigger :%d",b);
	return 0;
}
