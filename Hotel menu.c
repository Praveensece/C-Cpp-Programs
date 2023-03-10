#include<stdio.h>
int main()
{
	int choice;
	int pizza=75,Donut=50,Sandwhich=30,rate;
	int a,b,c,total;
	char select;
	printf("Welcome to Dominoz pizza!");
    x:
	printf("\nSelect from our menu sir : 1.Pizza 2.Donut 3.Sandwhich :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nHow many pizza do you want sir :");
			scanf("%d",&a);
			rate=pizza*a;
			printf("\nYour bill amount is :%d",rate);
			break;
		case 2:
			printf("\nHow many Donuts do you want sir :");
			scanf("%d",&b);
			rate=Donut*b;
			printf("\nYour bill amount is :%d",rate);
			break;
		case 3:
			printf("\nHow many Sandwhich do you want sir :");
			scanf("%d",&c);
			rate=Sandwhich*c;
			printf("\nYour bill amount is :%d",rate);
			break;
	}
	total=rate;
	printf("Do you want anyother sir :");
	scanf("\n%c",&select);
	while(select=='y')
    {
    	rate=total;
    	goto x;
    	rate=total+rate;
	}
	printf("Total amount is :%d",rate);
	printf("\nThank you sir visit again !");
	return 0;
}
