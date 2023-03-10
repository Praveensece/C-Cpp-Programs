#include<iostream>
using namespace std;
class student 
{
	private:
		float maths,physics,chemistry;
		void cut()
		{
			cin>>maths>>physics>>chemistry;
		}
		public:
			void printcut();
};
void student::printcut()
{
	cut();
	cout<<(maths+(physics+chemistry)/2);
}

int main()
{
	student s;
	s.printcut();
	return 0;
}
