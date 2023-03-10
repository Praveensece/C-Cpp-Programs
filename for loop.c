#include<stdio.h>
int main()
{
	char c;
	int a,b;
	printf("Enter the character to print :");
	scanf("%c",&c);
	for(a=1,b=0;a<=10;a++,b++)
	{
		printf("\n%c",c);
	}
	return 0;
}
