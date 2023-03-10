//Hierarchical inheritance 1 base class n number of derived class
#include<iostream>
using namespace std;
class data
{
	public:
		int x=12,y=20;
};
class add:public data
{
	public:
	add()
	{
	cout<<"Sum="<<x+y<<endl;
    }
};
class dif:public data
{
	public:
	dif()
	{
	cout<<"sub="<<x-y<<endl;
    }
};
class multi:public data
{
	public:
	multi()
	{
	cout<<"Product="<<x*y<<endl;
    }
};
int main()
{
	add a;
	dif d;
	multi m;
	
}
