#include<iostream>
using namespace std;
template<class T>
void swapp(T &x,T &y)
{
    T temp=x;
    x=y;
    y=temp;
}

template<class B, class C>
float AvgFunc(B b, C c)
{
    return (b+c)/2.0;
}

int main()
{
    int a=4, b=5;
    float c=4.5, d=5.5;
    swapp(a,b);
    cout<<"a= "<<a<<endl<<"b= "<<b<<endl;

    float x=AvgFunc(3.0, 6.0);
    cout<<x<<endl;
    return 0;
}