#include<stdio.h>
#include<math.h>
int main()
{
	int num,digit,count=0,sum=0,t;
	printf("Enter the number :");
	scanf("%d",&num);
	printf("%d",num);
	t=num;
	while(num>0 | num!=0)
	{
		digit=num%10;
		count = count+1;
		num=num%10;
	}
	while(t>0 | t!=0)
	{
		digit=t%10;
		sum=sum+pow(digit,count);
		t=t/10;
	}
	if(sum==t)
	  printf("\nAmstrong number");
	else 
	  printf("\nNot a amstrong number");
	return 0;
}
