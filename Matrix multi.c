#include<stdio.h>
int main()
{
	int m1[10][10],m2[10][10],sum[10][10],a,b,row,col,p[10][10],k;
	printf("\nEnter the no of rows for matrix :");
	scanf("%d",&row);
	printf("\nEnter the column for matrix :");
	scanf("\n%d",&col);
	printf("\nEnter the element for matrix m1 :");
	for(a=0;a<row;a++)
	{
		for(b=0;b<col;b++)
		{
			
			scanf("%d",&m1[a][b]);
		}
	}
	printf("\nThe matrix element is :\n");
	for(a=0;a<row;a++)
	{
		for(b=0;b<col;b++)
		{
			printf("%d ",m1[a][b]);
		}
		printf("\n");
	}
	printf("\nEnter the element for matrix m2 :");
	for(a=0;a<row;a++)
	{
		for(b=0;b<col;b++)
		{
			
			scanf("%d",&m2[a][b]);
		}
	}
	printf("\nThe matrix element is :\n");
	
	for(a=0;a<row;a++)
	{
		for(b=0;b<col;b++)
		{
			printf("%d ",m2[a][b]);
		}
		printf("\n");
	}
	printf("The product of two matrix is :\n");
	for(a=0;a<row;a++)
	{
		for(b=0;b<col;b++)
		{
		    for(k=0;k<col;k++)
		    {
		        p[a][b]=p[a][b]+(m1[a][k]*m2[k][b]);
		    }
		}
	}
		for(a=0;a<row;a++)
	{
		for(b=0;b<col;b++)
		{
	
		        printf("%d ",p[a][b]);
		}
		printf("\n");
	}

	return 0;
}
