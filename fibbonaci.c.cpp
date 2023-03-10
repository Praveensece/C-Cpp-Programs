#include<stdio.h>
int main()
{
	int i,limit,a=0,b=1,c;
	printf("Enter the limit :");
	scanf("%d",&limit);
	printf("%d %d",a,b);
	i=3;
	while(i<=limit)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
		i++;			
	}
	return 0;
	
}
