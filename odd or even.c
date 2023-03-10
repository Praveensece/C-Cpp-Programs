#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d",a);
	 printf(" is even");
	}
	 
	 if(a%2!=0)
	 {
	   printf("\n%d",a);
	   printf(" is odd");
     }
	 return 0;
}
