#include <iostream>

using namespace std;

void exp()
{
    long double n,p,j;
    cout<<"\n\t*Enter number: ";     cin>>n;
    cout<<"\n\t*Enter exponent: ";    cin>>p;
    j=n;
    for(int i=1; i<p; i++)
        n=n*j;
    cout<<"\n\t\t** "<<j<<"^"<<p<<" = "<<n<<endl;
}

void sum(long double n1, long double n2)
{
    long double s = n1+n2;
    cout<<"\n\t\t* "<<n1<<"+"<<n2<<" = "<<s<<endl;
}

void sub(long double n1, long double n2)
{
    long double d = n1-n2;
    cout<<"\n\t\t* "<<n1<<"-"<<n2<<" = "<<d<<endl;
}

void mul(long double n1, long double n2)
{
    long double m = n1*n2;
    cout<<"\n\t\t* "<<n1<<"*"<<n2<<" = "<<m<<endl;
}

void mod(int n1, int n2)
{
     int m = n1% n2;
    cout<<"\n\t\t* "<<n1<<"%"<<n2<<" = "<<m<<endl;
}

int main()
{
    char o;
	cout<<"\n\n\t\t\t\t***MODIFIED CALCULATOR***\n";
	cout<<"\n\n\t**press z to exit calculator\n\t**press x to solve exponent \n\t**press any other key to solve simple calculations"<<endl;
	cin>>o;
	if(o=='x')
        exp();
    else if(o=='z')
            exit(0);
    else
    {
	long double n1,n2;      char c;
	cout<<"\n\tEnter number: ";       cin>>n1;
	cout<<"\tEnter number: ";       cin>>n2;
	cout<<"\tEnter operator: ";     cin>>c;
	switch(c)
	{
	    case '+' :sum(n1,n2);   break;
	    case '-' :sub(n1,n2);   break;
	    case '*' :mul(n1,n2);   break;
	    case '/' :cout<<"\n\t\t* "<<n1<<"/"<<n2<<" = "<<n1/n2<<endl;      break;
	    case '%' :mod(n1,n2);   break;
	    default : cout<<"\n\t\t**Invalid operator..........Please try another"<<endl;
	}
	} main();
	system("pause");
	return 0;
}
