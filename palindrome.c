#include<stdio.h>
int main()
{
	int digit,num,reverse=0,temp;
	printf("Enter the number :");
	scanf("%d",&num);
	temp=num;
	while(num>0 | num!=0)
	{
		digit=num%10;
		reverse=reverse*10+digit;
		num=num/10;
	}
	if(reverse==temp)
	  printf("The given number is palindrome %d",reverse);
	else
	  printf("The given number is not palindrome");
	return 0;
}
