#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<n<<"<10 is"<<(n<10)<<endl;
	cout<<n<<"<=10 is"<<(n<=10)<<endl;
	cout<<n<<">10 is"<<(n>10)<<endl;
	cout<<n<<"n>=10 is"<<(n>=10)<<endl;
	cout<<n<<"==10 is"<<(n==10)<<endl;
	cout<<n<<"!=10 is"<<(n!=10)<<endl;
 		system("pause");
	return 0;
}