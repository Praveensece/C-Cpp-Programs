#include<stdio.h>
int main()
{
	int a,n;
	printf("Enter the maximum no of limits :");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		if(a%2==0)
		  printf("\nEven mumber : %d",a);
		else
		  printf("\nOdd number :%d",a);
	}
	return 0;
}
