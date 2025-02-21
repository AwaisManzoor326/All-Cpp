#include "iostream"
using namespace std;
int rfact(int);
int lfact(int);
int main()
{
    int c , n , m , o;
    cout<<"\t\t***Welcome to factorial finding program***\n"<<endl;
    cout<<"\t*press 0 to exit program\n\t*press 1 to find factorial by recursion\n\t*press 2 to find factorial by iteration\n\t*press 3 to check answer by both methods\n";
    cin>>c; cout<<endl;
    cout<<"Enter a number to find factorial : ";    cin>>n; cout<<"\n\n";
    if(c==0)
    {
        system ("cls");   cout<<"\n\n\n\n\n\t\t\tTHANKYOU\n";   exit (0);
    }
    else if(c==1)
    {
        m=rfact(n);   cout<<"\n\t**Factorial using Recursion is "<<m<<endl<<endl; main();
    }
    else if(c==2)
    {
        o=lfact(n); cout<<"\n\tFactorial using Iteration is "<<o<<endl<<endl; main();
    }
    else if(c==3)
    {
        cout<<"\n\t*factorial using recursion is "<<rfact(n)<<"\n\t*Factorial using loops is "<<lfact(n)<<endl<<endl;  main();
    }
    else
    {
          main();
    }
    return 0;
}
int rfact(int n)
{
    if(n<=1)
        return 1;
    else
        return n*rfact(n-1);
}
int lfact(int n)
{
    int fact=1;
    for (int i=1 ; i<=n ; i++)
    {
        fact=fact*i;
    }
    return fact;
}
