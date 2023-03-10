//hierarchical inheritance
#include<iostream>
using namespace std;
class op
{
	public:
		int powerrank;
		void rank()
		{
			cin>>powerrank;
		}
};
class ironman:public op
{
	public:
	int kills=97;
	void status()
	{
		cout<<powerrank;
		cout<<kills;
	}
};
class thor:public op
{
	public:
	int kills=137;
	void status()
	{
		cout<<powerrank;
	}
};
int main()
{
	ironman I;
	thor T;
	I.rank();
	I.status();
	T.rank();
	T.status();
	return 0;
}
