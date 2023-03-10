//multilevel inheritance 1 base class we are deriving 1 derived class with help we are creating another derived
#include<iostream>
using namespace std;
class get 
{
	public:
		int tam,eng,mat,phy,che,comp;
		get()
		{
			cout<<"Enter the subject marks :";
			cin>>tam>>eng>>mat>>phy>>che>>comp;
		}
};
class total:public get
{
	public:
		int tot;
		total()
		{
	tot=tam+eng+mat+phy+che+comp;
	cout<<"total="<<tot;
}

};
class per:public total
{
	public:
		per()
		{
	float percent;
	percent=tot/6;
	cout<<"Percent="<<percent;
	 }
};
int main()
{
	get g;
	total t;
	per p;
}


