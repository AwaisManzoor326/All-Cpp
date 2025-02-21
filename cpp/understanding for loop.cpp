//sum of n integers using for loop
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter +ive integer: "; cin>>n;
	long sum=0;
	for(int i=1;i<=n;i++)
	sum=sum+i;
	cout<<"the sum of the first "<<n<<"integers is "<<sum<<endl;
	return 0;
	system("pause");
}