#include<iostream>
using namespace std;
int main()
{
	int i,k;
	for(i=2;i<=300;i++)
	{
		for(k=2;k<i;k++)
	{
		if(i%k==0)
		{
			cout<<" ";
			break;
		}
	}
	if(k==i)
	{
		cout<<k;
		}
	}
}
