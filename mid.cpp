#include<iostream>
using namespace std;
int main()
{
	float x1,x2,y1,y2,midx,midy,slope;
	cout<<"Enter the value for x1,y1,x2,y2:";
	cin>>x1>>y1>>x2>>y2;
	midx=(x1+x2)/2;
	midy=(y1+y2)/2;
	slope=((y2-y1)/(x2-x1));
	cout<<"\nMidpoint = ";
	cout<<midx<<","<<midy<<endl;
	cout<<"slope = "<<slope;
	return 0;
	
}
