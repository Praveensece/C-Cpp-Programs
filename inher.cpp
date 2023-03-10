#include<iostream>
using namespace std;
class A
{
	public:
		int num1;
		void getdata()
		{
			cin>>num1;
		}
		void display()
		{
			cout<<num1;
		}
};
class b:public A
{
	public:
		int b;
		int total;
		void input()
		{
			cin>>b;
			cout<<b;
		}
		void sum()
		{
			total=num1+b;
		}
};
class c:public b
{
	public:
	int temp;
	void result()
	{
		temp=total;
		cout<<temp;
	}
};
int main()
{
	c obj;
	obj.getdata();
	obj.display();
	obj.input();
	obj.sum();
	obj.result();
	return 0;
	
	
	
	
}

