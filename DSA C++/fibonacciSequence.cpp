#include<iostream>
using namespace std;

int recursive(int n)
{
    if (n <= 1)
        return n;
    return recursive(n-1) + recursive(n-2);
}

int iterative(int n)
{
    if (n <= 1)
        return n;
    int a = 0, b = 1, c = 0;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
    
}

int main()
{
    int n = 6;
    cout<<"Recursion: "<<recursive(n)<<endl;
    cout<<"Iteration: "<<iterative(n)<<endl;
    return 0;
}