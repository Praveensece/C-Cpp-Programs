#include<stdio.h>
int main()
{
	int a,n;
	printf("Enter the Number :");
	scanf("%d",&a);
	for(n=1;n<=10;n++)
	{
	   printf("\n%dX%d=%d",a,n,a*n);
    }
    
    return 0;
}
