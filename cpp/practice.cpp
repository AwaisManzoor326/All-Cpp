#include <iostream>
using namespace std;
void prime(int);
void evenorodd(int);
int main()
{
    int a , n;
    cout<<"\n\n\t\t\t\t\t**************************************************\n\n\t\t\t\t\t\t  This is a practice program\n\n\t\t\t\t\t***************************************************\n\n";
	cout<<"\tEnter a natural number: ";       cin>>n;
	cout<<"\t*press 1 to check number is prime or not\n\t*press 2 to check number is even or odd\n\t*";
	cin>>a;
	switch(a)
	{
	    case 1:
	        prime(n);    break;
	    case 2:
            evenorodd(n);       break;
	}
	system("pause");
	return 0;
}
void prime(int n)
{
    int count=0;
    for(int i=2 ; i<=n ; i++)
    {
        if(n%i==0)
            count = count+1;
    }
    if(count==1)
        cout<<"\t"<<n<<" is a prime number."<<endl;
    else
        cout<<"\t"<<n<<" is not a prime number."<<endl;
}
void evenorodd(int n)
{
    if(n%2==0)
        cout<<"\t"<<n<<" is an even number."<<endl;
    else
        cout<<"\t"<<n<<" is an odd number."<<endl;
}
