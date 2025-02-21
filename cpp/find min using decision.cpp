//use of :and ? instead of if-else
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter two integers:"; cin>>m>>n;
	cout<<(m<n?m:n)<<"is the min.\n";
	system("pause");
	return 0;
}
