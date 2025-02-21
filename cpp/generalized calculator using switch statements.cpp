//making a generalized calculator using switch & while(true)
#include <iostream>
using namespace std;
int main()
{
	while(true){
	float num1,num2;
	int op;
	cout<<"\nEnter two numbers:\n"; cin>>num1>>num2;
	cout<<"\nEnter the operator from [1. +\t2. -\t3. *\t4. /\t5. %]:\n";cin>>op;
	switch(op){
		case 1 :cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl; break;
		case 2 :cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl; break;
		case 3 :cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl; break;
		case 4 :cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl; break;
		case 5 :cout<<num1<<"%"<<num2<<"="<<int(num1)%int(num2)<<endl; break;
		default : cout<<"Invalid operator.............\nPlease try again.\n\n";
	}
	}	  
	system("pause");
	return 0;
}