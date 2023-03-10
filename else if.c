#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("\nEnter the second number :");
	scanf("\n%d",&b);
	printf("\nEnter the Third number :");
	scanf("\n%d",&c);
	if(a>b && a>c)
	  printf("\n a is bigger :%d",a);
	else if(b>a && b>c)
	  printf("\n b is bigger :%d",b);
	else 
	  printf("\nc is bigger : %d",c);
	return 0;
}
