#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	float avg;
	printf("Enter your Language mark :");
	scanf("%d",&a);
	printf("\nEnter your English mark : ");
	scanf("\n%d",&b);
	printf("\nEnter your Maths mark :");
	scanf("\n%d",&c);
	printf("\nEnter your Physics mark :");
	scanf("\n%d",&d);
	printf("\nEnter your Chemistry mark :");
	scanf("\n%d",&e);
	printf("\nEnter your Computer Science mark :");
	scanf("%d",&f);
	g=a+b+c+d+e+f;
	printf("\nYour Total mark is :%d",g);
	avg =(float)g/6;
	printf("\nYour Average is : %.2f",avg);
	if(avg>=90)
          printf("\nCongratulations! Your Grade is A+ ");
	else if(avg>=80 && avg<90)
	      printf("\nCongratulations! Your Grade is A ");
    else if(avg>=75 && avg<80)
	      printf("\nCongratulations! Your Grade is B+ ");
	else if(avg>=70 && avg<75)
	      printf("\nCongratulations! Your Grade is B ");
    else if(avg>=65 && avg<70)
	      printf("\nCongratulations! Your Grade is C+ ");
	else if(avg>=60 && avg<65)
	      printf("\nCongratulations! Your Grade is C ");
	else if(avg>=55 && avg<60)
   	      printf("\nCongratulations! Your Grade is D+ ");
	else if(avg>=50 && avg<55)
	      printf("\nCongratulations! Your Grade is D ");
	else if(avg>=40 && avg<50)
	     printf("\nYou got failed and Your Grade is E ");
	return 0;  
}
