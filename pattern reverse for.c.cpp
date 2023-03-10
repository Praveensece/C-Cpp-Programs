#include<stdio.h>
int main()
{
	int a,b,ex,rows;
	printf("Enter the no of rows :");
	scanf("%d",&rows);
	ex=rows*(rows+1)/2;
	for(a=rows;a>=1;a--)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d\t",ex);
			ex--;
		}
		printf("\n");
	}
	return 0;
}
