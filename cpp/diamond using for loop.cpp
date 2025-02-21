 #include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int r,c,s;
	for(r=1;r<=5;r++){
		for(s=5;s>=r;s--)
		cout<<" ";
		for(c=1;c<=2*r-1;c++)
		cout<<"+";
		cout<<endl;
	}
	for(r=2;r<=5;r++){
		for(s=1;s<=r;s++)
		cout<<" ";
		for(c=9;c>=2*r-1;c--)
		cout<<"+";
		cout<<endl;
	}
	system("pause");
	return 0;
}
