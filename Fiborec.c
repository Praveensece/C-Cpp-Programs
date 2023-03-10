#include<stdio.h>
int fib(int);
void main()
{
	int i,f,num;
	printf("Enter the limit :");
	scanf("%d",&num);
	printf("The fibbonacci series is \n");
	for(i=0;i<num;i++)
	{
		f=fib(i);
		printf("%d\t",f);
	}
	int fib(int n)
	{
		if(n==0)
		return 0;
		else if(n==1)
		return 1;
		else
		   return fib(n-1)+fib(n-2);
	}

}
