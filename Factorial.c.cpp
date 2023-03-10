#include<stdio.h>
int main()
{
	int a,n,f=1;
	printf("Enter the number :");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		f=f*a;
	}
	printf("The factorial is :%d",f);
	return 0;
}
