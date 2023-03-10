#include<stdio.h>
int main()
{
	int a,b,rows,ex;
	printf("Enter the no of rows :");
	scanf("%d",&rows);
	ex=rows*(rows+1)/2;
	a=rows;
	while(a>=1)
	{
		b=1;
		while(b<=a)
		{
			printf("%d\t",ex);
			b++;
			ex--;
		}
		a--;
		printf("\n");
	}
	return 0;
}
