#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[30];
	int i,j,k;
	cin>>a;
	for(i=0;i<strlen(a);i++)
	{
		k=1;
		for(j=0;j<strlen(a);j++)
		{
			if(j>i && a[i]==a[j])
			{
				break;
			}
			if(a[i]==a[j])
			{
				k++;
			}
		}
		if(k!=0)
		cout<<a[i]<<":"<<k;
	}
    return 0;
}
