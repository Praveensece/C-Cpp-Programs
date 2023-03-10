#include<stdio.h>
int main()
{
	int rows,a,b,pascal;
	printf("Enter the no of rows :");
	scanf("%d",&rows);
	for(a=1;a<=rows;a++)
	{
		pascal=1;
		for(b=1;b<=a;b++)
		{
			printf("%d\t",pascal);
			pascal=pascal*(a-b)/b;
		}
		printf("\n");
	}
	return 0;
}
