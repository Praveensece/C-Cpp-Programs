#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	if(a%2==0)
	  printf("Even number :%d",a);
	else
	  printf("odd number :%d",a);
	return 0;
}
