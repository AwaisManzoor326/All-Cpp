//using ? and : instead of if else
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number:"; cin>>n;
	cout<<n<<(n%2==0?"is even":"is odd")<<endl;
	system("pause");
	return 0;
}