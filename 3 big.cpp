#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Enter the values :";
	cin>>num1>>num2>>num3;
	if(num1>num2 && num1>num3)
	  cout<<"The biggest number is : "<<num1;
	else if(num2>num1 && num2>num3)
	  cout<<"The biggest number is : "<<num2;
	else
	  cout<<"The biggest number is : "<<num3;
	return 0;
}
