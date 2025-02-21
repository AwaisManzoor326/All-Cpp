//generalized table using for loop 
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int s,e,t; 
	cout<<"Enter table you want: "; cin>>t; cout<<endl;
	cout<<"Enter starting point: "; cin>>s; cout<<endl;
	cout<<"Enter ending point: "; cin>>e; cout<<endl;
	for(int i=s;i<=e;i=i+1){
	cout<<endl<<t<<"*"<<i<<"="<<t*i;
	}
	cout<<endl;
	system("pause");
	return 0;
}