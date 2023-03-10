#include<stdio.h>
int main()
{
	int a,b,rows,ex=1;
	printf("Enter the no of rows :");
	scanf("%d",&rows);
	a=1;
	while(a<=rows)
	{
		b=1;
		while(b<=a)
		{
			printf("%d\t",ex);
			b++;
			ex++;
		}
		a++;
		printf("\n");
	}
	return 0;
	
}
