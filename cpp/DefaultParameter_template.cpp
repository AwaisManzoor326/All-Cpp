#include<iostream>
using namespace std;
template<class T1=int, class T2=float, class T3=char>
class A
{
    public:
    T1 a;
    T2 b;
    T3 c;
    A(T1 x, T2 y, T3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<a<<'\n'<<b<<'\n'<<c<<endl<<endl;
    }
};
int main()
{
    A<>a(1, 3.3, 'z');
    a.display();
    A<float, char, bool>b(1.11, 'a', false);
    b.display();

    return 0;
}