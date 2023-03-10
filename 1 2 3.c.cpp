#include<stdio.h>
int main()
{
	int a,b,rows,ex=1;
	printf("Enter the no of rows :");
	scanf("%d",&rows);
	for(a=1;a<=rows;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d\t",ex);
			ex++;
		}
		printf("\n");
	}
	return 0;
}
