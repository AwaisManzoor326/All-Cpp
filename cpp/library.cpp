#include <iostream>
using namespace std;
int lfact(int);
int rfact(int);
int main()
{
    int a,b,c;
    cout<<"Enter a number to find factorial : "<<endl;  cin>>a;
    cout<<"Select a method : 1. using iterative approach\t2. using recursive approach "<<endl;  cin>>b;
    switch(b)
    {
        case 1: cout<<"Factorial using loops is "<<lfact(a);   cout<<endl;    break;
        case 2: cout<<"Factorial usig recursion is "<<rfact(a);   cout<<endl;    break;
        default : {cout<<"Invalid choice ...... Try again\n";
        cout<<"If you want to exit program press 0 else press any key : "<<endl;        cin>>c;
        if(c==0)
            exit(0);
        else
            main();
        }
    return 0;
}
}
int rfact(int n)
{
    if(n==1)
        return 1;
    else
        return n * rfact(n-1);
}
int lfact(int n)
{
    for(int x = n-1; x>=1; x--)
    {
        n=n*x;
    }
    return n;
}
