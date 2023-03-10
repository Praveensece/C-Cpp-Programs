#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[30];
	int count=0;
	cin>>a;
	int len=strlen(a);
	int i=0;
	int j;
	check:
	for(j=0;j<len;j++)
	{
		i=0;
		while(i<len)
		{
		if(a[i]==a[j])
		{
			count++;
		}
		else
		{
			count=count;
		}
		cout<<a[i]<<":"<<count;
		i++;
	    }
	}
    return 0;
}
