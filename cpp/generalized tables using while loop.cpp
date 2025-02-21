//making a generalized table using while loop
//understanding purpose of while(true)
#include <iostream>
using namespace std;
int main()
{
	int t,s,e;
	while(true){
		cout<<"Enter table : "; cin>>t; cout<<endl;
	cout<<"Enter initial point : "; cin>>s; cout<<endl;
	cout<<"Enter ending point : "; cin>>e; cout<<endl;
	while(s<=e){
		cout<<t<<"*"<<s<<"="<<t*s;
		s++;
		cout<<endl;
	}
	}
}