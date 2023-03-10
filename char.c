#include<stdio.h>
int main()
{
	int a; 
	char c;
	printf("Enter the character to print :");
	scanf("%c",&c);
	for(a=1;a<=10;)
	{
	   printf("\n%c",c);
	   a=a+1;
    }
    return 0;
}
