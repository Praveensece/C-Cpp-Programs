#include<stdio.h>
int main()
{
	int password;
	char name;
	printf("Welcome to Infosys!");
	printf("\nPls Enter your name :");
	scanf("%c",&name);
	switch(name)
	{
		case 'P':
		   printf("\nGood Morning Praveen !");
		   printf("\nPls Enter your Password:");
		   scanf("\n%d",&password);
		case 0:
			switch(password)
			{
				case 21985:
				   printf("\nYou are permitted to access our company");
				   break;

			default:
				printf("\nYou are not permitted to our company ");
				break;
		    }
		    break;
		    
		case 'N':
			printf("\nGood morning Naveen!");
			printf("\nPls Enter your Password:");
		    scanf("\n%d",&password);
		case 1:
				switch(password)
			{
				case 102008:
				   printf("\nYour are permitted to access our company");
				   break;
			default:
				printf("\nYou are not permitted to our company ");
				break;
		    }
	}
}
