#include<stdio.h>
int main()
{
	int a,n,input,div=1;
	printf("Enter the limit:");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		printf("Enter the input :");
		scanf("%d",&input);
		div=input/div;
	}
	printf("Answer is :%d",div);
	return 0;
}
