#include<stdio.h>
int main()
{
	int a=1,limit,fact=1;
	printf("Enter the number :");
	scanf("%d",&limit);
	while(a<=limit)
	{
		fact=fact*a;
		a++;
	}
	printf("The factoraial is : %d",fact);
	return 0;
}
