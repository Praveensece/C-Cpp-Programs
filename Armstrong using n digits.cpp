#include<stdio.h>
#include<math.h>
int main()
{
	int sum=0,count=0,t,number,digit;
	printf("Enter the number :");
	scanf("%d",&number);
	t=number;
	while(number>0 | number!=0)
	{
		number=number/10;
		count=count+1;
	}
	number=t;
	while(t>0 | t!=0)
	{
		digit=t%10;
		sum=sum+pow(digit,count);
		t=t/10;
	}
	if(sum==number)
	  printf("\nAmstrong number");
	else 
	  printf("\nNot a amstrong number");
	  return 0;
	
}
