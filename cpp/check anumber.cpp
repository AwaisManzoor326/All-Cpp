#include <iostream>

using namespace std;

int main()
{
	int n,count=0;
	cout<<"Enter a number to check whether it is prime or not: ";  cin>>n;
	for(int i=2; i<=n; i++)
    {
            if(n%i==0)
                count=count+1;
    }
    if(count==1)
        cout<<n<<" is a prime number"<<endl;
    else
        cout<<n<<" is not a prime number"<<endl;
    cout<<"\t\t**********THANK YOU**********"<<endl;
	system("pause");
	return 0;
}
